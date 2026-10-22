#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_0021af2c(void);

/* Clears the word at 0x1374 of the game record, runs FUN_0021af2c and clears the byte at 0x2014. */
void FUN_00285800(void)
{
    ObjB *game;

    game = g_gameGlobals.instance;
    g_gameGlobals.instance->unk1374 = 0;
    FUN_0021af2c();
    game->unk2014 = 0;
}

} /* extern "C" */
