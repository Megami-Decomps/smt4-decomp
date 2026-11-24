#include "common.h"
#include "game/GameStateA.h"
#include "gfx/ControllerModel.h"
#include "gamedata/GamePlayerData.h"
#include "Model/MoriModelRegistration.h"

/* The scene's model slots. */
struct SceneModels {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ s32 unk164;
    /* 0x168 */ s32 unk168;
    /* 0x16C */ u8 unk16C[4];
    /* 0x170 */ MoriModelContent *area;
    /* 0x174 */ u8 unk174[4];
    /* 0x178 */ MoriModelContent *model178;
    /* 0x17C */ MoriModelContent *model17C;
    /* 0x180 */ MoriModelContent *model180;
    /* 0x184 */ MoriModelContent *model184;
    /* 0x188 */ MoriModelContent *model188;
    /* 0x18C */ MoriModelContent *model18C;
};

struct DataTableEntry {
    /* 0x00 */ s16 key;
    /* 0x02 */ s16 value;
};

extern "C" {
extern SceneModels *g_lmapScene;
s32 dataTable2EType0Count(void);
s32 dataTable2EType1Count(void);
DataTableEntry *dataTable2EType0GetEntry(s32 index);
DataTableEntry *dataTable2EType1GetEntry(s32 index);
} /* extern "C" */

static __inline void resetSceneAreaSelection(SceneModels *scene)
{
    scene->unk164 = 0;
    scene->unk168 = -1;
}

/* Sets up the map scene's models for the player's current area. */
extern "C" void FUN_002d8ef8(void)
{
    PlayerDataA *player = gameGetPlayerData();
    for (s32 i = 0; i < dataTable2EType0Count(); i++) {
        DataTableEntry *entry = dataTable2EType0GetEntry(i);
        if (entry->key == player->equipped.weapon) {
            g_gameState.stage = g_gameState.stageOverride == -1 ? entry->value : g_gameState.stageOverride;
            break;
        }
    }
    s32 areaType = g_gameState.stageOverride;
    if (areaType == -1) {
        areaType = g_gameState.stage;
    }
    switch (areaType) {
    case 0:
        g_lmapScene->area = g_gameState.areaModels[0];
        break;
    case 1:
        g_lmapScene->area = g_gameState.areaModels[1];
        break;
    case 2:
        g_lmapScene->area = g_gameState.areaModels[2];
        break;
    case 3:
        g_lmapScene->area = g_gameState.areaModels[3];
        break;
    }
    moriModelRegisterSceneContent(g_lmapScene->area);
    g_lmapScene->model184 = g_gameState.model530;
    moriModelRegisterSceneContent(g_lmapScene->model184);
    resetSceneAreaSelection(g_lmapScene);
    g_lmapScene->model178 = g_gameState.model528;
    moriModelRegisterSceneContent(g_lmapScene->model178);
    g_lmapScene->model17C = g_gameState.model52C;
    moriModelRegisterSceneContent(g_lmapScene->model17C);
    g_lmapScene->model188 = g_gameState.model564;
    moriModelRegisterSceneContent(g_lmapScene->model188);
    g_lmapScene->model180 = g_gameState.model550;
    controllerSetPosition(moriModelRegisterSceneContent(g_lmapScene->model180), 1.0f, 1.0f, 1.0f);
    g_lmapScene->model18C = g_gameState.model570;
    controllerSetPosition(moriModelRegisterSceneContent(g_lmapScene->model18C), 1.0f, 1.0f, 1.0f);
    for (s32 i = 0; i < dataTable2EType1Count(); i++) {
        DataTableEntry *entry = dataTable2EType1GetEntry(i);
        if (entry->key == player->equipped.body) {
            s32 areaTypeOverride = g_gameState.groupOverride;
            if (areaTypeOverride == -1) {
                g_gameState.stageGroup = entry->value;
            } else {
                g_gameState.stageGroup = areaTypeOverride;
            }
            break;
        }
    }
}
