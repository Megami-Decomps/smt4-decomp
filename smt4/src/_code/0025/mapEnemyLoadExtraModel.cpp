/* NON_MATCHING: direct indexing restores the slot offsets and early count initialization;
 * the loop-bound register and final registered flag / result scheduling still differ. */
#include <stdio.h>
#include "map/MapEnemyGlobal.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"
#include "game/GameState.h"

extern "C" {
extern EnemyExtraModelSource DAT_00448ca8[];

/* Lazily create an extra enemy model, respecting the configured live-model limit. */
s32 mapEnemyLoadExtraModel(u32 index)
{
    MapEnemy *enemy = g_mapEnemy;
    s32 count = 0;
    s32 slot;
    if (enemy->extraModels[index].model != NULL) {
        return 1;
    }
    for (slot = 0; slot < MAP_ENEMY_EXTRA_MODEL_COUNT; ++slot) {
        if (enemy->extraModels[slot].model != NULL) {
            ++count;
        }
    }
    if (count >= g_gameState.map.enemyModelCapacity) {
        return 0;
    }
    char path[36];
    sprintf(path, "map/all/sym%03d.bam", DAT_00448ca8[index].modelId);
    enemy->extraModels[index].model = asdMdlManagerCreateLoaded(path, 0x1C0);
    lightOwnerRegister(enemy->extraModels[index].model, 1);
    AsdMdlObject *model = enemy->extraModels[index].model;
    model->flags |= 2;
    model->node->sceneNode->positionFollowed = 0;
    enemy->extraModels[index].registered = 1;
    enemy->extraModels[index].active = 0;
    return 1;
}
} /* extern "C" */
