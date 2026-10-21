#include "common.h"

struct BattleActionReflect;

struct ReflectAction {
    u8 unk00[4];       // 0x00
    u8 type;           // 0x04
    u8 unk05[0x23];    // 0x05
    u32 value;         // 0x28
};

extern "C" {
extern BattleActionReflect* g_btlActionReflect;
ReflectAction* FUN_0022699c(BattleActionReflect* context, s32 actionId,
                          s32 flags, u32 argument);

void FUN_003de9b0(s32 actionId, u32 argument, u32 value)
{
    ReflectAction* action = FUN_0022699c(g_btlActionReflect, (s16)actionId, 0, argument);
    action->type = 0x20;
    action->value = value;
}
}
