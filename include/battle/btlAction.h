/* battle/btlAction.c: battle actions. */
#ifndef BATTLE_BTLACTION_H
#define BATTLE_BTLACTION_H

#include "common.h"
#include <stddef.h>

struct BtlActionRecord {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 task;
    /* 0x4c */ u32 unk4c;
    /* 0x50 */ u32 status;
    /* 0x54 */ u32 flags;
    /* 0x58 */ u8 unk58[0xa];
    /* 0x62 */ s16 memberId;
    /* 0x64 */ u8 unk64[0x94];
    /* 0xf8 */ u32 stateFlags;
    /* 0xfc */ u8 unkfc[0x18];
};

typedef char BtlActionRecordLayoutCheck[sizeof(BtlActionRecord) == 0x114 &&
    offsetof(BtlActionRecord, task) == 0x48 &&
    offsetof(BtlActionRecord, status) == 0x50 &&
    offsetof(BtlActionRecord, flags) == 0x54 &&
    offsetof(BtlActionRecord, memberId) == 0x62 &&
    offsetof(BtlActionRecord, stateFlags) == 0xf8 ? 1 : -1];

/* The module global: a word and the action data block's pointer, side by side. */
typedef struct BtlActionGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *data;       /* heap block */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u64 targetableMask; /* entry flags that make a combatant a target */
    /* 0x18 */ u8 unk18[0x60];
    /* 0x78 */ u64 untargetableMask; /* entry flags that rule a combatant out */
} BtlActionGlobals;

typedef char BtlActionGlobalsLayoutCheck[offsetof(BtlActionGlobals, targetableMask) == 0x10 &&
    offsetof(BtlActionGlobals, untargetableMask) == 0x78 ? 1 : -1];

struct BtlActionResourceEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ void *resource;
    /* 0x08 */ u16 baseIndex;
    /* 0x0A */ u8 unk0A[0x12];
};

typedef char BtlActionResourceEntrySizeCheck[sizeof(BtlActionResourceEntry) == 0x1C ? 1 : -1];

#endif
