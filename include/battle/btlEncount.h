/* battle/btlEncount.c: encounter state. */
#ifndef BATTLE_BTLENCOUNT_H
#define BATTLE_BTLENCOUNT_H

#include "common.h"
#include <stddef.h>

#define BTL_ENCOUNT_ACTIVE 4 /* BtlEncount.flags: encounters are being processed */

typedef struct BtlEncount {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *data;     /* heap block */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 flags;
} BtlEncount;

/* Work area of the job that owns the encounter state. */
typedef struct BtlEncountOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 job;        /* job stopped when the state is destroyed */
} BtlEncountOwner;

/* State masks kept in Apocalypse's encounter module global. */
struct BtlEncounterGlobalsA {
    u8 unk00[0x30];
    /* 0x30 */ u64 initialStateMask;
    u8 unk38[0x20];
    /* 0x58 */ u64 queuedStateMask;
};
typedef char BtlEncounterGlobalsAMaskOffsetCheck[
    offsetof(BtlEncounterGlobalsA, initialStateMask) == 0x30 &&
    offsetof(BtlEncounterGlobalsA, queuedStateMask) == 0x58 &&
    sizeof(BtlEncounterGlobalsA) == 0x60 ? 1 : -1];

#endif
