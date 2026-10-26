#include "common.h"

struct SpriteOperation;

extern "C" {

struct GameWork { u8 unk0000[0x12dc]; u8 operation[1]; };
struct GameGlobals { u32 unk00; GameWork *work; };
extern GameGlobals g_gameGlobals;

s32 uiSpriteGetOperationMode(void *operation);

s32 FUN_00372014(void)
{
    GameWork *work = g_gameGlobals.work;
    if (work == NULL) {
        return 0;
    }
    return uiSpriteGetOperationMode(work->operation) == 15;
}

} /* extern "C" */
