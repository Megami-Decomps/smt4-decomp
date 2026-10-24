#include "shard/Sys44de28.h"

extern "C" {

struct SlotRecord {
    u8 unk00[8];
    s16 x;
    s16 y;
};

void FUN_00202ab4(s32 a, s32 b);
SlotRecord *FUN_002bf4f8(s32 group, s32 index);

/* Resets the save/load worker for a load (isLoad = 1) and enters state 8 at the position of record 0x36/2. */
void FUN_0030aa50(u8 arg)
{
    FUN_00202ab4(0, 0);
    Worker *worker = g_saveLoadUIFlags.worker;
    worker->unk014 = 0;
    g_saveLoadUIFlags.unk00 = 0;
    g_saveLoadUIFlags.unk01 = 0;
    worker->isLoad = 1;
    worker->unk379 = arg;
    SlotRecord *record = FUN_002bf4f8(0x36, 2);
    worker->slotX = record->x;
    worker->slotY = record->y;
    worker->isLoad = 1;
    worker->slotIndex = 0;
    worker->state = 8;
}

} /* extern "C" */
