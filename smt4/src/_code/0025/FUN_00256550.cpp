/* NON_MATCHING: enemy-model slot base addressing and model-setup register scheduling differ from retail. */
#include "map/mapEnemy.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"

extern "C" {
extern MapEnemy *g_mapEnemy;
extern EnemyExtraModelLimits DAT_0049fb1c;
extern EnemyExtraModelSource DAT_00448ca8[];
void textFormatBuffer(char *buffer, const char *format, ...);
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 flags);
void FUN_002a0428(AsdMdlObject *model, s32 enabled);

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
    for (s32 slot = 0; slot < 21; ++slot) {
        if (g_mapEnemy->extraModels[slot].model) {
            ++count;
        }
    }
    if (count >= DAT_0049fb1c.capacity) {
        return 0;
    }
    char path[36];
    textFormatBuffer(path, "map/all/sym%03d.bam", DAT_00448ca8[index].modelId);
    entry->model = asdMdlManagerCreateLoaded(path, 0x1C0);
    FUN_002a0428(entry->model, 1);
    AsdMdlObject *model = entry->model;
    model->flags |= 2;
    reinterpret_cast<ModelNodeView *>(model->node)->state->enabled = 0;
    entry->registered = 1;
    entry->active = 0;
    return 1;
}
}
