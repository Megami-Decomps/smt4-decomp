/* NON_MATCHING: only callee-saved register assignment differs (retail keeps id in r8, target in r4, value28 in r9). */
#include "common.h"

extern "C" {

typedef struct ReflectOffset {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
} ReflectOffset;

/* The battle action-reflect record (only the fields set here are named). */
typedef struct BtlActionReflect {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 unk05[0x1B];
    /* 0x20 */ u8 isDeath;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u16 unk24;
    /* 0x26 */ u16 unk26;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ ReflectOffset offset;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ u16 unk48;
    /* 0x4A */ u16 unk4A;
    /* 0x4C */ u32 enabled;
    /* 0x50 */ u32 unk50;
} BtlActionReflect;

extern u32 g_btlAux;
extern BtlActionReflect *g_btlActionReflect;
s32 btlEffectNameHasPrefix(u32 aux, const char *name);
BtlActionReflect *FUN_004102d8(BtlActionReflect *reflect, s16 id, s32 zero, u32 target);
s32 libc_strcmp(const char *a, const char *b);

/* Starts the action-reflect record for motion `name` (state 4 when btlEffectNameHasPrefix accepts it), flagging the death motions. */
BtlActionReflect *FUN_004fea44(s32 id, u32 target, u16 value48, u32 value28, const char *name, u32 value50,
                               s32 enabled, ReflectOffset offset)
{
    if (btlEffectNameHasPrefix(g_btlAux, name) != 0) {
        BtlActionReflect *reflect = FUN_004102d8(g_btlActionReflect, id, 0, target);
        reflect->state = 4;
        return reflect;
    }
    BtlActionReflect *reflect = FUN_004102d8(g_btlActionReflect, id, 0, target);
    reflect->state = 1;
    reflect->unk24 = 0;
    reflect->unk26 = 0;
    reflect->unk48 = value48;
    reflect->unk4A = 0;
    reflect->unk28 = value28;
    reflect->unk50 = value50;
    reflect->offset = offset;
    if (enabled != 0) {
        reflect->enabled = 1;
    } else {
        reflect->enabled = 0;
    }
    if (name != NULL && (libc_strcmp("Dead_12", name) == 0 || libc_strcmp("Dead_13", name) == 0)) {
        reflect->isDeath = 1;
    }
    return reflect;
}

} /* extern "C" */
