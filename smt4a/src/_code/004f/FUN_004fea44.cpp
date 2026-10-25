/* NON_MATCHING: only callee-saved register assignment differs (retail keeps id in r8, target in r4, value28 in r9). */
#include "battle/btlReflect.h"

extern "C" {

typedef struct ReflectOffset {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
} ReflectOffset;

/* Additional motion-kind payload view within the shared reflection action. */
struct ReflectMotionOffsets {
    u8 prefix[0x34];
    ReflectOffset offset;
};
typedef char ReflectMotionOffsetCheck[
    offsetof(ReflectMotionOffsets, offset) == 0x34 ? 1 : -1];

extern u32 g_btlAux;
s32 btlEffectNameHasPrefix(u32 aux, const char *name);
s32 libc_strcmp(const char *a, const char *b);

/* Starts the action-reflect record for motion `name` (state 4 when btlEffectNameHasPrefix accepts it), flagging the death motions. */
ReflectAction *FUN_004fea44(s32 id, u32 target, u16 value48, u32 value28, const char *name, u32 value50,
                               s32 enabled, ReflectOffset offset)
{
    if (btlEffectNameHasPrefix(g_btlAux, name) != 0) {
        ReflectAction *reflect = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, target);
        reflect->kind = 4;
        return reflect;
    }
    ReflectAction *reflect = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, target);
    reflect->kind = 1;
    reflect->first = 0;
    reflect->second = 0;
    reflect->extraIds.third = value48;
    reflect->extraIds.fourth = 0;
    reflect->value = value28;
    reflect->word50 = value50;
    reinterpret_cast<ReflectMotionOffsets *>(reflect)->offset = offset;
    if (enabled != 0) {
        reflect->parameter = 1;
    } else {
        reflect->parameter = 0;
    }
    if (name != NULL && (libc_strcmp("Dead_12", name) == 0 || libc_strcmp("Dead_13", name) == 0)) {
        reflect->specialDeath.enabled = 1;
    }
    return reflect;
}

} /* extern "C" */
