#include <stdio.h>
#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "code/Code001c.h"

extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);

// Reserve a free gimmick slot and load the requested map-unit model into it.
void FUN_003537c8(s32 unitId)
{
    s32 index = 0;
    MapGimicSlotA *slot;
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
    sprintf(path, "map/unit/u%03d.bam", unitId);
    slot->active = 1;
    slot->id = (s16)unitId;
    void *storage = asdMemoryAllocTraced(
        32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp", 0x9C6);
    slot->obj = storage != NULL ? modelListInit(storage) : NULL;
    modelLoadFileAsyncByName(slot->obj, path);
    if (unitId == 0x6A || unitId == 0xD2 || unitId == 0xD3 || unitId == 0xD4) {
        FUN_0040a908(slot->obj, 0x10000);
        FUN_0040a918(slot->obj, 0x20000);
    }
}
}
