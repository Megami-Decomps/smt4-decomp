#include "nw/snd/WaveSoundPlayer.h"

extern "C" {
void *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void FUN_0037c280(void *thread, void *node);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Starts the player: registers its node with the sound thread and marks it started. */
void WaveSoundPlayer::Start()
{
    FUN_0037c280(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), node);
    started = 1;
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
