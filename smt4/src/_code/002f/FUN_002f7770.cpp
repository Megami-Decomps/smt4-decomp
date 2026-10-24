#include "common.h"

struct Obj2f7770Record {
    u8 unk00[0x30];
    u8 value;
};

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
Obj2f7770Record *devilGetRecord(u32 id);

/* Script command: sets the result to the byte at 0x30 of the devil record named by its first argument. */
s32 FUN_002f7770(void)
{
    scrSetResult(devilGetRecord((u16)scrGetArg(0))->value);
    return 1;
}
}
