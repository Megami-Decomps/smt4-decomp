/* NON_MATCHING: count initialization and final model-flag store scheduling differ; all calls match. */
#include "Model/ModelList.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"

extern "C" {
extern u8 *g_mapEnemy;
extern u8 DAT_005f17fc[];
extern EnemyExtraModelSource DAT_00582204[];
extern void *g_handleRegistry;
void textFormatBuffer(char *, const char *, ...);
void *FUN_00178b04(u32, const char *, u32);
ModelList *modelListInit(ModelList *);
void FUN_0040aa6c(ModelList *, const char *);
void FUN_0040a908(ModelList *, s32);
void FUN_0040a918(ModelList *, s32);
void FUN_0040aad4(ModelList *, u32);
void FUN_003fe86c(MoriModelBody *, u32, u8, f32, f32);
void handleRegistryRegisterObject(void *, MoriModelBody *);
}

extern "C" u32 FUN_002d7c88(s32 index)
{
    /* Apocalypse's extra-model bank lies beyond the shared SMT IV map owner. */
    struct ExtraModelSlot {
        ModelList *model;
        u8 registered;
        u8 active;
        u8 padding[2];
    };
    struct ExtraModelOwner {
        u8 prefix[0x3D8C];
        ExtraModelSlot slots[21];
    };
    struct ModelLimitSettings {
        u8 prefix[0xC2];
        s8 maximum;
    };
    struct ModelFlags {
        u32 vtable;
        u32 flags;
    };
    ExtraModelOwner *owner = reinterpret_cast<ExtraModelOwner *>(g_mapEnemy);
    ExtraModelSlot *slot = &owner->slots[index];
    if (slot->model != NULL)
        return 1;

    s32 count = 0;
    for (s32 i = 0; i < 21; ++i) {
        if (owner->slots[i].model != NULL)
            ++count;
    }
    if (count >= reinterpret_cast<ModelLimitSettings *>(DAT_005f17fc)->maximum)
        return 0;

    char resourceName[32];
    textFormatBuffer(resourceName, "map/all/sym%03d.bam", DAT_00582204[index].modelId);
    ModelList *model = static_cast<ModelList *>(FUN_00178b04(
        sizeof(ModelList), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 948));
    if (model != NULL)
        model = modelListInit(model);
    slot->model = model;
    FUN_0040aa6c(slot->model, resourceName);
    FUN_0040a908(slot->model, 0x10000);
    FUN_0040a918(slot->model, 0x20000);
    FUN_0040aad4(slot->model, 0);
    MoriModelBody *body = slot->model->content.body;
    FUN_003fe86c(body, 0, 2, 0.0f, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, body);
    reinterpret_cast<ModelFlags *>(body)->flags |= 3;
    owner->slots[index].registered = 1;
    owner->slots[index].active = 0;
    return 1;
}
