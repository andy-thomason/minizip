
#include <cstdint>
#include <cstdio>
#include <vector>
#include <iostream>

unsigned char if_zip[] = {
  0x50, 0x4b, 0x03, 0x04, 0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0xb4, 0x7b,
  0xd4, 0x48, 0xc1, 0xad, 0x19, 0x2d, 0xea, 0x02, 0x00, 0x00, 0x09, 0x06,
  0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x69, 0x66, 0x2e, 0x74, 0x78, 0x74,
  0x5d, 0x54, 0xcb, 0x6e, 0xdb, 0x40, 0x0c, 0xbc, 0x07, 0xf0, 0x3f, 0xb0,
  0x27, 0x5f, 0xec, 0x7e, 0x40, 0x72, 0x4a, 0xd1, 0x00, 0x0d, 0x8a, 0xa2,
  0x97, 0x00, 0x41, 0x8f, 0x6b, 0x89, 0x92, 0xb6, 0xd6, 0x2e, 0x85, 0x7d,
  0x58, 0xd1, 0x77, 0xb4, 0x1f, 0xdc, 0xe1, 0xae, 0x6c, 0xd7, 0x3e, 0x09,
  0x5a, 0x3e, 0x66, 0xc8, 0x21, 0xf9, 0xda, 0x6d, 0x1e, 0x36, 0x0f, 0xaf,
  0x1d, 0x2d, 0x92, 0xa9, 0x31, 0x9e, 0x8e, 0xcc, 0x93, 0xfe, 0x04, 0x1a,
  0xd8, 0xb4, 0x34, 0x0f, 0xec, 0xc9, 0x8c, 0x23, 0x99, 0x83, 0xe4, 0xa4,
  0x86, 0xcd, 0x03, 0x3d, 0x07, 0xa6, 0x51, 0xa2, 0xf5, 0x3d, 0xa5, 0x81,
  0x6d, 0x88, 0x64, 0x7c, 0x4b, 0x87, 0xd1, 0x38, 0x7d, 0xb2, 0x89, 0xc4,
  0xab, 0xe7, 0xee, 0x26, 0x71, 0x0a, 0x39, 0x96, 0x04, 0x21, 0xf2, 0xd8,
  0x5d, 0x13, 0x3b, 0x7c, 0x5b, 0xc9, 0x87, 0xb4, 0x86, 0x10, 0x7d, 0x01,
  0x90, 0x33, 0x47, 0x56, 0xb3, 0xcc, 0xc6, 0x37, 0x4c, 0x9d, 0x84, 0x0a,
  0x55, 0x5d, 0x0b, 0xb2, 0xc8, 0xd3, 0x0d, 0xc0, 0x6c, 0x80, 0xac, 0x44,
  0xbc, 0x24, 0x3a, 0x30, 0x25, 0x1b, 0x18, 0xac, 0x96, 0x62, 0x40, 0x44,
  0xc9, 0xfd, 0x33, 0xc0, 0xa4, 0xe1, 0xa3, 0x85, 0xb1, 0x14, 0xb5, 0x43,
  0x4e, 0xbf, 0x4d, 0xd4, 0xb2, 0x19, 0xc9, 0x7a, 0xb5, 0x44, 0xf8, 0x5e,
  0x3c, 0x07, 0x93, 0xb8, 0x3d, 0x3b, 0xf5, 0xf6, 0xc4, 0x48, 0xb8, 0x00,
  0x5e, 0x0d, 0xe7, 0xb4, 0xcf, 0x80, 0x5d, 0x38, 0xad, 0x4e, 0xa3, 0xc8,
  0x51, 0xf9, 0x51, 0x2f, 0x82, 0x48, 0xaf, 0xe4, 0xcd, 0x58, 0x9f, 0x66,
  0x1b, 0xf9, 0xf1, 0xae, 0xe7, 0x6d, 0x60, 0xe3, 0x68, 0x7f, 0x21, 0x5f,
  0x8a, 0x2f, 0x8f, 0xb1, 0x4a, 0xe1, 0x4c, 0x4c, 0x1c, 0x9e, 0x14, 0xe9,
  0xff, 0x8e, 0x0e, 0xd6, 0x1f, 0xef, 0xc3, 0xd2, 0x20, 0xb9, 0x1f, 0xd2,
  0x1a, 0x68, 0xac, 0xbb, 0x6d, 0x92, 0x63, 0xb0, 0x9c, 0x6d, 0x1a, 0xe8,
  0x2d, 0xd8, 0xec, 0xa6, 0xa1, 0x44, 0x7f, 0xb5, 0xb1, 0x20, 0x9c, 0x4b,
  0x49, 0xc0, 0x4e, 0x9a, 0x2a, 0x22, 0xe1, 0x2c, 0x64, 0xdd, 0x24, 0x31,
  0x09, 0x84, 0xfe, 0xad, 0x22, 0x42, 0x09, 0x8a, 0xc6, 0xf1, 0x6d, 0xea,
  0x03, 0x9b, 0x50, 0xda, 0x52, 0xbe, 0x70, 0x81, 0xe2, 0xc0, 0x81, 0x79,
  0x8b, 0x9e, 0xc5, 0x49, 0x8e, 0xec, 0x15, 0xe0, 0x0d, 0x2d, 0x48, 0x55,
  0x99, 0xa3, 0x37, 0x27, 0x8e, 0x1a, 0x54, 0xf5, 0x46, 0x88, 0x99, 0x8a,
  0xd8, 0x9d, 0xc8, 0xb8, 0xaa, 0x30, 0x9b, 0xd4, 0x0c, 0x35, 0x21, 0x0a,
  0xee, 0x4b, 0x65, 0xd4, 0x23, 0xb0, 0x96, 0x38, 0xda, 0x0e, 0x16, 0xd9,
  0xd1, 0x21, 0x28, 0xc2, 0x45, 0x0e, 0xf0, 0x95, 0xa9, 0x0e, 0x66, 0xb6,
  0x63, 0x4b, 0x5b, 0x76, 0x94, 0xa7, 0x5a, 0xfb, 0x2c, 0xc1, 0xef, 0x75,
  0x9e, 0x93, 0xc2, 0xdc, 0xcb, 0x51, 0xb8, 0x88, 0x67, 0xad, 0x64, 0x22,
  0xe9, 0xca, 0x98, 0x16, 0xac, 0xd9, 0x7a, 0xaf, 0x14, 0xce, 0x18, 0xc1,
  0xc6, 0xe3, 0x3a, 0xef, 0xea, 0x9f, 0x72, 0xf0, 0xea, 0x3f, 0x59, 0x30,
  0xde, 0x03, 0x7a, 0x9f, 0x24, 0x6a, 0x15, 0xea, 0x8b, 0x85, 0xe1, 0x5d,
  0xe1, 0x13, 0x93, 0x09, 0x98, 0xd4, 0xde, 0x60, 0xd8, 0x4c, 0x5d, 0x09,
  0x34, 0xaf, 0xbf, 0xcb, 0xed, 0xf9, 0xc4, 0x78, 0x57, 0x25, 0x06, 0x6d,
  0x0d, 0x38, 0xb7, 0xd7, 0x2d, 0x0c, 0x9a, 0x2f, 0xde, 0x0a, 0x80, 0xbe,
  0x35, 0x7c, 0xd9, 0xdd, 0xb0, 0x2e, 0x03, 0x07, 0x74, 0xaa, 0xc0, 0x5a,
  0xcf, 0x73, 0x11, 0x40, 0x28, 0x96, 0xd7, 0xe2, 0x5a, 0x48, 0x8f, 0x82,
  0x41, 0x37, 0x1d, 0x46, 0x40, 0x1b, 0xbd, 0x90, 0xc1, 0x86, 0xf7, 0x28,
  0x69, 0xe5, 0x1e, 0xa1, 0xaa, 0xa0, 0x87, 0xa8, 0xb3, 0xec, 0x2d, 0x7c,
  0xe0, 0x60, 0xa3, 0x8e, 0xdd, 0x50, 0x76, 0xde, 0xaf, 0xa7, 0x81, 0x5e,
  0x3e, 0x1a, 0x9e, 0xea, 0x88, 0xbc, 0x5b, 0xf4, 0x6d, 0x1e, 0x2c, 0xd4,
  0x8b, 0x66, 0x29, 0x32, 0xe3, 0xd9, 0x3d, 0xd2, 0x9f, 0x6f, 0x35, 0xd9,
  0xa7, 0xbf, 0x77, 0x9d, 0x2f, 0x5b, 0x52, 0x14, 0x6a, 0x82, 0xcc, 0x6d,
  0xbd, 0x2b, 0xd7, 0x8b, 0x74, 0xb2, 0x21, 0x65, 0x3e, 0xef, 0xf1, 0x7c,
  0x71, 0xfe, 0x5e, 0xc6, 0x62, 0x5f, 0x16, 0x6d, 0x2c, 0x33, 0x0b, 0xf4,
  0x46, 0x9c, 0x03, 0xdf, 0x24, 0xb9, 0x19, 0xea, 0x25, 0xf2, 0x6c, 0x95,
  0x38, 0xfa, 0xc4, 0x71, 0xf5, 0x3d, 0x29, 0xf9, 0x2e, 0x58, 0xf6, 0x00,
  0x53, 0x06, 0x43, 0x0e, 0xd7, 0x43, 0xf4, 0xda, 0x5d, 0x2e, 0x54, 0x23,
  0xd9, 0xaf, 0x8b, 0xa3, 0x56, 0xcc, 0x54, 0x42, 0x0a, 0xd5, 0x1c, 0x3b,
  0xed, 0x00, 0x71, 0x27, 0x85, 0x96, 0xae, 0x2c, 0xb2, 0x87, 0x2a, 0x38,
  0x1a, 0x8a, 0x83, 0xeb, 0x98, 0x13, 0x6b, 0xe2, 0x77, 0xcd, 0x13, 0xed,
  0x47, 0x5a, 0xa0, 0x44, 0x23, 0x00, 0xdf, 0xaa, 0xbe, 0x78, 0xc4, 0xf4,
  0xb4, 0x58, 0x8f, 0x72, 0xf4, 0x42, 0xd6, 0x69, 0xfe, 0xa5, 0x17, 0x53,
  0x7b, 0xad, 0xe9, 0x5e, 0x8c, 0x3a, 0x69, 0x57, 0x74, 0x3a, 0x96, 0xda,
  0xfc, 0x84, 0x43, 0xb4, 0x8d, 0xaa, 0x81, 0x4d, 0x97, 0xf1, 0xdf, 0xaf,
  0x9d, 0x47, 0xa0, 0x13, 0x88, 0xb5, 0x2f, 0x8b, 0x08, 0x56, 0x07, 0x1d,
  0xa6, 0x1f, 0xc6, 0xef, 0xc8, 0x01, 0x5d, 0xfc, 0x67, 0xd5, 0x60, 0xf3,
  0xf0, 0x0f, 0x50, 0x4b, 0x01, 0x02, 0x17, 0x0b, 0x14, 0x00, 0x00, 0x00,
  0x08, 0x00, 0xb4, 0x7b, 0xd4, 0x48, 0xc1, 0xad, 0x19, 0x2d, 0xea, 0x02,
  0x00, 0x00, 0x09, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0xb6, 0x81, 0x00, 0x00, 0x00, 0x00,
  0x69, 0x66, 0x2e, 0x74, 0x78, 0x74, 0x50, 0x4b, 0x05, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x34, 0x00, 0x00, 0x00, 0x0e, 0x03,
  0x00, 0x00, 0x00, 0x00
};

#include <minizip/deflate_decoder.hpp>
#include <minizip/zipfile_reader.hpp>

int main() {
  zipfile_reader reader(if_zip, if_zip + sizeof(if_zip));

  auto names = reader.filenames();
  std::vector<uint8_t> text = reader.read(names[0]);
  std::cout.write((const char*)text.data(), text.size());

  auto entries = reader.dir_entries();
  std::vector<uint8_t> text2 = reader.read_entry(entries[0]);
  std::cout.write((const char*)text2.data(), text2.size());
}
