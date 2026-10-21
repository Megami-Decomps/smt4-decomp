#include "common.h"

struct StoredValues {
    u32 first;  // 0x00
    u32 second; // 0x04
};

extern "C" {
extern StoredValues DAT_005b4020;
extern u32 DAT_005b4024;

void sysSetCachedPair(u32 firstValue, u32 secondValue)
{
    DAT_005b4020.first = firstValue;
    DAT_005b4020.second = secondValue;
}
}
