#include "shard/Shard003F.h"

extern "C" {

extern u8 gameDataFlagTestBit(u32 bit);

void btlSelectMode4D74(BtlStateB *state)
{
    s32 enabled = gameDataFlagTestBit(0x8C);
    s32 *mode = &state->unk4D74;

    *mode = (enabled != 0) ? 2 : 3;
}

} /* extern "C" */
