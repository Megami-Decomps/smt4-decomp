/* NON_MATCHING: retail uses `bxeq lr` where armcc emits `beq 24`. */
#include "common.h"

extern "C" {

struct GameWork { u8 unk0000[0x132c]; s16 state; };
struct GameGlobals { u32 unk00; GameWork *work; };
extern GameGlobals g_gameGlobals;

s32 FUN_00372014(void)
{
    GameWork *work = g_gameGlobals.work;
    return work != NULL ? work->state == 15 : 0;
}

} /* extern "C" */
