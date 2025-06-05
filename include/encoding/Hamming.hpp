#pragma once
#include <string>
#include <vector>
#include <cstdint>

/**
 * @brief �������� 4 ����: [a, b, c, d] > 8 ��� � ������������ XOR.
 * @param nibble ������� 4 ���� �������� ������.
 * @return 8 ���: a,b,c,d,a^b,c^d,a^c,b^d.
 */
uint8_t encodeHamming(uint8_t nibble);

/**
 * @brief ���������� 8-������ ����, ��������� �������� 4 ����.
 * @param byte 8 ���, �������������� ��� a,b,c,d,a^b,c^d,a^c,b^d.
 * @return nibble � 4 ���� ������.
 */
uint8_t decodeHamming(uint8_t byte);

/**
 * @brief �������� ������� ������������������ (�� 4 ����) � �����.
 * @param inputBits ������������������ ����� (0 ��� 1).
 * @return ������ ������, ������ �������� 4 ����.
 */
std::vector<uint8_t> encodeBitSequence(const std::vector<uint8_t>& inputBits);

/**
 * @brief ����������� ����� � �������� ������� ������������������ (�� 4 ����).
 * @param encoded ������ ������ � ������.
 * @return ������������������ ����� (0 ��� 1).
 */
std::vector<uint8_t> decodeBitSequence(const std::vector<uint8_t>& encoded);

std::vector<uint8_t> stringToBitSequence(const std::string& message);

std::string bitSequenceToString(const std::vector<uint8_t>& bits);