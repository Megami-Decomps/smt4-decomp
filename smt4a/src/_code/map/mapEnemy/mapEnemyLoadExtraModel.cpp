#include <stdio.h>
#include "Model/MoriModelContent.h"
#include "gamedata/DataTable4CValue.h"
#include "gfx/ControllerModel.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"
#include "Model/MoriModelManager.h"
#include "map/MapEnemyGlobal.h"
#include "game/GameStateA.h"
#include "classes/Obj557b18.h"

extern "C" {
extern EnemyExtraModelSource DAT_00582204[];
void *asdMemoryAllocTraced(u32, const char *, u32);
}

/* Registers the model body with the handle registry and sets its hidden flags (bits 0 and 1). */
static __inline void registerModel(Obj557b18 *body)
{
    handleRegistryRegisterObject(g_handleRegistry, body);
    body->flags |= 3;
}

/* Loads and registers an extra map-enemy model if the cache has capacity. */
extern "C" u32 mapEnemyLoadExtraModel(s32 index)
{
    MapEnemyA *owner = g_mapEnemy;
    MapEnemyExtraModelA *slot = &owner->extraModels[index];
    s32 count = 0;
    s32 i;

    if (slot->model != NULL)
        return 1;

    for (i = 0; i < MAP_ENEMY_EXTRA_MODEL_COUNT; ++i) {
        if (owner->extraModels[i].model != NULL)
            ++count;
    }
    if (count >= g_gameState.enemyModelCapacity)
        return 0;

    char resourceName[32];
    sprintf(resourceName, "map/all/sym%03d.bam", DAT_00582204[index].modelId);
    MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(
        sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 948);
    if (model != NULL)
        model = modelListInit(model);
    slot->model = model;
    resourceOwnerLoadFileSync(slot->model, resourceName);
    moriModelContentSetRequestFirst(slot->model, 0x10000);
    moriModelContentSetRequestSecond(slot->model, 0x20000);
    moriModelContentLoadBody(slot->model, 0);
    Obj557b18 *body = slot->model->body;
    modelPlayClip(body, 0, 2, 0.0f, 0.0f);
    registerModel(body);
    owner->extraModels[index].registered = 1;
    owner->extraModels[index].active = 0;
    return 1;
}
