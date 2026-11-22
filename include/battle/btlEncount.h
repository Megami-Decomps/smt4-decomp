/* battle/btlEncount.c: encounter state. */
#ifndef BATTLE_BTLENCOUNT_H
#define BATTLE_BTLENCOUNT_H

#include "common.h"
#include <stddef.h>
#include "battle/btlMain.h"

#define BTL_ENCOUNT_ACTIVE 4 /* BtlEncount.flags: encounters are being processed */

typedef struct BtlEncount {
    union {
        /* 0x00 */ u8 unk00[4];
        /* 0x00 */ s32 state;
    };
    /* 0x04 */ void *data;     /* heap block */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 flags;
} BtlEncount;
typedef char BtlEncountStateOffsetCheck[
    offsetof(BtlEncount, state) == 0 && sizeof(BtlEncount) == 0x10 ? 1 : -1];

/* Work area of the job that owns the encounter state. */
typedef struct BtlEncountOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 job;        /* job stopped when the state is destroyed */
} BtlEncountOwner;

/* State masks kept in Apocalypse's encounter module global. */
struct BtlEncounterGlobalsA {
    union {
        u8 unk00[0x30];
        /* 0x00 */ BtlEncount *work;
    };
    /* 0x30 */ u64 initialStateMask;
    union {
        u8 unk38[0x20];
        struct {
            u8 unk38BeforeTransitionMask[8];
            union {
                /* 0x40 */ u64 mask;
                /* 0x40 */ u32 words[2];
            };
        } transition;
        struct {
            u8 unk38BeforeOrderMask[0x18];
            /* 0x50 */ u64 mask;           /* set with orderBuiltMask once the turn order is built (FUN_003e16cc) */
        } order;
    };
    /* 0x58 */ u64 queuedStateMask;
    /* 0x60 */ u64 initializedMask;
    /* 0x68 */ u64 orderBuiltMask;         /* the global ends at 0x70, where g_btlEvent starts */
};
typedef char BtlEncounterGlobalsAMaskOffsetCheck[
    offsetof(BtlEncounterGlobalsA, initialStateMask) == 0x30 &&
    offsetof(BtlEncounterGlobalsA, queuedStateMask) == 0x58 &&
    offsetof(BtlEncounterGlobalsA, initializedMask) == 0x60 &&
    offsetof(BtlEncounterGlobalsA, order.mask) == 0x50 && offsetof(BtlEncounterGlobalsA, orderBuiltMask) == 0x68 &&
    sizeof(BtlEncounterGlobalsA) == 0x70 ? 1 : -1];
typedef char BtlEncounterGlobalsAWorkOffsetCheck[
    offsetof(BtlEncounterGlobalsA, work) == 0 && sizeof(BtlEncounterGlobalsA) == 0x70 ? 1 : -1];
typedef char BtlEncounterGlobalsATransitionMaskOffsetCheck[
    offsetof(BtlEncounterGlobalsA, transition.mask) == 0x40 &&
    offsetof(BtlEncounterGlobalsA, transition.words) == 0x40 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

u32 btlRosterGroupAllInactive(BtlMainStateA *state, s32 group);

#ifdef __cplusplus
}
#endif

#endif
