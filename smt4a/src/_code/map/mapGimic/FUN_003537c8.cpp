/* NON_MATCHING: global pointer loads are scheduled differently around the prologue. */
#include "map/mapGimic.h"
#include "util/FUN_001cd3ec.h"

extern "C" {
extern MapGimic *g_mapGimic;
s32 textFormatBuffer(char *buffer, const char *format, ...);
void *FUN_00178b04(u32 size, const char *file, u32 line);
MapGimicObj *modelListInit(MapGimicObj *storage);
void FUN_0040a908(MapGimicObj *model, u32 flags);
void FUN_0040a918(MapGimicObj *model, u32 flags);

// Reserve a free gimmick slot and load the requested map-unit model into it.
void FUN_003537c8(s32 unitId)
{
    s32 index = 0;
    MapGimicSlot *slot;
    for (;;) {
        slot = &g_mapGimic->slots[index];
        if (slot->active == 0) {
            break;
        }
        if (++index >= MAP_GIMIC_SLOTS) {
            return;
        }
    }
    char path[132];
    textFormatBuffer(path, "map/unit/u%03d.bam", unitId);
    slot->active = 1;
    slot->id = (s16)unitId;
    MapGimicObj *storage = (MapGimicObj *)FUN_00178b04(
        32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp", 0x9C6);
    slot->obj = storage != NULL ? modelListInit(storage) : NULL;
    FUN_001cd3ec(slot->obj, path);
    if (unitId == 0x6A || unitId == 0xD2 || unitId == 0xD3 || unitId == 0xD4) {
        FUN_0040a908(slot->obj, 0x10000);
        FUN_0040a918(slot->obj, 0x20000);
    }
}
}
