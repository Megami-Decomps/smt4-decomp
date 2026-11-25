/* NON_MATCHING: the full-list guard avoids indexing with -1, which retail does not check.
 * The search loop's address register and the active/state/variant store schedule also differ. */
#include "gamedata/MapSaveBlockA.h"
#include "gfx/EngineRecordList.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"

extern "C" {
extern EngineRecordList *g_engineRecordList;
void *asdMemoryAllocTraced(u32 bytes, const char *file, s32 line);

/* The same 32-slot free-record search also appears in FUN_00356674. */
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
    MoriModelContent *models = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTakara.cpp", 971);
    models = models != NULL ? modelListInit(models) : NULL;
    g_engineRecordList->models[g_engineRecordList->modelSlot].models = models;
    resourceOwnerLoadFileSync(models, "map/unit/u007.bam");
    moriModelContentLoadBody(g_engineRecordList->models[g_engineRecordList->modelSlot].models, 0);
    list = g_engineRecordList;
    list->selectedRecord = (s16)findFreeRecord(list);
    if (list->selectedRecord < 0) {
        return;
    }
    EngineEffectRecord *record = &list->records[list->selectedRecord];
    list->activeCount++;
    record->active = 1;
    if (alternate != 0) {
        record->state = 11;
        record->variant = 2;
    } else {
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
        list->models[modelSlot].models->body);
}
} /* extern "C" */
