#include "common.h"

struct Obj318828Record {
    u8 unk00[0x84];
    u16 value;
};

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
Obj318828Record *dataTable00FindById(u32 id);

/* Script command: sets the result to the halfword at 0x84 of the data table 00 entry named by its first argument. */
s32 FUN_00318828(void)
{
    scrSetResult(dataTable00FindById((u16)scrGetArg(0))->value);
    return 1;
}
}
