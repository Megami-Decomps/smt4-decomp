/* NON_MATCHING: only the registers holding the transition step and state constants are swapped. */
#include "shard/GameGlobals.h"
#include "status/StatusBustUp.h"

/* Reloads the selected equipment part and enters the status-model transition. */
extern "C" void FUN_002992e0(s32 mode)
{
    enum { TRANSITION_STATE = 6, PART_LOAD_FLAGS = 7 };
    GameData *data = g_gameGlobals.data;
    if (mode == 0) {
        playerModelLoadPart(data->unk1E80, 0, PART_LOAD_FLAGS);
    }
    if (mode == 1) {
        playerModelLoadPart(data->unk1E80, 1, PART_LOAD_FLAGS);
    }
    if (mode == 2) {
        playerModelLoadPart(data->unk1E80, 2, PART_LOAD_FLAGS);
    }
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = TRANSITION_STATE;
}
