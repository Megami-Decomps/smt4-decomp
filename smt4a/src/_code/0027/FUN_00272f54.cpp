#include "common.h"
#include "game/GameStateA.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

void FUN_00272f54(void)
{
    MapEnemyA *state = g_mapEnemy;
    state->state = 4;
    state->elapsed = 0;
    g_gameState.unk1C8 = 0;
    g_gameState.unk1CD = 0;
}
}
