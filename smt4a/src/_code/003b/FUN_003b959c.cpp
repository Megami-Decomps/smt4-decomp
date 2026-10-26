/* NON_MATCHING: now written against g_gameState (limit/minimum/result fields; pool anchor g_gameState+0x200 matches); armcc schedules the pool-constant loads (map/engine pointers, magic divisor) earlier than retail. */
#include "common.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {

struct StatRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 base;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ s32 value;
};

// The fields of g_gameState this allowance uses.
struct GameStateResult {
    /* 0x000 */ u8 unk000[0x1f8];
    /* 0x1f8 */ s32 result;
    /* 0x1fc */ u8 unk1fc[0xc2];
    /* 0x2be */ s16 limit;
    /* 0x2c0 */ s16 minimum;
};

extern StatRecord *g_engineRecordList;
extern StatRecord *g_mapObj;
extern StatRecord *DAT_00581280;
extern GameStateResult g_gameState;


/* Recomputes the remaining allowance: the limit minus the base and the average of three stat values, floored at the minimum. */
void FUN_003b959c(void)
{
    s32 limit = g_gameState.limit;
    s32 first = FUN_0032530c();
    s32 value = limit - ((g_engineRecordList->value + g_mapObj->value + first) / 3 + DAT_00581280->base);

    if (value < g_gameState.minimum) {
        value = g_gameState.minimum;
    }
    g_gameState.result = value;
}

} /* extern "C" */
