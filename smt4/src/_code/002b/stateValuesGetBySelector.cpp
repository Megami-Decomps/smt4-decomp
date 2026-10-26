#include "common.h"

struct StateValues {
    s8 primary;   // 0x00
    s8 secondary; // 0x01
};

extern "C" {
extern StateValues DAT_004e3be0;

s32 stateValuesGetBySelector(u32 selector)
{
    if (selector == 0 || selector == 1) {
        return DAT_004e3be0.primary;
    }
    if (selector == 2) {
        return DAT_004e3be0.secondary;
    }
    return 0;
}
}
