#include "common.h"

struct Obj3b1a50Record {
    u8 unk00[0x74];
    u32 value;
};

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
Obj3b1a50Record *dataTable00FindById(u32 id);

/* Script command: sets the result to a data table 00 entry's word at 0x74 divided by 4. */
s32 FUN_003b1a50(void)
{
    scrSetResult(dataTable00FindById((u16)scrGetArg(0))->value >> 2);
    return 1;
}
}
