#include "common.h"

struct BattleActionReflect {
    u32 unk00;       // 0x00
    u8 actionType;   // 0x04
};

extern "C" {
extern BattleActionReflect* g_btlActionReflect;
BattleActionReflect* FUN_0022699c(BattleActionReflect* reflect, s32 actionId, s32 flags, u32 argument);

void btlActionReflectRun(s32 actionId, u32 argument)
{
    BattleActionReflect* result = FUN_0022699c(g_btlActionReflect, (s16)actionId, 0, argument);
    result->actionType = 0x29;
}
}
