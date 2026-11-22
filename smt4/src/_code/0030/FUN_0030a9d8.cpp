#include "shard/Sys44de28.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void saveLoadUICreate(s32 a, s32 b);

/* Resets the save/load UI to its first state: no slot loading, cursor on the first slot's position. */
void FUN_0030a9d8(void)
{
    saveLoadUICreate(0, 0);
    Worker *worker = g_saveLoadUIFlags.worker;
    worker->unk014 = 0;
    g_saveLoadUIFlags.unk00 = 0;
    g_saveLoadUIFlags.unk01 = 0;
    worker->isLoad = 0;
    worker->unk379 = 1;
    TextureTableEntryIV *position = asdTMTexTableEntryAt(0x36, 3);
    worker->slotX = position->x;
    worker->slotY = position->y;
    worker->isLoad = 0;
    worker->slotIndex = 1;
    worker->state = 9;
}

} /* extern "C" */
