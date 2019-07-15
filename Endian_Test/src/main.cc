#include <iostream>

using std::cout;
using std::endl;

union bytes {
    uint32_t byte4;
    uint16_t byte2[2];
    uint8_t byte1[4];
};

int main() {
    bytes b;
    b.byte4 = 0x12345678;

    cout << "----------Endian Test----------" << endl;
    cout << std::hex;
    cout << "4byte : " << b.byte4 << endl;
    cout << "2byte : " << b.byte2[0] << ", " << b.byte2[1] << endl;
    cout << "1byte : " << static_cast<uint32_t>(b.byte1[0]) << ", "
                       << static_cast<uint32_t>(b.byte1[1]) << ", "
                       << static_cast<uint32_t>(b.byte1[2]) << ", "
                       << static_cast<uint32_t>(b.byte1[3]) << endl;

    return 0;
}