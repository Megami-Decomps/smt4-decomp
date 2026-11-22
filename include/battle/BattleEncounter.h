/* Encounter-setup state machine (smt4): the query object that tracks the arrangement file load. */
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

/* When a unit's marker and its flash start as the units of a battle are shown one after another
 * (frames; the battle module's table at 0x439a20 in Shin Megami Tensei IV). */
struct BattleMarkerTiming {
    /* 0x00 */ s32 stagger;     /* frames between one unit's marker and the next */
    /* 0x04 */ s32 flashDelay;  /* frames from a unit's marker to its flash */
    /* 0x08 */ s32 flashFrames; /* the flash effect's parameter */
};

struct BattleMarkerTimings {
    /* 0x00 */ BattleMarkerTiming normal;
    /* 0x0C */ BattleMarkerTiming large;   /* units with status bit 4 */
    /* 0x18 */ s32 startDelay;             /* frames before the first marker */
};

typedef char BattleMarkerTimingsLayoutCheck[
    offsetof(BattleMarkerTimings, large) == 0xC && offsetof(BattleMarkerTimings, startDelay) == 0x18 ? 1 : -1];

#endif
