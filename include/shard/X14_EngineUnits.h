/* Apocalypse's result screen work (ResultWorkA), the object behind g_engineCleanupOwner.instance,
 * with its unit table. */
#ifndef SHARD_X14_ENGINEUNITS_H
#define SHARD_X14_ENGINEUNITS_H

#include "common.h"
#include "ui/UiSpriteState.h"
#include "ui/GridNavigation.h"
#include "script/ScriptVm.h"
#include <stddef.h>

/* One 0x150-byte unit entry. */
typedef struct EngineUnit {
    /* 0x00 */ s8 rank;        /* below 25: the slot's own record; from 25: a table record */
    /* 0x01 */ u8 unk01[0x15];
    /* 0x16 */ s16 baseStats[5]; /* the player's stats before the points were handed out (the allocation's floor) */
    /* 0x20 */ s16 maxHp;      /* the unit's values before the level-up being shown */
    /* 0x22 */ s16 maxMp;
    /* 0x24 */ s16 stats[5];
    /* 0x2E */ u8 unk2E[0x38];
    /* 0x66 */ u16 id;
    /* 0x68 */ u8 unk68[0xE8];
} EngineUnit;

/* The touch regions of one stat row's two arrows (the level-up stat screen). */
typedef struct ResultStatArrowRegions {
    /* 0x0 */ s16 second;      /* lights arrow image 0xB1 */
    /* 0x2 */ s16 first;       /* lights arrow image 0xB0 */
} ResultStatArrowRegions;

/* One 0x28-byte experience entry: entry 0 is the pool, 1.. the party members (slot record index + 1), 25.. the
 * stock slots, 0x24 the overflow. The gauges are 12-bit fixed point. */
typedef struct ResultExperienceTotal {
    /* 0x00 */ s32 total;        /* experience this entry is awarded */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u64 given;        /* of `total`, the part already paid into `exp` (fixed point) */
    /* 0x10 */ u64 exp;          /* experience towards the next level (fixed point) */
    /* 0x18 */ u16 gauge;        /* gauge width shown */
    /* 0x1A */ s16 levelOffset;  /* levels already gained, added to the record's level */
    /* 0x1C */ s16 levelUpFrame; /* frames of the level-up animation played */
    /* 0x1E */ s8 maxed;         /* the gauge is full: the level-up animation is playing */
    /* 0x1F */ u8 done;          /* nothing left to pay out */
    /* 0x20 */ s16 expBonus;
    /* 0x22 */ u8 leveledUp;
    /* 0x23 */ u8 unk23[5];
} ResultExperienceTotal;

/* Apocalypse's result screen work (0x7F58 bytes, resultCreate): IV's ResultWork is result/Result.h.
 * Held by g_engineCleanupOwner.instance; "Result CALC" is its process. */
