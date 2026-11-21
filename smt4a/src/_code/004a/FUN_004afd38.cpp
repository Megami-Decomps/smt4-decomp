/* NON_MATCHING: retail function is MoLivePlayer::~MoLivePlayer() (_ZN12MoLivePlayerD1Ev), which
 * needs renaming in project.json plus removing the null check in MoLive::StlAllocator::deallocate
 * (verified 6 diff lines / 63 vs 63 rows as _ZN12MoLivePlayerD1Ev). */
#include "mobiclip/MoLivePlayer.h"

extern "C" MoLivePlayer *FUN_004afd38(MoLivePlayer *player)
{
    player->~MoLivePlayer();
    return player;
}
