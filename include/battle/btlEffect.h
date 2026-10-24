/* battle/btlEffect.c: battle effects. */
#ifndef BATTLE_BTLEFFECT_H
#define BATTLE_BTLEFFECT_H

#include "common.h"
#include <stddef.h>

#define BTL_EFFECT_SLOTS 4

/* One effect slot's record (Shin Megami Tensei IV layout). */
typedef struct BtlEffectSlot {
    union {
        /* 0x00 */ u8 unk00[0x10];
        /* 0x00 */ char name[0x10];
    };
    /* 0x10 */ s16 unk10;
    /* 0x12 */ u16 id;
    /* 0x14 */ u8 unk14[2];
} BtlEffectSlot;

typedef struct BtlEffectSlotBlock {
    /* 0x000 */ u8 unk000[0x58];
    /* 0x058 */ BtlEffectSlot entries[BTL_EFFECT_SLOTS];
    /* 0x0B0 */ u8 unk0B0[0xE0];
    /* 0x190 */ s16 unk190;
} BtlEffectSlotBlock;

typedef char BtlEffectSlotSizeCheck[sizeof(BtlEffectSlot) == 0x16 ? 1 : -1];
typedef char BtlEffectSlotBlockTableCheck[offsetof(BtlEffectSlotBlock, entries) == 0x58 ? 1 : -1];
typedef char BtlEffectSlotBlockFallbackCheck[offsetof(BtlEffectSlotBlock, unk190) == 0x190 ? 1 : -1];
typedef char BtlEffectSlotNameOffsetCheck[offsetof(BtlEffectSlot, name) == 0 &&
    sizeof(BtlEffectSlot) == 0x16 ? 1 : -1];

/* The block that owns the slot table. */
typedef struct BtlEffectOwner {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ BtlEffectSlotBlock *slots;
} BtlEffectOwner;

/* The module global (Shin Megami Tensei IV). */
typedef struct BtlEffectGlobals {
    /* 0x00 */ union { u32 unk00; const char *prefix; };
    union {
        /* 0x04 */ u8 unk04[8];
        struct { const char *skipFirst, *skipSecond; } skipped; /* names that are not loaded */
    };
    /* 0x0C */ union { u32 unk0C; const char *otherPrefix; };
    union {
        /* 0x10 */ u8 unk10[8];
        struct { const char *name, *otherName; } reserved;
    };
    /* 0x18 */ void *data;         /* heap block */
} BtlEffectGlobals;

/* Work area of the job that owns the effects (Shin Megami Tensei IV). */
typedef struct BtlEffectJob {
    union {
        /* 0x00 */ u8 unk00[0x38];
        struct {
            /* 0x00 */ u32 parentJob;
            /* 0x04 */ u8 unk04[0x34];
        } owner;
    };
    /* 0x38 */ u32 jobA;
    /* 0x3C */ u32 jobB;
    /* 0x40 */ u32 jobC;
} BtlEffectJob;

/* The same work area in Apocalypse. */
typedef struct BtlEffectJobA {
    union {
        /* 0x00 */ u8 unk00[0x5C];
        struct {
            /* 0x00 */ u32 parentJob;
            /* 0x04 */ u8 unk04[0x58];
        } owner;
    };
    /* 0x5C */ u32 jobA;
    /* 0x60 */ u32 jobB;
    /* 0x64 */ u32 jobC;
} BtlEffectJobA;

typedef char BtlEffectJobAParentOffsetCheck[sizeof(BtlEffectJobA) == 0x68 && offsetof(BtlEffectJobA, owner.parentJob) == 0 && offsetof(BtlEffectJobA, jobA) == 0x5c ? 1 : -1];

/* The block that owns the slot table (Apocalypse). */
typedef struct BtlEffectOwnerA {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ BtlEffectSlotBlock *slots;
} BtlEffectOwnerA;

#endif
