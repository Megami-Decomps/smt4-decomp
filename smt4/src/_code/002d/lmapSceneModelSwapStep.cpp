/* NON_MATCHING: the weapon loop's id compare loads into r2/r1 where retail uses r1/r2. Writing the stage loop's
 * override choice as a ternary (`stage = overrideValue == -1 ? record->stage : overrideValue`) matches, but then the
 * two loops spell the same override choice differently (if/else in one, ternary in the other); no single spelling
 * for both matches (wave 85). */
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameState.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
/* A row of data table 0x2e's sections 0 and 1: an equipped item id and the stage (group) it selects. */
struct StageRecord {
    s16 id;                 // 0x00
    s16 stage;              // 0x02
};
s32 dataTable2eSub1GetCount(void);
StageRecord *dataTable2eSub1GetRecord(s32 index);
s32 dataTable2eSub0GetCount(void);
StageRecord *dataTable2eSub0GetRecord(s32 index);

/* Step the scene model swap: pick the stage group for the player's body armour and the stage for the
 * weapon (unless overridden), then release the old model and load the new one. Returns true when idle. */
u32 lmapSceneModelSwapStep(void)
{
    PlayerDataIV *player = gameGetPlayerData();
    switch (g_lmapScene->modelSwapStep) {
    case 0:
        for (s32 i = 0; i < dataTable2eSub1GetCount(); i++) {
            StageRecord *record = dataTable2eSub1GetRecord(i);
            if (record->id == player->equipped.body) {
                s32 overrideValue = g_gameState.groupOverride;
                if (overrideValue == -1) {
                    g_gameState.map.stageGroup = record->stage;
                } else {
                    g_gameState.map.stageGroup = overrideValue;
                }
                break;
            }
        }
        for (s32 i = 0; i < dataTable2eSub0GetCount(); i++) {
            StageRecord *record = dataTable2eSub0GetRecord(i);
            if (record->id == player->equipped.weapon) {
                s32 overrideValue = g_gameState.stageOverride;
                s32 stage;
                if (overrideValue == -1) {
                    stage = record->stage;
                } else {
                    stage = overrideValue;
                }
                if (stage == g_gameState.map.stage) {
                    return 1;
                }
                g_gameState.map.stage = stage;
                g_lmapScene->modelSwapStep++;
                return 0;
            }
        }
        return 1;
    case 1:
        asdMdlManagerMarkDestroy(g_lmapScene->stageModel);
        g_lmapScene->modelSwapStep++;
        break;
    case 2:
        asdMdlManagerDestroy(g_lmapScene->stageModel);
        g_lmapScene->stageModel = NULL;
        g_lmapScene->modelSwapStep++;
        break;
    case 3:
        switch (g_gameState.map.stage) {
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
        {
            AsdMdlObject *model = g_lmapScene->stageModel;
            model->flags |= 2;
            model->node->sceneNode->positionFollowed = 0;
        }
        g_lmapScene->actorMotion = 0;
        g_lmapScene->appliedActorMotion = -1;
        g_lmapScene->modelSwapStep = 0;
        return 1;
    }
    return 0;
}
}
