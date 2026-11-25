/* NON_MATCHING: only the registers holding the transition step and state constants are swapped. */
#include "shard/GameGlobals.h"

extern "C" void FUN_002945a4(u32 resource, u32 mode, u32 value, u32 flags);

/* Loads the given item for the selected equipment part and enters the status-model transition. */
extern "C" void FUN_0029963c(s32 mode, u32 value)
{
    enum { TRANSITION_STATE = 6, PART_LOAD_FLAGS = 7 };
    GameData *data = g_gameGlobals.data;
    if (mode == 0) {
        FUN_002945a4(data->unk1E80, 0, value, PART_LOAD_FLAGS);
    }
    if (mode == 1) {
        FUN_002945a4(data->unk1E80, 1, value, PART_LOAD_FLAGS);
    }
    if (mode == 2) {
        FUN_002945a4(data->unk1E80, 2, value, PART_LOAD_FLAGS);
    }
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = TRANSITION_STATE;
}
