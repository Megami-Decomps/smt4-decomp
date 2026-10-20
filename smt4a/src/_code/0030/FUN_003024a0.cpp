#include "common.h"

extern "C" {

typedef struct Global5f0c7c {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ u8 value;
} Global5f0c7c;
extern Global5f0c7c DAT_005f0c7c;

s32 gameFlagIsSet(u32 flag);

/* Stores `value` in the byte at 0xA0 of the global at 0x5F0C7C when flag 0x4D0 is set. */
void FUN_003024a0(u8 value)
{
    s32 flag;

    flag = gameFlagIsSet(0x4D0);
    if (flag != 0) {
        DAT_005f0c7c.value = value;
    }
}

} /* extern "C" */
