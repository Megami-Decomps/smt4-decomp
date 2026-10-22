#include "common.h"

struct ScriptCallbackState {
    /* 0x00 */ u8 unk00[0xa4];
    /* 0xA4 */ s32 result;
};

extern "C" ScriptCallbackState g_gameState;
extern "C" void scrSetResult(s32 result);
extern "C" void FUN_003130cc(void);

/* Publish the game state's result and complete this operation. */
extern "C" s32 scriptPublishGameResultCallback(void)
{
    scrSetResult(g_gameState.result);
    FUN_003130cc();
    return 1;
}
