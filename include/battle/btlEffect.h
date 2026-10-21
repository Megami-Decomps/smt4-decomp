/* battle/btlEffect.c: battle effects. */
#ifndef BATTLE_BTLEFFECT_H
#define BATTLE_BTLEFFECT_H

#include "common.h"

#define BTL_EFFECT_SLOTS 4
#define BTL_EFFECT_SLOT_SIZE 0x16   /* sizeof(BtlEffectSlot) */
#define BTL_EFFECT_SLOT_TABLE 0x58  /* where the slot table starts in the owner's block */

/* One effect slot's record (Shin Megami Tensei IV layout). */
typedef struct BtlEffectSlot {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u16 id;
    /* 0x14 */ u8 unk14[2];
} BtlEffectSlot;

/* The block that owns the slot table. */
typedef struct BtlEffectOwner {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ u8 *slots;
} BtlEffectOwner;

/* The module global (Shin Megami Tensei IV). */
typedef struct BtlEffectGlobals {
    /* 0x00 */ union { u32 unk00; const char *prefix; };
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ union { u32 unk0C; const char *otherPrefix; };
    union {
        /* 0x10 */ u8 unk10[8];
        struct { const char *name, *otherName; } reserved;
    };
    /* 0x18 */ void *data;         /* heap block */
} BtlEffectGlobals;

/* Work area of the job that owns the effects (Shin Megami Tensei IV). */
typedef struct BtlEffectJob {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 jobA;
    /* 0x3C */ u32 jobB;
    /* 0x40 */ u32 jobC;
} BtlEffectJob;

/* The same work area in Apocalypse. */
typedef struct BtlEffectJobA {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 jobA;
    /* 0x60 */ u32 jobB;
    /* 0x64 */ u32 jobC;
} BtlEffectJobA;

/* The block that owns the slot table (Apocalypse). */
typedef struct BtlEffectOwnerA {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ u8 *slots;
} BtlEffectOwnerA;

#endif
