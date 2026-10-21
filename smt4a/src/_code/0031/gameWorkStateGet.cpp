#include "common.h"
extern "C" {
extern struct { u32 unk00; struct { u8 unk00[0x2010]; s8 state; } *work; } g_gameGlobals;
/* Reads the global work state, or zero when no work exists. */
s32 gameWorkStateGet(void) {
    return g_gameGlobals.work != NULL ? g_gameGlobals.work->state : 0;
}
}
