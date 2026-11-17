/* result/Result.c (Shin Megami Tensei IV): the battle result screen, g_result.
 *
 * resultCreate allocates one 0xD658-byte block. Its first 0x3530 bytes are the input and
 * animation state that Apocalypse's result functions also take (ResultInputWork); the rest holds
 * the reward totals, one record per party slot, the script resources and the screen's tasks. */
#ifndef RESULT_RESULT_H
#define RESULT_RESULT_H

#include "common.h"
#include "result/ResultInput.h"
#include <stddef.h>

/* One party slot's result record (0x620 bytes). */
struct ResultEntry {
    /* 0x000 */ s8 unitIndex;        /* the unit record shown in this slot */
    /* 0x001 */ u8 unk001[0x49];
    /* 0x04A */ u16 overrideId;      /* demon id reported instead of the unit's own */
    /* 0x04C */ u8 unk04C[0x5BC];
    /* 0x608 */ u16 value;
    /* 0x60A */ u8 unk60A[0x16];
};

#define RESULT_ENTRY_COUNT 25
#define RESULT_EXPERIENCE_SLOTS 24
#define RESULT_ITEM_SLOTS 6

/* The result screen block. */
struct ResultWork : ResultInputWork {
    /* 0x3530 */ u8 unk3530[4];
    /* 0x3534 */ s32 step;
    /* 0x3538 */ u8 unk3538[0xC];
    /* 0x3544 */ s32 curtainStep;               /* frames since the curtain started closing */
    /* 0x3548 */ u8 unk3548[0x18];
    /* 0x3560 */ u8 kind;                     /* resultCreate's argument */
    /* 0x3561 */ u8 unk3561[3];
    /* 0x3564 */ u32 buffer3564;              /* heap block, freed on destroy */
    /* 0x3568 */ u32 process;                 /* the result script's process */
    /* 0x356C */ u32 buffer356C;              /* heap block, freed on destroy */
    /* 0x3570 */ u32 buffer3570;              /* heap block, freed on destroy */
    /* 0x3574 */ u8 unk3574[0x40];
    /* 0x35B4 */ s32 totalExperience;
    /* 0x35B8 */ s32 unitExperience[RESULT_EXPERIENCE_SLOTS]; /* by the unit's result slot */
    /* 0x3618 */ s32 itemIds[RESULT_ITEM_SLOTS];
    /* 0x3630 */ s32 itemCounts[RESULT_ITEM_SLOTS];
    /* 0x3648 */ u8 unk3648[8];
    /* 0x3650 */ s32 gold;
    /* 0x3654 */ ResultEntry entries[RESULT_ENTRY_COUNT];
    /* 0xCF74 */ u32 entryCount;
    /* 0xCF78 */ s32 current;                 /* index of the current entry */
    /* 0xCF7C */ u8 unkCF7C[0xBC];
    /* 0xD038 */ s32 valueIndex;
    /* 0xD03C */ u32 pendingValue;
    /* 0xD040 */ s32 scriptValue;             /* reported to the script by FUN_003235a8 */
    /* 0xD044 */ u8 unkD044[0x5FD];
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
    offsetof(ResultEntry, value) == 0x608 && sizeof(ResultWork) == 0xD658 ? 1 : -1];

extern "C" {
extern ResultWork *g_result;
}

#endif
