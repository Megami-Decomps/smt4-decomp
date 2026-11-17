/* NON_MATCHING: the player-id compares load their halfwords in the opposite order (ldrh before ldrsh, cmp operands swapped). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"

extern "C" {


int dataTable2eSub1GetCount(void);
int dataTable2eSub0GetCount(void);
u16 *gameGetPlayerData(void);
s16 *dataTable2eSub1GetRecord(int index);
s16 *dataTable2eSub0GetRecord(int index);
AsdMdlObject *asdMdlManagerCreateFromSource(void *source, u32 param, u32 size);


/* Hides a model's position-follow flag and marks it ready. */
static void prepareModel(AsdMdlObject *model)
{
    model->flags |= 2;
    model->node->resource->positionFollowed = 0;
}

void FUN_0020db10(void)
{
    u16 *player = gameGetPlayerData();
    s16 *record;
    s32 i;
    s32 j;

    for (i = 0; i < dataTable2eSub0GetCount(); i++) {
        record = dataTable2eSub0GetRecord(i);
        if (player[0] == record[0]) {
            s32 value = g_gameState.stageOverride;
            if (value == -1) {
                value = record[1];
            }
            g_gameState.map.stage = value;
            break;
        }
    }

    s32 kind = g_gameState.stageOverride;
    if (kind == -1) {
        kind = g_gameState.map.stage;
    }
    switch (kind) {
    case 0:
        g_lmapScene->stageModel = asdMdlManagerCreateFromSource(g_gameState.map.files[1].handle, g_gameState.map.files[1].buffer, 0x1c0);
        break;
    case 1:
        g_lmapScene->stageModel = asdMdlManagerCreateFromSource(g_gameState.map.files[2].handle, g_gameState.map.files[2].buffer, 0x1c0);
        break;
    case 2:
        g_lmapScene->stageModel = asdMdlManagerCreateFromSource(g_gameState.map.files[3].handle, g_gameState.map.files[3].buffer, 0x1c0);
        break;
    case 3:
        g_lmapScene->stageModel = asdMdlManagerCreateFromSource(g_gameState.map.files[4].handle, g_gameState.map.files[4].buffer, 0x1c0);
        break;
    }
    lightOwnerRegister(g_lmapScene->stageModel, 1);
    prepareModel(g_lmapScene->stageModel);
    g_lmapScene->unk168 = 0;
    g_lmapScene->unk16C = -1;

    g_lmapScene->models[1] = asdMdlManagerCreateFromSource(g_gameState.map.files[5].handle, g_gameState.map.files[5].buffer, 0x1c0);
    lightOwnerRegister(g_lmapScene->models[1], 1);
    prepareModel(g_lmapScene->models[1]);

    g_lmapScene->models[2] = asdMdlManagerCreateFromSource(g_gameState.map.files[6].handle, g_gameState.map.files[6].buffer, 0x1c0);
    lightOwnerRegister(g_lmapScene->models[2], 1);
    prepareModel(g_lmapScene->models[2]);

    for (j = 0; j < dataTable2eSub1GetCount(); j++) {
        record = dataTable2eSub1GetRecord(j);
        if (player[4] == record[0]) {
            if (g_gameState.groupOverride == -1) {
                g_gameState.map.stageGroup = record[1];
            } else {
                g_gameState.map.stageGroup = g_gameState.groupOverride;
            }
            break;
        }
    }
}

} /* extern "C" */