typedef struct ResultWorkA {
    EngineUnit *selectedUnit() { return &units[current]; }

    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ UiSpriteState originSprite;    /* origin of the upper-screen result sprites */
    /* 0x00AC */ UiSpriteState listSprites[10]; /* the list cursor is the first */
    /* 0x0624 */ UiSpriteState gridCursor;
    /* 0x06B0 */ UiSpriteState pageCursor;
    /* 0x073C */ u8 unk073C[0x118];
    /* 0x0854 */ UiSpriteState banner;          /* the slide-in banner */
    /* 0x08E0 */ u8 unk08E0[0x1C70];
    /* 0x2550 */ UiSpriteState slotSprites[24]; /* one per slot record: the level-up effect over its gauge */
    /* 0x3270 */ u8 unk3270[0x10F4];
    /* 0x4364 */ s32 state;                     /* 0x17: done */
    /* 0x4368 */ s32 previousState;             /* the state before resultSetMode's change */
    /* 0x436C */ s32 step;
    /* 0x4370 */ u32 unk4370;
    /* 0x4374 */ u32 progress;
    /* 0x4378 */ u32 unk4378;
    /* 0x437C */ s32 timer;
    /* 0x4380 */ u8 unk4380[0x18];
    /* 0x4398 */ u8 exitMode;  /* 1: stop the BGM, 3: play exitSe */
    /* 0x4399 */ u8 unk4399;
    /* 0x439A */ u16 exitSe;
    /* 0x439C */ void *buffer439C;              /* heap block, freed on destroy */
    /* 0x43A0 */ ScriptProcess *process;                   /* the result script's process */
    /* 0x43A4 */ void *buffer43A4;              /* heap block, freed on destroy */
    /* 0x43A8 */ void *buffer43A8;              /* heap block, freed on destroy */
    /* 0x43AC */ u8 unk43AC[8];
    /* 0x43B4 */ s16 touchRegionCount;          /* touch regions registered by the current state */
    /* 0x43B6 */ s16 statRowRegions[5];         /* touch regions of the stat rows */
    /* 0x43C0 */ u8 unk43C0[0x18];
    /* 0x43D8 */ ResultStatArrowRegions statArrowRegions[5];
    /* 0x43EC */ u8 unk43EC[4];
    /* 0x43F0 */ u32 itemIds[6];                /* the items won, merged by id (FUN_00331714) */
    /* 0x4408 */ u32 itemCounts[6];
    /* 0x4420 */ u8 unk4420[8];
    /* 0x4428 */ s32 gold;                      /* the money won */
    /* 0x442C */ EngineUnit units[37];
    /* 0x74BC */ u8 unk74BC[4];
    /* 0x74C0 */ s32 current;  /* index of the active unit */
    /* 0x74C4 */ u8 unk74C4[0x26];
    /* 0x74EA */ s16 levelUpOrder[0x25];        /* per experience entry: its place among the level-ups, or negative */
    /* 0x7534 */ u8 unk7534[2];
    /* 0x7536 */ s16 levelUpCount;              /* the next place to hand out */
    /* 0x7538 */ u32 unk7538;
    /* 0x753C */ u8 reserveMarkers[3];
    /* 0x753F */ u8 partyMarkers[24];
    /* 0x7557 */ s8 markersPending;
    /* 0x7558 */ s32 statPointTotal;            /* the points this level-up gives */
    /* 0x755C */ u8 unk755C[4];
    /* 0x7560 */ GridNavigation statList;       /* the stat rows' cursor */
    /* 0x75C4 */ s32 statPointsLeft;            /* the points not yet spent */
    /* 0x75C8 */ s32 valueIndex;               /* index of the selected unit's skill */
    /* 0x75CC */ u32 pendingValue;            /* result script's alternate value */
    /* 0x75D0 */ u32 unk75D0;                   /* reported by scrCommGetChildValue */
    /* 0x75D4 */ u8 unk75D4[0x29C];
    /* 0x7870 */ ResultExperienceTotal experience[0x25];
    /* 0x7E38 */ u8 unk7E38[8];
    /* 0x7E40 */ s8 levelUpPlaying;             /* a level-up animation is running */
    /* 0x7E41 */ u8 unk7E41[7];
    /* 0x7E48 */ u8 unk7E48;                    /* set when the level-up event is queued */
    /* 0x7E49 */ u8 unk7E49[0xE7];
    /* 0x7F30 */ u32 job;                       /* "Result CALC" */
    /* 0x7F34 */ u32 unk7F34;
    /* 0x7F38 */ u32 drawTask;
    /* 0x7F3C */ u8 unk7F3C[4];
    /* 0x7F40 */ f32 unk7F40[4];                /* the stat panel's animation steps (engineGetFloatTableValue) */
    /* 0x7F50 */ s8 unk7F50;                    /* nonzero: the panel advances by unk7F40[0] instead of 1 */
    /* 0x7F51 */ u8 unk7F51[7];
} ResultWorkA;

/* g_engineCleanupOwner (Apocalypse, a global block, not a pointer): the result screen's work and the
 * scene shown over it, each deleted when it finishes. */
