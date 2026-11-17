#include "common.h"
#include "game/GameStateA.h"
#include "gfx/ObjectRegistry.h"

/* A model of the map scene: its controller object is at +4. */
struct SceneModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ RegisteredObject *object;
};

/* The scene's model slots. */
struct SceneModels {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ s32 unk164;
    /* 0x168 */ s32 unk168;
    /* 0x16C */ u8 unk16C[4];
    /* 0x170 */ SceneModel *area;
    /* 0x174 */ u8 unk174[4];
    /* 0x178 */ SceneModel *model178;
    /* 0x17C */ SceneModel *model17C;
    /* 0x180 */ SceneModel *model180;
    /* 0x184 */ SceneModel *model184;
    /* 0x188 */ SceneModel *model188;
    /* 0x18C */ SceneModel *model18C;
};

struct DataTableEntry {
    /* 0x00 */ s16 key;
    /* 0x02 */ s16 value;
};

struct PlayerData {
    /* 0x00 */ u16 areaKeyA;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u16 areaKeyB;
};

extern "C" {
extern SceneModels *g_lmapScene;
extern ObjectRegistry *g_handleRegistry;

PlayerData *gameGetPlayerData(void);
s32 dataTable2EType0Count(void);
s32 dataTable2EType1Count(void);
DataTableEntry *dataTable2EType0GetEntry(s32 index);
DataTableEntry *dataTable2EType1GetEntry(s32 index);
void handleRegistryRegisterObject(ObjectRegistry *registry, RegisteredObject *object);
void controllerSetPosition(RegisteredObject *owner, f32 x, f32 y, f32 z);
}

/* Registers the model's object with the handle registry and marks it active (bits 0 and 1). */
static __inline RegisteredObject *registerModel(SceneModel *model)
{
    RegisteredObject *object = model->object;
    handleRegistryRegisterObject(g_handleRegistry, object);
    object->flags |= 3;
    return object;
}

static __inline void resetSceneAreaSelection(SceneModels *scene)
{
    scene->unk164 = 0;
    scene->unk168 = -1;
}

/* Sets up the map scene's models for the player's current area. */
extern "C" void FUN_002d8ef8(void)
{
    PlayerData *player = gameGetPlayerData();
    for (s32 i = 0; i < dataTable2EType0Count(); i++) {
        DataTableEntry *entry = dataTable2EType0GetEntry(i);
        if (entry->key == player->areaKeyA) {
            g_gameState.areaTypeA = g_gameState.areaTypeOverrideA == -1 ? entry->value : g_gameState.areaTypeOverrideA;
            break;
        }
    }
    s32 areaType = g_gameState.areaTypeOverrideA;
    if (areaType == -1) {
        areaType = g_gameState.areaTypeA;
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
    registerModel(g_lmapScene->area);
    g_lmapScene->model184 = g_gameState.model530;
    registerModel(g_lmapScene->model184);
    resetSceneAreaSelection(g_lmapScene);
    g_lmapScene->model178 = g_gameState.model528;
    registerModel(g_lmapScene->model178);
    g_lmapScene->model17C = g_gameState.model52C;
    registerModel(g_lmapScene->model17C);
    g_lmapScene->model188 = g_gameState.model564;
    registerModel(g_lmapScene->model188);
    g_lmapScene->model180 = g_gameState.model550;
    controllerSetPosition(registerModel(g_lmapScene->model180), 1.0f, 1.0f, 1.0f);
    g_lmapScene->model18C = g_gameState.model570;
    controllerSetPosition(registerModel(g_lmapScene->model18C), 1.0f, 1.0f, 1.0f);
    for (s32 i = 0; i < dataTable2EType1Count(); i++) {
        DataTableEntry *entry = dataTable2EType1GetEntry(i);
        if (entry->key == player->areaKeyB) {
            s32 areaTypeOverride = g_gameState.areaTypeOverrideB;
            if (areaTypeOverride == -1) {
                g_gameState.areaTypeB = entry->value;
            } else {
                g_gameState.areaTypeB = areaTypeOverride;
            }
            break;
        }
    }
}
