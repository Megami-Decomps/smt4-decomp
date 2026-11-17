#include "map/MapEnemyGlobal.h"
#include "map/mapDepart.h"
#include "game/GameState.h"
extern "C" {
/* Enter enemy state four and clear map transition flags. */
void battlePrepareEncounter(void)
{
    MapEnemy *enemy = g_mapEnemy;
    enemy->state = 4;
    enemy->elapsed = 0;
    g_gameState.event.encounterDelay = 0;
    g_gameState.event.encounterApproach = 0;
}
}
