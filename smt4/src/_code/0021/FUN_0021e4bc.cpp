/* NON_MATCHING: block layout and register allocation differ - retail shares one `return 0` epilogue between the states, finds the free slot inside the entry scan with the slot index in r0, and reuses the g_mapObj pointer loaded for the entry test. */
#include "common.h"

namespace {
/* A placement entry of the map's object table. */
struct MapObjEntry {
    /* 0x00 */ s16 mapId;       /* < 0: unused */
    /* 0x02 */ s16 areaId;
    /* 0x04 */ s16 kind;        /* < 100: a loadable object model */
    /* 0x06 */ s16 x;
    /* 0x08 */ s16 y;
    /* 0x0a */ s16 z;
    /* 0x0c */ s16 yaw;
    /* 0x0e */ s16 altY;
    /* 0x10 */ char name[1];    /* optional override name */
};

/* A loaded map object. */
struct MapObjSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 visible;
    /* 0x02 */ u8 enabled;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0c */ f32 z;
    /* 0x10 */ f32 scaleX;
    /* 0x14 */ f32 scaleY;
    /* 0x18 */ f32 scaleZ;
    /* 0x1c */ f32 yaw;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ s32 kind;
    /* 0x28 */ u32 model;       /* model list created for the kind */
    /* 0x2c */ char name[0x18];
    /* 0x44 */ s32 entryIndex;
};

/* The loader's work block: the state machine header, then the 24 object slots. */
struct MapObjWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 mapId;
    /* 0x06 */ s16 areaId;
    /* 0x08 */ s16 state;
    /* 0x0a */ s16 entryIndex;
    /* 0x0c */ s16 slot;
    /* 0x0e */ u8 unk0e[2];
    /* 0x10 */ s32 loadedCount;
    /* 0x14 */ MapObjSlot slots[24];
};
}

static __inline s32 findFreeSlot(const MapObjWork *work)
{
    for (s32 i = 0; i < 24; i++) {
        if (work->slots[i].active == 0) {
            return i;
        }
    }
    return -1;
}

extern "C" {
extern MapObjWork *g_mapObj;
s32 dataTableGetRecordFortyFive(void);
MapObjEntry *mapObjGetCombinedEntry(s32 index);
void textFormatBuffer(char buffer[128], const char *format, s32 kind);
u32 asdMdlManagerCreateSecondList(const char *path, u32 flags);
s32 modelHasLoadedAttachment(u32 model);
void FUN_002a0428(u32 model, s32 flag);
char *libc_strcpy(char *destination, const char *source);

/* Loads the map's object table one step per call: scans for the next entry placed on this map (state 10),
   creates its model list (11), then places it once the model is ready (12). Returns 1 when finished. */
u32 FUN_0021e4bc(void)
{
    switch (g_mapObj->state) {
    case 10: {
        s32 index = g_mapObj->entryIndex;
        if (dataTableGetRecordFortyFive() > index) {
            do {
                MapObjEntry *entry = mapObjGetCombinedEntry(index);
                if (entry->mapId >= 0) {
                    MapObjWork *work = g_mapObj;
                    if (entry->mapId == work->mapId && entry->areaId == work->areaId && entry->kind < 100) {
                        work->entryIndex = index;
                        work->slot = findFreeSlot(work);
                        if (work->slot == -1) {
                            work->state = 99;
                            return 1;
                        }
                        work->state = 11;
                        return 0;
                    }
                }
                index++;
            } while (index < dataTableGetRecordFortyFive());
        }
        g_mapObj->state = 99;
        return 1;
    }
    case 11: {
        MapObjEntry *entry = mapObjGetCombinedEntry(g_mapObj->entryIndex);
        MapObjSlot *slot = &g_mapObj->slots[g_mapObj->slot];
        char path[128];
        slot->kind = entry->kind;
        slot->name[0] = 0;
        textFormatBuffer(path, "map/obj/obj_%02d.bam", entry->kind);
        slot->model = asdMdlManagerCreateSecondList(path, 7);
        g_mapObj->state = 12;
        return 0;
    }
    case 12: {
        MapObjEntry *entry = mapObjGetCombinedEntry(g_mapObj->entryIndex);
        MapObjSlot *slot = &g_mapObj->slots[g_mapObj->slot];
        if (modelHasLoadedAttachment(slot->model) != 0) {
            FUN_002a0428(slot->model, 1);
            slot->x = entry->x;
            slot->y = entry->y;
            slot->z = entry->z;
            slot->yaw = entry->yaw;
            slot->scaleX = entry->x;
            slot->scaleY = slot->kind == 6 ? entry->altY : entry->y;
            slot->scaleZ = entry->z;
            g_mapObj->loadedCount++;
            slot->active = 1;
            slot->visible = 1;
            slot->enabled = 1;
            slot->entryIndex = g_mapObj->entryIndex;
            if (entry->name[0] != 0) {
                libc_strcpy(slot->name, entry->name);
            }
            g_mapObj->entryIndex++;
            g_mapObj->state = 10;
        }
        return 0;
    }
    case 99:
        return 1;
    }
    return 0;
}

} /* extern "C" */
