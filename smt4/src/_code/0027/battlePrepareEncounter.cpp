#include "shard/W5_W5Match2_MapCallbacks.h"
#include "map/mapDepart.h"
#include "game/GameState.h"
extern "C" {
extern MapEnemyRequestWork *g_mapEnemy;
/* Enter enemy state four and clear map transition flags. */
void battlePrepareEncounter(void)
{
    MapEnemyRequestWork *enemy = g_mapEnemy;
    enemy->state = 4;
    enemy->counter = 0;
    g_gameState.event.encounterDelay = 0;
    g_gameState.event.encounterApproach = 0;
}
}
