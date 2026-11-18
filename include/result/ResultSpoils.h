/* The rewards handed to IV's result screen: questBuildRewardSpoils fills them from a quest's reward slot and
 * resultApplySpoils adds them to g_result. */
#ifndef RESULT_RESULTSPOILS_H
#define RESULT_RESULTSPOILS_H

#include "common.h"
#include <stddef.h>

struct ResultSpoils {
    /* 0x00 */ s32 itemId[6];
    /* 0x18 */ s32 itemCount[6];
    /* 0x30 */ s32 gold;
    /* 0x34 */ s32 experience;
    /* 0x38 */ u16 sourceId;        /* the quest (or battle) the rewards come from */

    ResultSpoils() : gold(0), experience(0)
    {
        for (s32 i = 0; i < 6; i++) {
            itemId[i] = 0;
        }
        for (s32 i = 0; i < 6; i++) {
            itemCount[i] = 0;
        }
    }
};

typedef char ResultSpoilsCheck[sizeof(ResultSpoils) == 0x3c && offsetof(ResultSpoils, gold) == 0x30 &&
                               offsetof(ResultSpoils, sourceId) == 0x38 ? 1 : -1];

/* Apocalypse's reward packet uses unsigned amounts and a signed source index. */
struct ResultSpoilsA {
    /* 0x00 */ u32 items[6];
    /* 0x18 */ u32 counts[6];
    /* 0x30 */ u32 money;
    /* 0x34 */ u32 value;
    /* 0x38 */ s16 source;

    ResultSpoilsA() : money(0), value(0)
    {
        for (s32 i = 0; i < 6; ++i)
            items[i] = 0;
        for (s32 i = 0; i < 6; ++i)
            counts[i] = 0;
    }
};
typedef char ResultSpoilsALayout[sizeof(ResultSpoilsA) == 0x3C && offsetof(ResultSpoilsA, counts) == 0x18 &&
    offsetof(ResultSpoilsA, money) == 0x30 && offsetof(ResultSpoilsA, source) == 0x38 ? 1 : -1];

extern "C" {
void FUN_003df168(ResultSpoilsA *spoils, s32 questId);
void FUN_00331714(const ResultSpoilsA *spoils);
/* Fills the rewards of quest `questId`. */
void questBuildRewardSpoils(ResultSpoils *spoils, u32 questId);
/* Applies the rewards to the result screen. */
void resultApplySpoils(ResultSpoils *spoils);
}

#endif
