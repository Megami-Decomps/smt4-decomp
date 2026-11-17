/* NON_MATCHING: count initialization and final model-flag store scheduling differ; all calls match. */
#include "Model/MoriModelContent.h"
#include "gamedata/DataTable4CValue.h"
#include "gfx/ControllerModel.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"
#include "Model/MoriModelManager.h"
#include "map/MapEnemyGlobal.h"

extern "C" {
extern u8 DAT_005f17fc[];
extern EnemyExtraModelSource DAT_00582204[];
void textFormatBuffer(char *, const char *, ...);
void *asdMemoryAllocTraced(u32, const char *, u32);
}

extern "C" u32 FUN_002d7c88(s32 index)
{
    struct ModelLimitSettings {
        u8 prefix[0xC2];
        s8 maximum;
    };
    struct ModelFlags {
        u32 vtable;
        u32 flags;
    };
    MapEnemyA *owner = g_mapEnemy;
    MapEnemyExtraModelA *slot = &owner->extraModels[index];
    if (slot->model != NULL)
        return 1;

    s32 count = 0;
    for (s32 i = 0; i < MAP_ENEMY_EXTRA_MODEL_COUNT; ++i) {
        if (owner->extraModels[i].model != NULL)
            ++count;
    }
    if (count >= reinterpret_cast<ModelLimitSettings *>(DAT_005f17fc)->maximum)
        return 0;

    char resourceName[32];
    textFormatBuffer(resourceName, "map/all/sym%03d.bam", DAT_00582204[index].modelId);
    MoriModelContent *model = static_cast<MoriModelContent *>(asdMemoryAllocTraced(
        sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 948));
    if (model != NULL)
        model = modelListInit(model);
    slot->model = model;
    resourceOwnerLoadFileSync(slot->model, resourceName);
    FUN_0040a908(slot->model, 0x10000);
    FUN_0040a918(slot->model, 0x20000);
    moriModelContentLoadBody(slot->model, 0);
    Obj557b18 *body = slot->model->body;
    modelPlayClip(body, 0, 2, 0.0f, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, body);
    reinterpret_cast<ModelFlags *>(body)->flags |= 3;
    owner->extraModels[index].registered = 1;
    owner->extraModels[index].active = 0;
    return 1;
}
