#include "nw/snd/WaveSoundPlayer.h"

extern "C" {
void *FUN_002bd440(void);
void FUN_0037c280(void *thread, void *node);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Starts the player: registers its node with the sound thread and marks it started. */
void WaveSoundPlayer::Start()
{
    FUN_0037c280(FUN_002bd440(), node);
    started = 1;
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
