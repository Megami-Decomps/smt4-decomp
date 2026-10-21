#include "common.h"
extern "C" {
struct GetterWork { u8 unk00[0x1E61]; s8 value; };
struct GetterGlobals { u8 unk00[4]; GetterWork *work; };
extern GetterGlobals g_gameGlobals;
/* Read the active work value. */
s8 gameGetPendingNavigationState(void) { return g_gameGlobals.work->value; }
}
