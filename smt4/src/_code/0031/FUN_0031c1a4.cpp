#include "common.h"
#include "script/ScriptArgs.h"

struct GameStateView {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 value;
};

extern "C" {
extern GameStateView g_gameState;
void FUN_0021e450(void);
}

extern "C" s32 FUN_0031c1a4(void)
{
    scrSetResult(g_gameState.value);
    FUN_0021e450();
    return 1;
}
