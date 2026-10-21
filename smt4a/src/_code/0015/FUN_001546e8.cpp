#include "common.h"

struct StateValues {
    s8 primary;   // 0x00
    s8 secondary; // 0x01
};

extern "C" {
extern StateValues DAT_0063ff88;

s32 FUN_001546e8(u32 selector)
{
    if (selector == 0 || selector == 1) {
        return DAT_0063ff88.primary;
    }
    if (selector == 2) {
        return DAT_0063ff88.secondary;
    }
    return 0;
}
}
