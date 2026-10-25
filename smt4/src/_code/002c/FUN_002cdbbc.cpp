#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

namespace { struct State { u8 padding[0x2f8]; u8 blocked; }; }

extern "C" {
extern s32 DAT_0049fd14;
extern State g_gameState;
u32 FUN_002cdbbc(void)
{
    if (g_gameState.blocked != 0 || DAT_0049fd14 != -1) { asdSequenceRequest(6, NULL, 0); }
    return 1;
}
}
