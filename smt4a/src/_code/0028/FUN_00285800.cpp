#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void gameTransitionStartStep(void);

/* Clears the word at 0x1374 of the game record, runs gameTransitionStartStep and clears the byte at 0x2014. */
void FUN_00285800(void)
{
    ObjB *game;

    game = g_gameGlobals.instance;
    g_gameGlobals.instance->unk1374 = 0;
    gameTransitionStartStep();
    game->mode = 0;
}

} /* extern "C" */
