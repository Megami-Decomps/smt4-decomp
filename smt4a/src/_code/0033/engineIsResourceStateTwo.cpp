#include "common.h"

extern "C" {

struct StateOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *handle;
};
extern StateOwner DAT_005e2108;
s32 FUN_00224880(void *handle);

s32 engineIsResourceStateTwo(void)
{
    return FUN_00224880(DAT_005e2108.handle) == 2;
}

} /* extern "C" */
