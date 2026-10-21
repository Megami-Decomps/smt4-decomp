/* NON_MATCHING: retail uses different loop scheduling, comparison branching or packed parameter grouping. */
#include "common.h"

struct GameFlags {
    /* 0x000 */ u8 unk00[0x11c];
    /* 0x11c */ u8 first;
    /* 0x11d */ u8 second;
};
extern "C" {
extern GameFlags g_gameState;
s32 scrGetArg(u32 index);
/* Stores the two script-controlled boolean flags. */
s32 gameScriptSetBooleanFlags()
{
    g_gameState.first = scrGetArg(0) != 0;
    g_gameState.second = scrGetArg(1) != 0;
    return 1;
}
}
