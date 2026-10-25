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

#endif