typedef struct EngineCleanupOwner {
    /* 0x00 */ s8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ ResultWorkA *instance;   /* the result screen work */
    /* 0x08 */ void *scene;             /* the scene shown over it (arousal skill, selection, ...) */
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ f32 alpha;
} EngineCleanupOwner;

extern "C" EngineCleanupOwner g_engineCleanupOwner;

/* A record with its id at 0x62. */
typedef struct EngineUnitRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
} EngineUnitRecord;

typedef char EngineUnitsOffsets[sizeof(EngineUnit) == 0x150 && offsetof(EngineUnit, id) == 0x66 &&
    offsetof(ResultWorkA, units) == 0x442C && offsetof(ResultWorkA, current) == 0x74C0 &&
    offsetof(ResultWorkA, exitMode) == 0x4398 && offsetof(ResultWorkA, exitSe) == 0x439A &&
    offsetof(ResultWorkA, job) == 0x7F30 &&
    offsetof(EngineUnitRecord, id) == 0x62 &&
    offsetof(EngineCleanupOwner, instance) == 0x4 && offsetof(EngineCleanupOwner, scene) == 0x8 &&
    offsetof(EngineCleanupOwner, alpha) == 0x20 ? 1 : -1];
typedef char ResultWorkAExperienceCheck[
    sizeof(ResultExperienceTotal) == 0x28 && offsetof(ResultExperienceTotal, given) == 8 &&
    offsetof(ResultExperienceTotal, exp) == 0x10 && offsetof(ResultExperienceTotal, done) == 0x1F &&
    offsetof(ResultExperienceTotal, leveledUp) == 0x22 &&
    offsetof(ResultWorkA, slotSprites) == 0x2550 && offsetof(ResultWorkA, levelUpOrder) == 0x74EA &&
    offsetof(ResultWorkA, levelUpCount) == 0x7536 && offsetof(ResultWorkA, levelUpPlaying) == 0x7E40 &&
    offsetof(ResultWorkA, unk7E48) == 0x7E48 ? 1 : -1];
typedef char ResultWorkAOffsetsCheck[
    offsetof(ResultWorkA, originSprite) == 0x20 && offsetof(ResultWorkA, gridCursor) == 0x624 &&
    offsetof(ResultWorkA, banner) == 0x854 && offsetof(ResultWorkA, state) == 0x4364 &&
    offsetof(ResultWorkA, timer) == 0x437C && offsetof(ResultWorkA, process) == 0x43A0 &&
    offsetof(ResultWorkA, reserveMarkers) == 0x753C && offsetof(ResultWorkA, partyMarkers) == 0x753F &&
    offsetof(ResultWorkA, markersPending) == 0x7557 && offsetof(ResultWorkA, valueIndex) == 0x75C8 &&
    offsetof(ResultWorkA, pendingValue) == 0x75CC && offsetof(ResultWorkA, unk75D0) == 0x75D0 &&
    offsetof(ResultWorkA, experience) == 0x7870 && offsetof(ResultWorkA, drawTask) == 0x7F38 &&
    sizeof(ResultWorkA) == 0x7F58 ? 1 : -1];


typedef char ResultWorkAStatLayoutCheck[offsetof(EngineUnit, maxHp) == 0x20 && offsetof(EngineUnit, baseStats) == 0x16 &&
    offsetof(ResultWorkA, unk7F50) == 0x7F50 && offsetof(EngineUnit, stats) == 0x24 &&
    offsetof(EngineUnit, id) == 0x66 && sizeof(EngineUnit) == 0x150 &&
    offsetof(ResultWorkA, statRowRegions) == 0x43B6 && offsetof(ResultWorkA, statArrowRegions) == 0x43D8 &&
    offsetof(ResultWorkA, units) == 0x442C && offsetof(ResultWorkA, statPointTotal) == 0x7558 &&
    offsetof(ResultWorkA, statList) == 0x7560 && offsetof(ResultWorkA, statPointsLeft) == 0x75C4 &&
    offsetof(ResultWorkA, valueIndex) == 0x75C8 ? 1 : -1];

#endif
