#ifndef BATTLE_BATTLEENTRYSUMMARY_H
#define BATTLE_BATTLEENTRYSUMMARY_H
#include "common.h"
#include <stddef.h>

/* What btlEntryBuildSummary reports about the action a battle entry is about to take: the attack
 * data of its weapon, demon record, skill or item (0x22 bytes, halfword aligned). */
struct BattleEntrySummary {
    /* 0x00 */ u16 targeting;      /* 1, 3, 6: scope 1; 5: scope 2 */
    /* 0x02 */ u16 element;
    /* 0x04 */ s16 category;       /* a skill's category; 3 for a plain item, 0 for a normal attack */
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;          /* 100 for a player */
    /* 0x0A */ u16 power;          /* a gun's and its bullet's are added */
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 unk0E;
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 ailment;
    /* 0x12 */ u8 ailmentRate;
    /* 0x13 */ u8 ailmentGroup;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ s16 skillId;        /* -1 for the actions that use none */
    /* 0x18 */ u16 equipmentId;
    /* 0x1A */ s16 itemId;
    /* 0x1C */ u8 scope;           /* 0: one target, 1: everyone, else: all present */
    /* 0x1D */ u8 percent;
    /* 0x1E */ u8 percentage;
    /* 0x1F */ u8 minimumHits;
    /* 0x20 */ u8 maximumHits;
    /* 0x21 */ u8 unk21;
};
typedef char BattleEntrySummaryLayoutCheck[
    sizeof(BattleEntrySummary) == 0x22 && offsetof(BattleEntrySummary, skillId) == 0x16 &&
    offsetof(BattleEntrySummary, power) == 0x0A && offsetof(BattleEntrySummary, ailment) == 0x11 &&
    offsetof(BattleEntrySummary, equipmentId) == 0x18 && offsetof(BattleEntrySummary, scope) == 0x1C ? 1 : -1];
typedef char BattleEntrySummaryRatioOffsets[
    offsetof(BattleEntrySummary, percent) == 0x1D &&
    offsetof(BattleEntrySummary, percentage) == 0x1E &&
    offsetof(BattleEntrySummary, maximumHits) == 0x20 ? 1 : -1];
#endif
