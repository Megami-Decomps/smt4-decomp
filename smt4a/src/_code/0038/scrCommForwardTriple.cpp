#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
u32 partySlotLevelUpTo(u32 id, s32 targetLevel, s32 maximumIncrease);

s32 scrCommForwardTriple(void)
{
    s32 id = scrGetArg(0);
    s32 targetLevel = scrGetArg(1);
    s32 maximumIncrease = scrGetArg(2);
    partySlotLevelUpTo((u16)id, targetLevel, maximumIncrease);
    return 1;
}

} /* extern "C" */
