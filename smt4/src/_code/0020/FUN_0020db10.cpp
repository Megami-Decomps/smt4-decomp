/* NON_MATCHING: the player-id compares load their halfwords in the opposite order (ldrh before ldrsh, cmp operands swapped). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

/* A model source and the parameter the model manager builds it with. */
typedef struct ModelSource {
    u32 source;
    u32 param;
} ModelSource;

/* The part of the global game state this function reads and writes. */
typedef struct GameStateModels {
    /* 0x000 */ u8 unk000[0x218];
    /* 0x218 */ s32 sceneKind;
    /* 0x21C */ s32 eventKind;
    /* 0x220 */ u8 unk220[0x78];
    /* 0x298 */ ModelSource models[6];
    /* 0x2C8 */ u8 unk2C8[0x124];
    /* 0x3EC */ s32 sceneKindOverride;
    /* 0x3F0 */ s32 eventKindOverride;
} GameStateModels;

/* The part of the map scene block that holds the models. */
typedef struct SceneModels {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ AsdMdlObject *sceneModel;
    /* 0x168 */ s32 unk168;
    /* 0x16C */ s32 unk16C;
    /* 0x170 */ u8 unk170[8];
    /* 0x178 */ AsdMdlObject *modelB;
    /* 0x17C */ AsdMdlObject *modelC;
} SceneModels;

int dataTable2eSub1GetCount(void);
int dataTable2eSub0GetCount(void);
u16 *gameGetPlayerData(void);
s16 *dataTable2eSub1GetRecord(int index);
s16 *dataTable2eSub0GetRecord(int index);
AsdMdlObject *asdMdlManagerCreateFromSource(u32 source, u32 param, u32 size);

extern GameStateModels g_gameState;
extern SceneModels *g_lmapScene;

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
            s32 value = g_gameState.sceneKindOverride;
            if (value == -1) {
                value = record[1];
            }
            g_gameState.sceneKind = value;
            break;
        }
    }

    s32 kind = g_gameState.sceneKindOverride;
    if (kind == -1) {
        kind = g_gameState.sceneKind;
    }
    switch (kind) {
    case 0:
        g_lmapScene->sceneModel = asdMdlManagerCreateFromSource(g_gameState.models[0].source, g_gameState.models[0].param, 0x1c0);
        break;
    case 1:
        g_lmapScene->sceneModel = asdMdlManagerCreateFromSource(g_gameState.models[1].source, g_gameState.models[1].param, 0x1c0);
        break;
    case 2:
        g_lmapScene->sceneModel = asdMdlManagerCreateFromSource(g_gameState.models[2].source, g_gameState.models[2].param, 0x1c0);
        break;
    case 3:
        g_lmapScene->sceneModel = asdMdlManagerCreateFromSource(g_gameState.models[3].source, g_gameState.models[3].param, 0x1c0);
        break;
    }
    FUN_002a0428(g_lmapScene->sceneModel, 1);
    prepareModel(g_lmapScene->sceneModel);
    g_lmapScene->unk168 = 0;
    g_lmapScene->unk16C = -1;

    g_lmapScene->modelB = asdMdlManagerCreateFromSource(g_gameState.models[4].source, g_gameState.models[4].param, 0x1c0);
    FUN_002a0428(g_lmapScene->modelB, 1);
    prepareModel(g_lmapScene->modelB);

    g_lmapScene->modelC = asdMdlManagerCreateFromSource(g_gameState.models[5].source, g_gameState.models[5].param, 0x1c0);
    FUN_002a0428(g_lmapScene->modelC, 1);
    prepareModel(g_lmapScene->modelC);

    for (j = 0; j < dataTable2eSub1GetCount(); j++) {
        record = dataTable2eSub1GetRecord(j);
        if (player[4] == record[0]) {
            if (g_gameState.eventKindOverride == -1) {
                g_gameState.eventKind = record[1];
            } else {
                g_gameState.eventKind = g_gameState.eventKindOverride;
            }
            break;
        }
    }
}

} /* extern "C" */
