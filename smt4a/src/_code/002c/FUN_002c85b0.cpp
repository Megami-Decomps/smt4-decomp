/* NON_MATCHING: retail loads the pointer twice (no CSE) and addresses the 0x2018 byte as register + literal. */
#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Stores `value` (8 is stored as 3) and whether it was 8. */
void FUN_002c85b0(u32 value)
{
    g_gameGlobals.instance->selectionWasEight = value == 8;
    if (value == 8) value = 3;
    g_gameGlobals.instance->unk2018 = value;
}
}
