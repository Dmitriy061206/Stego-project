#pragma once

#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

// ��������� ��� PVD
extern const std::vector<std::pair<int, int>> pvd_ranges;

//// �������������� ������ ����� � std::vector<uint8_t>
//std::vector<uint8_t> string_to_bits(const std::string& bit_string);

// ��������� ��������� PVD
std::pair<int, int> get_pvd_range(int diff);

// ������� ����������� PVD
void embed_pvd(const std::string& image_path, const std::vector<uint8_t>& message_bits, const std::string& output_path);

// ������� ���������� PVD
std::vector<uint8_t> extract_pvd(const std::string& stego_path, size_t num_bits);