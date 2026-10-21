/* NON_MATCHING: retail resource ownership or default-store allocation differs. */
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 saveIsRecordValueBounded(u16 value);
void gameRecordSetValueClamped(u16 value, u32 index);
/* Applies both script parameters to the selected state. */
s32 FUN_0030b5d4()
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    u32 base = saveIsRecordValueBounded((u16)first);
    gameRecordSetValueClamped((u16)first, base + second);
    return 1;
}
}
