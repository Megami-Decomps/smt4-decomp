#include "common.h"

struct Record003a9398 {
    /* 0x00 */ u8 unk00[0x8a];
    /* 0x8a */ u16 value;
};

extern "C" {

s32 scrGetArg(u32 index);
Record003a9398 *dataTable00FindById(u16 id);
s32 scrSetResult(s32 value);

/* Script command: returns the halfword at 0x8a of the data table entry for the id in argument zero. */
s32 FUN_003a9398(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->value);
    return 1;
}

} /* extern "C" */
