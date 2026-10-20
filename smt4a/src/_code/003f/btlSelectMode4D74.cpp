#include "shard/Shard003F.h"

extern "C" {

extern u8 FUN_003e46f4(u32 bit);

void btlSelectMode4D74(BtlStateB *state)
{
    s32 enabled = FUN_003e46f4(0x8C);
    s32 *mode = &state->unk4D74;

    *mode = (enabled != 0) ? 2 : 3;
}

} /* extern "C" */
