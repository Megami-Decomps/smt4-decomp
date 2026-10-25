#ifndef BATTLE_BATTLEENTRYSUMMARY_H
#define BATTLE_BATTLEENTRYSUMMARY_H
#include "common.h"
#include <stddef.h>

/* FUN_00247478 copies exactly 0x22 bytes into this halfword-aligned summary. */
struct BattleEntrySummary {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 value;
    /* 0x04 */ s16 stat;
    union {
        /* 0x06 */ u8 unk06[0x1C];
        struct {
            /* 0x06 */ u8 unk06[0x10];
            /* 0x16 */ s16 skillId;
            /* 0x18 */ u8 unk18[0xA];
        } skill;
        struct {
            /* 0x06 */ u8 unk06[0x17];
            /* 0x1D */ u8 percent;
            /* 0x1E */ u8 percentage;
            /* 0x1F */ u8 unk1F[3];
        } ratios;
    };
};
typedef char BattleEntrySummaryLayoutCheck[
    sizeof(BattleEntrySummary) == 0x22 && offsetof(BattleEntrySummary, skill.skillId) == 0x16 ? 1 : -1];
typedef char BattleEntrySummaryRatioOffsets[
    offsetof(BattleEntrySummary, ratios.percent) == 0x1D &&
    offsetof(BattleEntrySummary, ratios.percentage) == 0x1E ? 1 : -1];
#endif
