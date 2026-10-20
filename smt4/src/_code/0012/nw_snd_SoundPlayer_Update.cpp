#include "shard/S1NwSnd.h"

extern "C" {

void FUN_0012fea0(PlayerSound *sound);
void FUN_0012f484(SoundPlayer *player);

/* Update every active sound, then re-sort the player's priority list. */
void nw_snd_SoundPlayer_Update(SoundPlayer *player)
{
    LinkListIterator it = linkListBegin(&player->activeList);
    if (it != linkListEndIter(&player->activeList)) {
        do {
            LinkListIterator cur = it++;
            FUN_0012fea0(playerSoundFromActiveNode(cur.node));
        } while (it != linkListEndIter(&player->activeList));
    }
    FUN_0012f484(player);
}

} /* extern "C" */
