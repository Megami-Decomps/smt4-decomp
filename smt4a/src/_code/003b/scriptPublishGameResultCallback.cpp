#include "common.h"
#include "game/GameStateA.h"

extern "C" void scrSetResult(s32 result);
extern "C" void FUN_003130cc(void);

/* Publish the game state's result and complete this operation. */
extern "C" s32 scriptPublishGameResultCallback(void)
{
    scrSetResult(g_gameState.unk0A4);
    FUN_003130cc();
    return 1;
}
