/* NON_MATCHING: retail keeps the stores in source order (unk004/unk008 as one stm) and unrolls the clearing loop by two; this build hoists the constants and does not unroll (the local slot pointer already restores the count-up loop). */
#include "shard/W8_X20_Obj351878.h"

extern "C" {

// Reset the state block to its defaults.
void FUN_00425e74(Obj351878 *obj)
{
    obj->unk000 = 0;
    obj->unk004 = 0;
    obj->unk008 = -1;
    obj->unk014 = 0;
    obj->unk018 = 0;
    obj->unk020 = 0;
    obj->unk024 = 0;
    obj->unk028 = 0;
    obj->unk02C = 1;
    obj->unk158 = 0;
    obj->unk15C = 2;
    obj->unk15D = 1;
    obj->unk1B8 = 0;
    obj->unk1BC = 0;
    obj->unk1C0 = 0;
    obj->unk2E8 = 0;
    obj->unk484 = 0;
    for (s32 i = 0; i < 8; i++) {
        Obj351878Slot *slot = &obj->slots[i];
        obj->unk2EC[i] = 0;
        slot->unk00 = 0;
    }
    obj->unk488 = 0;
    obj->unk48C = 0;
    obj->unk490 = 0;
    obj->unk494 = 0;
    obj->unk498 = 0;
    obj->unk49C = 0;
    obj->unk4A0 = 0;
    obj->unk4A4 = 0;
}

} /* extern "C" */
