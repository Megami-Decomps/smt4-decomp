/* NON_MATCHING: actor/options saved registers are swapped (retail actor=sl, options=r4); tail otherwise matches. */
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "battle/btlDebug.h"

extern "C" {
extern BtlAuxA* g_btlAux;

s32 libc_strcmp(const char* first, const char* second);

ReflectAction* FUN_004fdcd8(s32 actor, u32 options, u32 first, s32 target,
                           u32 third, u32 fourth, u32 value, const char* name)
{
    // These two floating payload words are specific to this action kind.
    struct FloatPayloadView {
        u8 unk00[0x34];
        f32 first;
        f32 second;
    };
    if (btlEffectNameHasPrefix(reinterpret_cast<u32>(g_btlAux), reinterpret_cast<u32>(name))) {
        ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
        action->kind = 4;
        return action;
    }
    if (target >= 109) {
        return NULL;
    }
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    action->kind = 1;
    action->first = (u16)first;
    action->second = (u16)target;
    action->extraIds.third = (u16)third;
    action->extraIds.fourth = (u16)fourth;
    action->value = value;
    reinterpret_cast<FloatPayloadView*>(action)->first = 0.0f;
    reinterpret_cast<FloatPayloadView*>(action)->second = 0.0f;
    action->parameter = 0;
    action->word50 = 1;
    if (name && (!libc_strcmp("Dead_12", name) || !libc_strcmp("Dead_13", name))) {
        action->specialDeath.enabled = 1;
    }
    return action;
}
}
