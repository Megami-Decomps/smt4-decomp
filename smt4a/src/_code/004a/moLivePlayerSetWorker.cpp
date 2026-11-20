#include "mobiclip/MoLivePlayer.h"

/* Attaches a ready source/worker to the player and resets its stream state. */
extern "C" s32 moLivePlayerSetWorker(MoLivePlayer *player, PlayerWorker *source)
{
    if (source == NULL) {
        return 64;
    }
    player->reset();
    player->worker = source;
    if (!player->worker->isReady()) {
        return 65;
    }
    player->unk1490 = player->worker->getKind();
    player->resetStreamState();
    return 0;
}
