#include "nw/snd/WaveSoundPlayer.h"

extern "C" {
void *nw_snd_internal_driver_SoundThread_GetInstance(void);
void FUN_0037c280(void *thread, void *node);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Starts the player: registers its node with the sound thread and marks it started. */
void WaveSoundPlayer::Start()
{
    FUN_0037c280(nw_snd_internal_driver_SoundThread_GetInstance(), node);
    started = 1;
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
