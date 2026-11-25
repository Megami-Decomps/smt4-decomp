/* NON_MATCHING: the compiler unrolls the free-slot scan and compares the placement loop bound with the operands swapped. */
#include "map/mapObj.h"
#include "map/MapObjectRecords.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include <stdio.h>

extern "C" {
extern MapObjectState *g_mapObj;
s32 dataTableGetRecordFortyFive(void);
u32 asdMdlManagerCreateSecondList(const char *path, u32 flags);
s32 modelHasLoadedAttachment(u32 model);
void lightOwnerRegister(u32 model, s32 flag);

/* Scans the placement table, loads each model and adds the finished objects to the map. */
u32 mapObjUpdatePlacementLoad(void)
{
    enum { SCAN_PLACEMENTS = 10, START_MODEL_LOAD = 11, WAIT_FOR_MODEL = 12, SCAN_COMPLETE = 99 };
    switch (g_mapObj->request.step) {
    case SCAN_PLACEMENTS: {
        s32 index = g_mapObj->request.entryIndex;
        if (index < dataTableGetRecordFortyFive()) {
            do {
                const MapObjRecord *entry = mapObjGetCombinedEntry(index);
                if (entry->map >= 0) {
                    MapObjectState *work = g_mapObj;
                    if (entry->map == work->request.mapId && entry->object == work->request.areaId && entry->kind < 100) {
                        work->request.entryIndex = index;
                        s32 freeSlot = 0;
                        for (; freeSlot < 24; ++freeSlot) {
                            if (work->slots[freeSlot].active == 0) {
                                break;
                            }
                        }
                        freeSlot = freeSlot < 24 ? freeSlot : -1;
                        s16 slot = (s16)freeSlot;
                        work->request.loading.slot = slot;
                        if (slot == -1) {
                            work->request.step = SCAN_COMPLETE;
                            return 1;
                        }
                        work->request.step = START_MODEL_LOAD;
                        return 0;
                    }
                }
                ++index;
            } while (index < dataTableGetRecordFortyFive());
        }
        g_mapObj->request.step = SCAN_COMPLETE;
        return 1;
    }
    case START_MODEL_LOAD: {
        const MapObjRecord *entry = mapObjGetCombinedEntry(g_mapObj->request.entryIndex);
        MapObjectSlot *slot = &g_mapObj->slots[g_mapObj->request.loading.slot];
        char path[128];
        slot->kind = entry->kind;
        slot->name[0] = 0;
        sprintf(path, "map/obj/obj_%02d.bam", entry->kind);
        slot->model = (void *)asdMdlManagerCreateSecondList(path, 7);
        g_mapObj->request.step = WAIT_FOR_MODEL;
        break;
    }
    case WAIT_FOR_MODEL: {
        const MapObjRecord *entry = mapObjGetCombinedEntry(g_mapObj->request.entryIndex);
        MapObjectSlot *slot = &g_mapObj->slots[g_mapObj->request.loading.slot];
        if (modelHasLoadedAttachment((u32)slot->model) != 0) {
            lightOwnerRegister((u32)slot->model, 1);
            slot->x = entry->x;
            slot->y = entry->y;
            slot->z = entry->z;
            slot->placement = entry->placement;
            slot->originX = entry->x;
            slot->height = slot->kind == 6 ? entry->height : entry->y;
            slot->depth = entry->z;
            g_mapObj->request.loadedCount++;
            slot->active = 1;
            slot->visible = 1;
            slot->enabled = 1;
            slot->entryIndex = g_mapObj->request.entryIndex;
            if (entry->name[0] != 0) {
                libc_strcpy((u32 *)slot->name, (u32 *)entry->name);
            }
            g_mapObj->request.entryIndex++;
            g_mapObj->request.step = SCAN_PLACEMENTS;
        }
        break;
    }
    case SCAN_COMPLETE:
        return 1;
    }
    return 0;
}

} /* extern "C" */
