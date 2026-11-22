/* result/Result.c (Shin Megami Tensei IV): the battle result screen, g_result.
 *
 * resultCreate allocates one 0xD658-byte block. Its first 0x3530 bytes are the input and
 * animation state that Apocalypse's result functions also take (ResultInputWork); the rest holds
 * the reward totals, one record per party slot, the script resources and the screen's tasks. */
#ifndef RESULT_RESULT_H
#define RESULT_RESULT_H

#include "common.h"
#include "result/ResultInput.h"
#include "script/ScriptVm.h"
#include "shard/Shard0031.h"
#include <stddef.h>

/* One party slot's result record (0x620 bytes). */
struct ResultEntry {
    /* 0x000 */ s8 unitIndex;        /* the unit record shown in this slot */
    /* 0x001 */ u8 unk001[0x15];
    /* 0x016 */ s16 baseStats[5];    /* the player's five stats without equipment when the level-up began: the
                                      * floor the stat allocation (resultStatAllocationStep) can take a stat back down to */
    /* 0x020 */ s16 maxHp;           /* the player's maximum HP, MP and five stats when the level-up began */
    /* 0x022 */ s16 maxMp;
    /* 0x024 */ s16 stats[5];
    /* 0x02E */ u8 unk02E[0x1C];
    /* 0x04A */ u16 overrideId;      /* demon id reported instead of the unit's own */
    /* 0x04C */ u8 unk04C[0x2E];
    /* 0x07A */ u8 level;            /* the level before the level-ups */
    /* 0x07B */ u8 unk07B[0x58D];
    /* 0x608 */ u16 value;
    /* 0x60A */ u8 unk60A[0x16];
};

#define RESULT_ENTRY_COUNT 25
#define RESULT_EXPERIENCE_SLOTS 24
#define RESULT_ITEM_SLOTS 6

/* The touch regions of one stat row's arrows in the stat allocation. */
struct ResultStatArrowRegions {
    /* 0x0 */ s16 decrease;
    /* 0x2 */ s16 increase;
};

/* The result screen block. */
struct ResultWork : ResultInputWork {
    /* 0x3530 */ u8 unk3530[4];
    /* 0x3534 */ s32 step;
    /* 0x3538 */ u8 unk3538[0xC];
    /* 0x3544 */ s32 curtainStep;               /* frames since the curtain started closing */
    /* 0x3548 */ s32 unk3548[6];              /* cleared when the screen is created */
    /* 0x3560 */ u8 kind;                     /* resultCreate's argument */
    /* 0x3561 */ u8 unk3561[3];
    /* 0x3564 */ u32 buffer3564;              /* heap block, freed on destroy */
    /* 0x3568 */ ScriptProcess *process;                 /* the result script's process */
    /* 0x356C */ u32 buffer356C;              /* heap block, freed on destroy */
    /* 0x3570 */ u32 buffer3570;              /* heap block, freed on destroy */
    /* 0x3574 */ u8 unk3574[8];
    /* 0x357C */ u16 touchRegionCount;         /* touch regions the stat allocation registered */
    /* 0x357E */ s16 statRowRegions[5];        /* the five stat rows' touch regions */
    /* 0x3588 */ u8 unk3588[0x16];
    /* 0x359E */ ResultStatArrowRegions statArrowRegions[5]; /* each row's two arrows */
    /* 0x35B2 */ u8 unk35B2[2];
    /* 0x35B4 */ s32 totalExperience;
    /* 0x35B8 */ s32 unitExperience[RESULT_EXPERIENCE_SLOTS]; /* by the unit's result slot */
    /* 0x3618 */ s32 itemIds[RESULT_ITEM_SLOTS];
    /* 0x3630 */ s32 itemCounts[RESULT_ITEM_SLOTS];
    /* 0x3648 */ s32 unk3648;
    /* 0x364C */ u16 unk364C;
    /* 0x364E */ u8 unk364E[2];
    /* 0x3650 */ s32 gold;
    /* 0x3654 */ ResultEntry entries[RESULT_ENTRY_COUNT];
    /* 0xCF74 */ u32 entryCount;
    /* 0xCF78 */ s32 current;                 /* index of the current entry */
    /* 0xCF7C */ u8 unkCF7C[0x1A];
    /* 0xCF96 */ s16 unkCF96[RESULT_ENTRY_COUNT]; /* one per entry, -1 when the screen is created */
    /* 0xCFC8 */ u8 unkCFC8[2];
    /* 0xCFCA */ u16 unkCFCA;
    /* 0xCFCC */ s32 remainingPoints;         /* stat points still to hand out */
    /* 0xCFD0 */ u8 unkCFD0[4];
    /* 0xCFD4 */ FlaggedEntry statCursor;      /* the list cursor over the five stats */
    /* 0xD038 */ s32 valueIndex;
    /* 0xD03C */ u32 pendingValue;
    /* 0xD040 */ s32 scriptValue;             /* reported to the script by FUN_003235a8 */
    /* 0xD044 */ u8 unkD044[0x294];
    /* 0xD2D8 */ s64 unkD2D8[RESULT_ENTRY_COUNT]; /* per entry; the four arrays below too */
    /* 0xD3A0 */ u8 unkD3A0[0xC8];
    /* 0xD468 */ u16 unkD468[RESULT_ENTRY_COUNT];
    /* 0xD49A */ u16 unkD49A[RESULT_ENTRY_COUNT];
    /* 0xD4CC */ u8 unkD4CC[0x32];
    /* 0xD4FE */ u8 unkD4FE[RESULT_ENTRY_COUNT];
    /* 0xD517 */ u8 unkD517[RESULT_ENTRY_COUNT];
    /* 0xD530 */ s8 startLevel;               /* the player's level before the level-ups */
    /* 0xD531 */ u8 unkD531[0x1B];
    /* 0xD54C */ s32 startPoints;             /* the points the counter starts from */
    /* 0xD550 */ u32 shownPoints;             /* the counted-up points shown, 12 fractional bits */
    /* 0xD554 */ u8 unkD554[0x28];
    /* 0xD57C */ s32 ailmentCycleFrames[24];  /* by unit index + 1 (0: the player): frames the shown ailment marker has been up */
    /* 0xD5DC */ s32 ailmentCycleIndex[24];   /* by unit index + 1: which of the unit's ailments its row shows */
    /* 0xD63C */ u8 unkD63C[4];
    /* 0xD640 */ u8 unkD640;
    /* 0xD641 */ u8 rewardFlagA;              /* copied from the battle reward (+0x3C) */
    /* 0xD642 */ u8 rewardFlagB;              /* copied from the battle reward (+0x3D) */
    /* 0xD643 */ u8 unkD643;
    /* 0xD644 */ u32 calculate;               /* the result calculation process */
    /* 0xD648 */ u32 unkD648;
    /* 0xD64C */ u32 drawDown;                /* the lower-screen draw task */
    /* 0xD650 */ u8 unkD650[8];
};

