#include "shard/W6_W6Match2_ReflectAction.h"
struct BattleUnit;

extern "C" {
ReflectAction* FUN_004102d8(ReflectContext* context, s32 id, s32 target, u32 flags);
BattleUnit* btlGetMainState();
s32 FUN_003eb1cc(const BattleUnit* unit);

// Create a type-0x41 reflected action and attach its value when battle masks permit.
ReflectAction* btlReflectCreateKind41(s32 id, u32 flags, u32 value)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x41;
    if (FUN_003eb1cc(btlGetMainState()) == 0) {
        action->value = value;
    }
    return action;
}
}
