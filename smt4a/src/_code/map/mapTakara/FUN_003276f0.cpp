/* NON_MATCHING: register-only: retail keeps the record-list global in r7 and the constant 1 in r8 (built swapped), and its find-free-record loop and record address use r2 where built uses r3. */
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

static __inline s32 findFreeRecord(EngineRecordList *list)
{
    for (s32 i = 0; i < 32; ++i) {
        if (list->records[i].active == 0)
            return i;
    }
    return -1;
}

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
    models = models != NULL ? modelListInit(models) : NULL;
    g_engineRecordList->models[g_engineRecordList->modelSlot].models = models;
    FUN_0040aa6c(models, "map/unit/u007.bam");
    FUN_0040aad4(g_engineRecordList->models[g_engineRecordList->modelSlot].models, 0);
    list = g_engineRecordList;
    s32 index = findFreeRecord(list);
    list->selectedRecord = static_cast<s16>(index);
    EngineEffectRecord *record = &list->records[static_cast<s16>(index)];
    list->activeCount++;
    if (alternate != 0) {
        record->active = 1;
        record->state = 11;
        record->variant = 2;
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
    list = g_engineRecordList;
    s32 modelSlot = list->modelSlot;
    record->modelSlot = modelSlot;
    handleRegistryRegisterObject(g_handleRegistry,
        list->models[modelSlot].models->registryHandle);
}
}
