#include "common.h"

namespace {
struct MapEnemyState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 mode;
};
}

extern "C" {
extern MapEnemyState *g_mapEnemy;

/* Tests the enemy system's active mode. */
s32 mapEnemyIsModeTwo(void)
{
    return g_mapEnemy->mode == 2;
}
}