typedef char ResultWorkOffsetsCheck[
    offsetof(ResultWork, kind) == 0x3560 && offsetof(ResultWork, process) == 0x3568 &&
    offsetof(ResultWork, totalExperience) == 0x35B4 && offsetof(ResultWork, gold) == 0x3650 &&
    offsetof(ResultWork, entries) == 0x3654 && offsetof(ResultWork, current) == 0xCF78 &&
    offsetof(ResultWork, valueIndex) == 0xD038 && offsetof(ResultWork, scriptValue) == 0xD040 &&
    offsetof(ResultWork, rewardFlagA) == 0xD641 && offsetof(ResultWork, calculate) == 0xD644 &&
    offsetof(ResultWork, drawDown) == 0xD64C && sizeof(ResultEntry) == 0x620 &&
    offsetof(ResultEntry, value) == 0x608 && sizeof(ResultWork) == 0xD658 && sizeof(FlaggedEntry) == 0x64 ? 1 : -1];
typedef char ResultWorkLevelUpOffsetsCheck[
    offsetof(ResultEntry, maxHp) == 0x20 && offsetof(ResultEntry, stats) == 0x24 &&
    offsetof(ResultEntry, baseStats) == 0x16 && offsetof(ResultEntry, level) == 0x7A &&
    offsetof(ResultWork, touchRegionCount) == 0x357C && offsetof(ResultWork, statArrowRegions) == 0x359E &&
    offsetof(ResultEntry, overrideId) == 0x4A && offsetof(ResultWork, remainingPoints) == 0xCFCC &&
    offsetof(ResultWork, statCursor) == 0xCFD4 && offsetof(ResultWork, valueIndex) == 0xD038 &&
    offsetof(ResultWork, startLevel) == 0xD530 && offsetof(ResultWork, rewardFlagA) == 0xD641 ? 1 : -1];
typedef char ResultWorkPointsOffsetsCheck[
    offsetof(ResultWork, startPoints) == 0xD54C && offsetof(ResultWork, shownPoints) == 0xD550 &&
    offsetof(ResultWork, ailmentCycleFrames) == 0xD57C && offsetof(ResultWork, ailmentCycleIndex) == 0xD5DC ? 1 : -1];

extern "C" {
extern ResultWork *g_result;
}

#endif
