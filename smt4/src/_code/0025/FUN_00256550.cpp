/* NON_MATCHING: the g_gameState+0x200 limit access now matches retail; retail addresses the extra-model slot as (map + index*8 + 0x3000) with the fields at +76/+80/+81 instead of forming the slot pointer. */
#include <stdio.h>
#include "map/MapEnemyGlobal.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"
#include "game/GameState.h"

extern "C" {
extern EnemyExtraModelSource DAT_00448ca8[];
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 flags);

/* Lazily create an extra enemy model, respecting the configured live-model limit. */
s32 FUN_00256550(u32 index)
{
    struct ModelStateView { u8 unk000[0x1F6]; u8 enabled; };
    struct ModelNodeView { u8 unk00[0x2C]; ModelStateView *state; };
    MapEnemyExtraModel *entry = &g_mapEnemy->extraModels[index];
    if (entry->model) {
        return 1;
    }
    s32 count = 0;
    for (s32 slot = 0; slot < MAP_ENEMY_EXTRA_MODEL_COUNT; ++slot) {
        if (g_mapEnemy->extraModels[slot].model) {
            ++count;
        }
    }
    if (count >= g_gameState.map.enemyModelCapacity) {
        return 0;
    }
    char path[36];
    sprintf(path, "map/all/sym%03d.bam", DAT_00448ca8[index].modelId);
    entry->model = asdMdlManagerCreateLoaded(path, 0x1C0);
    lightOwnerRegister(entry->model, 1);
    AsdMdlObject *model = entry->model;
    model->flags |= 2;
    reinterpret_cast<ModelNodeView *>(model->node)->state->enabled = 0;
    entry->registered = 1;
    entry->active = 0;
    return 1;
}
}
