#include "common.h"

struct Obj380368Record {
    u8 unk00[2];
    u8 value;
};

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
Obj380368Record *FUN_00184310(u32 id);

/* Script command: sets the result to the byte at 2 of the record FUN_00184310 finds for its first argument. */
s32 FUN_00380368(void)
{
    scrSetResult(FUN_00184310((u16)scrGetArg(0))->value);
    return 1;
}
}
