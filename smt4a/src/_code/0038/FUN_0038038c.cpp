#include "common.h"

struct Record0038038c {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 value;
};

extern "C" {

s32 scrGetArg(u32 index);
Record0038038c *FUN_00184310(u16 id);
s32 scrSetResult(s32 value);

/* Script command: returns the byte at 0x38 of the record for the id in argument zero. */
s32 FUN_0038038c(void)
{
    scrSetResult(FUN_00184310(scrGetArg(0))->value);
    return 1;
}

} /* extern "C" */
