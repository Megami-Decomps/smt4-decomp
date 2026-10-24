#include "shard/GameGlobals.h"

extern "C" {

int spriteStartAnimationByIndex(void *block, int a);

void FUN_002e3150(void)
{
    GameData *data = g_gameGlobals.data;

    g_gameGlobals.data->unk1EB4 = 1;
    spriteStartAnimationByIndex(data->unk274, 7);
    spriteStartAnimationByIndex(data->unk300, 8);
}

} /* extern "C" */
