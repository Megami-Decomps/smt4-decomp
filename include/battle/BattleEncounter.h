/* Encounter-setup state machine (smt4): the query object that tracks the arrangement file load, and the battle
 * main block it steps. Only the fields used so far are named. */
#ifndef BATTLE_BATTLEENCOUNTER_H
#define BATTLE_BATTLEENCOUNTER_H

#include "common.h"
#include <stddef.h>

#define BATTLE_ENCOUNTER_RECORD_COUNT 0x36

/* Progress of the encounter setup: step is the state machine's current state. */
struct BattleEncounterQuery {
    u32 step;        /* 0x00 */
    void *arrangement; /* 0x04: loaded arrangement file */
    u32 count;       /* 0x08 */
    u32 pending;     /* 0x0c */
    u32 elapsed;     /* 0x10 */
};

/* One combatant record, 0x114 bytes. */
struct BattleEncounterRecord {
    u8 unk00[0x50];
    u32 flags;       /* 0x50 */
    u32 stateFlags;  /* 0x54 */
    u16 loadFlags;   /* 0x58 */
    u8 unk5A[8];
    s16 entryId;     /* 0x62 */
    u8 unk64[0x114 - 0x64];
};

struct BattleEncounterContext {
    u8 unk0000[0xe0];
    u32 flagsE0;     /* 0x00e0 */
    u32 flagsE4;     /* 0x00e4 */
    u8 unk00E8[0x1e88 - 0xe8];
    void *arrangement; /* 0x1e88 */
    u8 unk1e8c[0x0c];
    BattleEncounterRecord *records; /* 0x1e98 */
    u8 unk1e9c;
    u8 activeCount;  /* 0x1e9d */
    u8 unk1e9e[0x2602];
    u32 flags;       /* 0x44a0 */
    u8 unk44A4[0x13];
    u8 busy;         /* 0x44b7 */
};

typedef char BattleEncounterOffsetCheck[
    sizeof(BattleEncounterRecord) == 0x114 &&
    offsetof(BattleEncounterContext, records) == 0x1e98 &&
    offsetof(BattleEncounterContext, flags) == 0x44a0 &&
    offsetof(BattleEncounterContext, busy) == 0x44b7 ? 1 : -1];

#endif
