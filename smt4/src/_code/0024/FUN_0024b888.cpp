/* NON_MATCHING: unit and four identifier arguments are assigned different saved registers from retail. */
#include "shard/W6_W6Match2_ReflectAction.h"

struct BattleMainState;

extern "C" {
BattleMainState *btlGetMainState(void);
ReflectAction *FUN_0022699c(ReflectContext *, s16, s32, u32);

// Queue reflection action thirty-five with four halfword identifiers.
u32 FUN_0024b888(s32 unit, u32 argument, u16 first, u16 second, u16 third, u16 fourth)
{
    btlGetMainState();
    ReflectAction *action = FUN_0022699c(g_btlActionReflect, (s16)unit, 0, argument);
    action->kind = 0x23;
    action->first = first;
    action->second = second;
    action->extraIds.third = third;
    action->extraIds.fourth = fourth;
    return 1;
}
}
