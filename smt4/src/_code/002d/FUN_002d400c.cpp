/* NON_MATCHING: one register copy differs in the second table search (retail keeps the record pointer and the stage value in the same register as the id). */
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
struct PlayerData {
    u16 mapId;              // 0x00
    u16 unk02[3];
    u16 areaId;             // 0x08
};
struct StageRecord {
    s16 id;                 // 0x00
    s16 stage;              // 0x02
};
PlayerData *gameGetPlayerData(void);
s32 dataTable2eSub1GetCount(void);
StageRecord *dataTable2eSub1GetRecord(s32 index);
s32 dataTable2eSub0GetCount(void);
StageRecord *dataTable2eSub0GetRecord(s32 index);
void asdMdlManagerMarkDestroy(AsdMdlObject *model);
void asdMdlManagerDestroy(AsdMdlObject *model);
AsdMdlObject *asdMdlManagerCreateFromSource(void *source, u32 argument, u32 param);
void FUN_002a0428(AsdMdlObject *model, u32 enabled);

/* Step the scene model swap: pick the stage for the player's map, then release the old model and load the new one. Returns true when idle. */
u32 FUN_002d400c(void)
{
    PlayerData *player = gameGetPlayerData();
    switch (g_lmapScene->modelSwap.modelState) {
    case 0:
        for (s32 i = 0; i < dataTable2eSub1GetCount(); i++) {
            StageRecord *record = dataTable2eSub1GetRecord(i);
            if (record->id == player->areaId) {
                if (g_gameState.sceneModels.groupOverride == -1) {
                    g_gameState.sceneModels.stageGroup = record->stage;
                } else {
                    g_gameState.sceneModels.stageGroup = g_gameState.sceneModels.groupOverride;
                }
                break;
            }
        }
        for (s32 i = 0; i < dataTable2eSub0GetCount(); i++) {
            StageRecord *record = dataTable2eSub0GetRecord(i);
            if (record->id == player->mapId) {
                s32 stage = g_gameState.sceneModels.stageOverride;
                if (stage == -1) {
                    stage = record->stage;
                }
                if (stage == g_gameState.sceneModels.stage) {
                    return 1;
                }
                g_gameState.sceneModels.stage = stage;
                g_lmapScene->modelSwap.modelState++;
                return 0;
            }
        }
        return 1;
    case 1:
        asdMdlManagerMarkDestroy(g_lmapScene->modelSwap.model);
        g_lmapScene->modelSwap.modelState++;
        break;
    case 2:
        asdMdlManagerDestroy(g_lmapScene->modelSwap.model);
        g_lmapScene->modelSwap.model = NULL;
        g_lmapScene->modelSwap.modelState++;
        break;
    case 3:
        switch (g_gameState.sceneModels.stage) {
        case 0:
            g_lmapScene->modelSwap.model = asdMdlManagerCreateFromSource(g_gameState.sceneModels.stageModels[0].source, g_gameState.sceneModels.stageModels[0].argument, 0x1c0);
            break;
        case 1:
            g_lmapScene->modelSwap.model = asdMdlManagerCreateFromSource(g_gameState.sceneModels.stageModels[1].source, g_gameState.sceneModels.stageModels[1].argument, 0x1c0);
            break;
        case 2:
            g_lmapScene->modelSwap.model = asdMdlManagerCreateFromSource(g_gameState.sceneModels.stageModels[2].source, g_gameState.sceneModels.stageModels[2].argument, 0x1c0);
            break;
        case 3:
            g_lmapScene->modelSwap.model = asdMdlManagerCreateFromSource(g_gameState.sceneModels.stageModels[3].source, g_gameState.sceneModels.stageModels[3].argument, 0x1c0);
            break;
        }
        FUN_002a0428(g_lmapScene->modelSwap.model, 1);
        {
            AsdMdlObject *model = g_lmapScene->modelSwap.model;
            model->flags |= 2;
            model->node->resource->positionFollowed = 0;
        }
        g_lmapScene->modelSwap.unk168 = 0;
        g_lmapScene->modelSwap.unk16c = -1;
        g_lmapScene->modelSwap.modelState = 0;
        return 1;
    }
    return 0;
}
}
