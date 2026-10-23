/* NON_MATCHING: engine record/model-slot register allocation and position stores differ. */
#include "gfx/EngineRecordList.h"

struct HandleRegistry;
extern "C" {
extern EngineRecordList *g_engineRecordList;
extern HandleRegistry *g_handleRegistry;
void *gameFlagsGetBlock(void);
EngineRecordModelList *FUN_00178b04(u32 bytes, const char *file, s32 line);
EngineRecordModelList *modelListInit(EngineRecordModelList *models);
void FUN_0040aa6c(EngineRecordModelList *models, const char *path);
void FUN_0040aad4(EngineRecordModelList *models, s32 index);
void handleRegistryRegisterObject(HandleRegistry *registry, u32 handle);

/* Initialize the treasure marker model list and create its delayed visible effect record. */
void FUN_003276f0(s32 delay, s32 alternate, f32 x, f32 y, f32 z, f32 w)
{
    gameFlagsGetBlock();
    EngineRecordList *list = g_engineRecordList;
    list->count = 0;
    list->capacity = 24;
    list->enabled = 1;
    list->counter18 = 0;
    list->counterCE0 = 0;
    list->modelSlot = 1;
    EngineRecordModelList *models = FUN_00178b04(32,
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTakara.cpp", 971);
    if (models != NULL)
        models = modelListInit(models);
    g_engineRecordList->models[g_engineRecordList->modelSlot].models = models;
    FUN_0040aa6c(models, "map/unit/u007.bam");
    FUN_0040aad4(g_engineRecordList->models[g_engineRecordList->modelSlot].models, 0);
    list = g_engineRecordList;
    s32 index;
    for (index = 0; index < 32; ++index) {
        if (list->records[index].active == 0)
            break;
    }
    if (index == 32)
        index = -1;
    list->selectedRecord = static_cast<s16>(index);
    EngineEffectRecord *record = &list->records[static_cast<s16>(index)];
    list->activeCount++;
    if (alternate != 0) {
        record->active = 1;
        record->variant = 2;
        record->state = 11;
    } else {
        record->active = 1;
        record->variant = 0;
        record->state = 1;
    }
    record->phase = 0;
    record->position[0] = x;
    record->position[1] = y;
    record->position[2] = z;
    record->position[3] = w;
    record->visible = 1;
    record->frame = 0;
    record->duration = 4;
    record->delay = -delay;
    record->flag2C = 0;
    record->counter30 = 0;
    record->flag34 = 0;
    record->modelSlot = g_engineRecordList->modelSlot;
    handleRegistryRegisterObject(g_handleRegistry,
        g_engineRecordList->models[g_engineRecordList->modelSlot].models->registryHandle);
}
}
