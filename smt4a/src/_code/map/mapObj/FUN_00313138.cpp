/* NON_MATCHING: the free-slot search and the 99/11 state store compile differently (retail keeps the scan counter in r0 with a trailing sxth and conditional strh/beq exits; here it is split over compare/move pairs), the loop bound is re-read in the opposite operand order and the caller-saved scheduling of the record/work pointers differs. */
#include "Model/ModelList.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"

/* A record of the map object table (data table 45): its key, kind, position and name. */
struct MapObjRecord {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 sub;
    /* 0x04 */ s16 kind;
    /* 0x06 */ s16 x;
    /* 0x08 */ s16 y;
    /* 0x0A */ s16 z;
    /* 0x0C */ s16 scale;
    /* 0x0E */ s16 height;
    /* 0x10 */ char name[0x10];
};

/* One placed map object (0x48 bytes). */
struct MapObjSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 visible;
    /* 0x02 */ u8 enabled;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 z;
    /* 0x10 */ f32 originX;
    /* 0x14 */ f32 height;
    /* 0x18 */ f32 depth;
    /* 0x1C */ f32 scale;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ s32 kind;
    /* 0x28 */ ModelList *model;
    /* 0x2C */ char name[0x18];
    /* 0x44 */ s32 index;
};

/* The map object loader's state: which table record it is at and the slots it fills. */
struct MapObjWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 id;
    /* 0x06 */ s16 sub;
    /* 0x08 */ s16 state;
    /* 0x0A */ s16 cursor;
    /* 0x0C */ s16 slot;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ s32 count;
    /* 0x14 */ MapObjSlot slots[24];
};

extern "C" {
extern MapObjWork *g_mapObj;
extern void *g_handleRegistry;

s32 dataTableGetRecordFortyFive(void);
MapObjRecord *mapObjGetCombinedEntry(s32 index);
void textFormatBuffer(char *, const char *, ...);
void *FUN_00178b04(u32, const char *, u32);
ModelList *modelListInit(ModelList *);
void FUN_001cd3ec(ModelList *model, const char *name);
u8 FUN_0040ab8c(ModelList *model);
void FUN_0040aad4(ModelList *model, u32 mode);
void handleRegistryRegisterObject(void *, void *);
char *libc_strcpy(char *, const char *);

/* Loads the placed map objects one record per call; returns 1 when done. */
u32 FUN_00313138(void)
{
    MapObjWork *work = g_mapObj;
    switch (work->state) {
    case 10: {
        for (s32 index = work->cursor; index < dataTableGetRecordFortyFive(); index++) {
            MapObjRecord *record = mapObjGetCombinedEntry(index);
            work = g_mapObj;
            if (record->id >= 0 && record->id == work->id && record->sub == work->sub && record->kind < 100) {
                work->cursor = index;
                s32 free;
                for (free = 0; free < 24; free++) {
                    if (work->slots[free].active == 0) {
                        break;
                    }
                }
                if (free == 24) {
                    free = -1;
                }
                s16 slot = free;
                work->slot = slot;
                if (slot == -1) {
                    work->state = 99;
                    return 1;
                }
                work->state = 11;
                return 0;
            }
        }
        g_mapObj->state = 99;
        return 1;
    }
    case 11: {
        MapObjRecord *record = mapObjGetCombinedEntry(work->cursor);
        MapObjSlot *slot = &g_mapObj->slots[g_mapObj->slot];
        slot->kind = record->kind;
        slot->name[0] = 0;
        char resourceName[0x80];
        textFormatBuffer(resourceName, "map/obj/obj_%02d.bam", record->kind);
        ModelList *model = static_cast<ModelList *>(
            FUN_00178b04(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapObj.cpp", 0x16f));
        if (model != NULL) {
            model = modelListInit(model);
        }
        slot->model = model;
        FUN_001cd3ec(model, resourceName);
        g_mapObj->state = 12;
        return 0;
    }
    case 12: {
        MapObjRecord *record = mapObjGetCombinedEntry(work->cursor);
        MapObjSlot *slot = &work->slots[work->slot];
        if (FUN_0040ab8c(slot->model) == 0) {
            return 0;
        }
        FUN_0040aad4(slot->model, 0);
        handleRegistryRegisterObject(g_handleRegistry, *(void **)((u8 *)slot->model + 4));
        slot->x = (f32)record->x;
        slot->y = (f32)record->y;
        slot->z = (f32)record->z;
        slot->scale = (f32)record->scale;
        slot->originX = (f32)record->x;
        slot->height = (f32)(slot->kind == 6 ? record->height : record->y);
        slot->depth = (f32)record->z;
        g_mapObj->count++;
        slot->active = 1;
        slot->visible = 1;
        slot->enabled = 1;
        slot->index = g_mapObj->cursor;
        if (record->name[0] != 0) {
            libc_strcpy(slot->name, record->name);
        }
        g_mapObj->cursor++;
        g_mapObj->state = 10;
        return 0;
    }
    case 99:
        return 1;
    }
    return 0;
}
}
