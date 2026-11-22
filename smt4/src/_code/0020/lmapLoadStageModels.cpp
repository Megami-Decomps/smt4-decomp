#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

int dataTable2eSub1GetCount(void);
int dataTable2eSub0GetCount(void);
s16 *dataTable2eSub1GetRecord(int index);
s16 *dataTable2eSub0GetRecord(int index);

/* Picks the map stage from the player's weapon (unless overridden), loads the stage and the two
 * other map models hidden, then picks the stage group from the player's body armour. */
void lmapLoadStageModels(void)
{
    PlayerDataIV *player = gameGetPlayerData();
    s16 *record;
    s32 i;
    s32 j;
    s32 stage;
    s32 kind;

    for (i = 0; i < dataTable2eSub0GetCount(); i++) {
        record = dataTable2eSub0GetRecord(i);
        if (record[0] == player->equipped.weapon) {
            stage = g_gameState.stageOverride;
            g_gameState.map.stage = stage == -1 ? record[1] : stage;
            break;
        }
    }

    kind = g_gameState.stageOverride;
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
    asdMdlObjectHide(g_lmapScene->stageModel);
    g_lmapScene->actorMotion = 0;
    g_lmapScene->appliedActorMotion = -1;

    g_lmapScene->models[1] = asdMdlManagerCreateFromSource(g_gameState.map.files[5].handle, g_gameState.map.files[5].buffer, 0x1c0);
    lightOwnerRegister(g_lmapScene->models[1], 1);
    asdMdlObjectHide(g_lmapScene->models[1]);

    g_lmapScene->models[2] = asdMdlManagerCreateFromSource(g_gameState.map.files[6].handle, g_gameState.map.files[6].buffer, 0x1c0);
    lightOwnerRegister(g_lmapScene->models[2], 1);
    asdMdlObjectHide(g_lmapScene->models[2]);

    for (j = 0; j < dataTable2eSub1GetCount(); j++) {
        record = dataTable2eSub1GetRecord(j);
        if (record[0] == player->equipped.body) {
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
