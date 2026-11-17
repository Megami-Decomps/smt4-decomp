#include "common.h"
#include "game/GameGlobalsRef.h"
extern "C" {
/* Read the pending navigation state (game data 0x1E61). */
s8 gameGetPendingNavigationState(void) { return g_gameGlobals.data->unk1E61; }
}
