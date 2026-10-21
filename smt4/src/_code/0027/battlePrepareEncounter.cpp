/* NON_MATCHING: compiler addresses the encounter byte directly instead of using the retail interior-base alias. */
#include "shard/W5_W5Match2_MapCallbacks.h"
extern "C" {
struct EnemyMapFlags { u8 unk00[0x94]; u16 value; u8 unk96[3]; u8 active; };
extern EnemyMapFlags DAT_0049fa1c;
extern MapEnemyRequestWork *g_mapEnemy;
/* Enter enemy state four and clear map transition flags. */
void battlePrepareEncounter(void) { g_mapEnemy->state=4; g_mapEnemy->counter=0; DAT_0049fa1c.value=0; DAT_0049fa1c.active=0; }
}
