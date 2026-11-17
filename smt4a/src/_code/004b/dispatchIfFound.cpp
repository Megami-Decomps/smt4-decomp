#include "shard/Shard004B.h"
#include "gamedata/SaveSlotRecord.h"


extern "C" {

extern void demonRecordInitialize(SlotRecordA *record, u32 slot, u32 id, s32 kind);

void dispatchIfFound(s32 slot, u32 id, s32 kind)
{
    SlotRecordA *found = gameGetSlotRecord(slot);

    if (found != NULL) {
        demonRecordInitialize(found, slot, id, kind);
    }
}

} /* extern "C" */
