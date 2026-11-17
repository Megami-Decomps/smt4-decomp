#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: sets the result to the talk tone of the devil named by its first argument. */
s32 FUN_002f7770(void)
{
    scrSetResult(nkmBaseGetRecord((u16)scrGetArg(0))->talkTone);
    return 1;
}
}
