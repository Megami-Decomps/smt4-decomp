#include "shard/Shard003E.h"

extern "C" {

extern s32 FUN_004d87e4(u32 value);

u8 FUN_003ece50(BtlStateB *state)
{
    return FUN_004d87e4(state->unk22BC) != 0;
}

} /* extern "C" */
