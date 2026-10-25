/* NON_MATCHING: same loads and arithmetic; armcc schedules the pool-constant loads (map/engine pointers, magic divisor) and the limit/result registers differently */
#include "common.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {

struct StatRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 base;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ s32 value;
};

struct LimitBlock {
    /* 0x00 */ u8 unk00[0xbe];
    /* 0xbe */ s16 limit;
    /* 0xc0 */ s16 minimum;
};

struct GameStateResult {
    /* 0x000 */ u8 unk000[0x1f8];
    /* 0x1f8 */ s32 result;
};

extern LimitBlock DAT_005f17fc;
extern StatRecord *g_engineRecordList;
extern StatRecord *g_mapObj;
extern StatRecord *DAT_00581280;
extern GameStateResult g_gameState;


/* Recomputes the remaining allowance: the limit minus the base and the average of three stat values, floored at the minimum. */
void FUN_003b959c(void)
{
    s32 limit = DAT_005f17fc.limit;
    s32 first = FUN_0032530c();
    s32 value = limit - (DAT_00581280->base + (g_engineRecordList->value + g_mapObj->value + first) / 3);

    if (value < DAT_005f17fc.minimum) {
        value = DAT_005f17fc.minimum;
    }
    g_gameState.result = value;
}

} /* extern "C" */
