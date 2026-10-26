#include "shard/W5_W5Match2_MapCallbacks.h"
#include "map/mapDepart.h"
extern "C" {
extern GameState g_gameState;
extern MapEnemyRequestWork *g_mapEnemy;
/* Enter enemy state four and clear map transition flags. */
void battlePrepareEncounter(void)
{
    MapEnemyRequestWork *enemy = g_mapEnemy;
    enemy->state = 4;
    enemy->counter = 0;
    g_gameState.encounterDelay = 0;
    g_gameState.encounterApproach = 0;
}
}
