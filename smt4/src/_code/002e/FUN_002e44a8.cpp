/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"

namespace { struct Bustup { u8 padding[0x90]; u16 id; }; struct Devil { u8 padding[0x268]; u8 special; }; }

extern "C" {
extern Bustup *g_btlTalkBustUp;
Devil *devilGetRecord(u32 id);
u32 FUN_002e44a8(void)
{
    if (g_btlTalkBustUp != NULL && devilGetRecord(g_btlTalkBustUp->id)->special != 0) { return 1; }
    return 0;
}
}
