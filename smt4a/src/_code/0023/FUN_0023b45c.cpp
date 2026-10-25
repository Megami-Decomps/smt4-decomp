#include "shard/Shard0033.h"
#include "util/CalleeContracts.h"
#include "util/FUN_0023b45c.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Stores the flag; when it is cleared outside mode 10 and the game state is 5, 6 or 7, also clears the word at 0x136C. */
void FUN_0023b45c(s32 flag)
{
    ObjB *game;
    s32 state;

    game = g_gameGlobals.instance;
    g_gameGlobals.instance->unk2011 = (u8)flag;
    if (((flag == 0) && (game->unk2018 != 10)) &&
        (state = game->activeState, (state == 5 || state == 6) || state == 7)) {
        game->unk136C = 0;
    }
}

} /* extern "C" */
