#ifndef BATTLE_BATTLEENTRYSUMMARY_H
#define BATTLE_BATTLEENTRYSUMMARY_H
#include "common.h"
#include <stddef.h>

struct BattleEntrySummary {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 value;
    /* 0x04 */ s16 stat;
    union {
        /* 0x06 */ u8 unk06[0x22];
        struct {
            /* 0x06 */ u8 unk06[0x10];
            /* 0x16 */ s16 skillId;
            /* 0x18 */ u8 unk18[0x10];
        } skill;
    };
};
typedef char BattleEntrySummaryLayoutCheck[
    sizeof(BattleEntrySummary) == 0x28 && offsetof(BattleEntrySummary, skill.skillId) == 0x16 ? 1 : -1];
#endif
