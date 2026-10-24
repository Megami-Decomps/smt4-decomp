#include "shard/Sys44de28.h"

extern "C" {

/* A table record whose two signed shorts at 8 and 10 give a slot position. */
struct SlotPositionRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

void FUN_00202ab4(s32 a, s32 b);
SlotPositionRecord *FUN_002bf4f8(u32 table, u32 index);

/* Resets the save/load UI to its first state: no slot loading, cursor on the first slot's position. */
void FUN_0030a9d8(void)
{
    FUN_00202ab4(0, 0);
    Worker *worker = g_saveLoadUIFlags.worker;
    worker->unk014 = 0;
    g_saveLoadUIFlags.unk00 = 0;
    g_saveLoadUIFlags.unk01 = 0;
    worker->isLoad = 0;
    worker->unk379 = 1;
    SlotPositionRecord *position = FUN_002bf4f8(0x36, 3);
    worker->slotX = position->x;
    worker->slotY = position->y;
    worker->isLoad = 0;
    worker->slotIndex = 1;
    worker->state = 9;
}

} /* extern "C" */
