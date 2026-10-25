#include "shard/Shard004B.h"

struct DemonRecord;

extern "C" {

extern DemonRecord *gameGetSlotRecord(s32 slot);
extern void FUN_002305d0(DemonRecord *record, u32 slot, u32 id, s32 kind);

void dispatchIfFound(s32 slot, u32 id, s32 kind)
{
    DemonRecord *found = gameGetSlotRecord(slot);

    if (found != NULL) {
        FUN_002305d0(found, slot, id, kind);
    }
}

} /* extern "C" */
