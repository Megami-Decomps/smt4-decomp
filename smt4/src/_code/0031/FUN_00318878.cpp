#include "common.h"

struct DevilRecord00318878 {
    /* 0x00 */ u8 unk00[0x31];
    /* 0x31 */ u8 value;
};

extern "C" {

s32 scrGetArg(u32 index);
DevilRecord00318878 *devilGetRecord(u16 id);
s32 scrSetResult(s32 value);

/* Script command: returns the byte at 0x31 of the devil record in argument zero. */
s32 FUN_00318878(void)
{
    scrSetResult(devilGetRecord(scrGetArg(0))->value);
    return 1;
}

} /* extern "C" */
