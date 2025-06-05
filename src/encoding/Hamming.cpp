#include "encoding/Hamming.hpp"

uint8_t encodeHamming(uint8_t nibble) {
    uint8_t a = (nibble >> 3) & 1;
    uint8_t b = (nibble >> 2) & 1;
    uint8_t c = (nibble >> 1) & 1;
    uint8_t d = (nibble >> 0) & 1;

    uint8_t e = a ^ b;
    uint8_t f = c ^ d;
    uint8_t g = a ^ c;
    uint8_t h = b ^ d;

    return (a << 7) | (b << 6) | (c << 5) | (d << 4)
        | (e << 3) | (f << 2) | (g << 1) | (h << 0);
}

uint8_t decodeHamming(uint8_t byte) {
    uint8_t a = (byte >> 7) & 1;
    uint8_t b = (byte >> 6) & 1;
    uint8_t c = (byte >> 5) & 1;
    uint8_t d = (byte >> 4) & 1;
    return (a << 3) | (b << 2) | (c << 1) | d;
}

std::vector<uint8_t> encodeBitSequence(const std::vector<uint8_t>& inputBits) {
    std::vector<uint8_t> result;

    for (size_t i = 0; i + 3 < inputBits.size(); i += 4) {
        uint8_t nibble = (inputBits[i] << 3) | (inputBits[i + 1] << 2) |
            (inputBits[i + 2] << 1) | (inputBits[i + 3]);
        uint8_t encoded = encodeHamming(nibble);
        // ��������� 8-������ ����� �� ��������� ����
        for (int j = 7; j >= 0; --j) {
            result.push_back((encoded >> j) & 1);
        }
    }
    return result;
}

std::vector<uint8_t> decodeBitSequence(const std::vector<uint8_t>& encoded) {
    std::vector<uint8_t> bits;
    for (size_t i = 0; i < encoded.size(); i += 8) {
        // �������� 8 ����� � ���� ����
        uint8_t byte = 0;
        for (size_t j = 0; j < 8; ++j) {
            byte |= (encoded[i + j] << (7 - j));
        }

        // ���������� ���� � ������� decodeHamming
        uint8_t nibble = decodeHamming(byte);

        // ��������� 4 ���� ������ � ��������� �� � ���������
        bits.push_back((nibble >> 3) & 1);
        bits.push_back((nibble >> 2) & 1);
        bits.push_back((nibble >> 1) & 1);
        bits.push_back((nibble >> 0) & 1);
    }

    return bits;
}

std::vector<uint8_t> stringToBitSequence(const std::string& message) {
    std::vector<uint8_t> bits;
    bits.reserve(message.size() * 8); // ����������� ����� ��� 8 ��� �� ������

    for (char c : message) {
        // ����������� ������ ������ � 8 ���
        for (int i = 7; i >= 0; --i) {
            bits.push_back((c >> i) & 1); // ��������� i-� ��� �������
        }
    }

    return bits;
}

std::string bitSequenceToString(const std::vector<uint8_t>& bits) {
    std::string message;
    if (bits.size() % 8 != 0) {
        // ���� ����� ������� ������������������ �� ������ 8, ���������� ������ ������
        return "";
    }

    for (size_t i = 0; i < bits.size(); i += 8) {
        uint8_t byte = 0;
        // �������� 8 ��� � ���� ����
        for (size_t j = 0; j < 8; ++j) {
            if (bits[i + j] > 1) {
                // ���� ��� �� 0 ��� 1, ���������� ������ ������
                return "";
            }
            byte |= (bits[i + j] << (7 - j));
        }
        message.push_back(static_cast<char>(byte));
    }

    return message;
}