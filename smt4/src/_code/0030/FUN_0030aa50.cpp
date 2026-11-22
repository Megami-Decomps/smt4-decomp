#include "shard/Sys44de28.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void saveLoadUICreate(s32 a, s32 b);

/* Resets the save/load worker for a load (isLoad = 1) and enters state 8 at the position of record 0x36/2. */
void FUN_0030aa50(u8 arg)
{
    saveLoadUICreate(0, 0);
    Worker *worker = g_saveLoadUIFlags.worker;
    worker->unk014 = 0;
    g_saveLoadUIFlags.unk00 = 0;
    g_saveLoadUIFlags.unk01 = 0;
    worker->isLoad = 1;
    worker->unk379 = arg;
    TextureTableEntryIV *record = asdTMTexTableEntryAt(0x36, 2);
    worker->slotX = record->x;
    worker->slotY = record->y;
    worker->isLoad = 1;
    worker->slotIndex = 0;
    worker->state = 8;
}

} /* extern "C" */
