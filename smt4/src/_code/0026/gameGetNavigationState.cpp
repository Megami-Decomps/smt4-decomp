#include "common.h"
#include "game/GameGlobalsRef.h"
extern "C" {
/* Read the navigation state (game data 0x1E63). */
s8 gameGetNavigationState(void) { return g_gameGlobals.data->unk1E63; }
}
