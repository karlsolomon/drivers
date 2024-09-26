#include <array>
#include <cstdint>
#include <cstring>

#include "ring.h"
constexpr uint8_t bufLen = 7;
using myStruct = struct {
    long a;
    short b;
    std::array<uint8_t, bufLen> buf;
};

auto testStruct(int argc, char** argv) -> int {
    myStruct s1 = {89898989, 0x55, {0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77}};
    myStruct s2 = {12345678, 0xAA, {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07}};
    Ring<myStruct> r(2);
    r.push(s1);
    r.push(s2);
    myStruct s3;
    r.pop(&s3);
    return (memcmp(&s3, &s1, sizeof(myStruct)) != 0);
}
