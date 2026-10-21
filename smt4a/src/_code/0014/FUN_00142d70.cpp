#include "common.h"

struct ValuePair {
    u32 first;  // 0x00
    u32 second; // 0x04
};

extern "C" {
extern ValuePair DAT_005b3d8c;

void FUN_00142d70(u32 firstValue, u32 secondValue)
{
    DAT_005b3d8c.first = firstValue;
    DAT_005b3d8c.second = secondValue;
}
}
