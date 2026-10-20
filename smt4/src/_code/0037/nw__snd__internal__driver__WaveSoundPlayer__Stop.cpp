#include "nw/snd/WaveSoundPlayer.h"

extern "C" {
void *nw_snd_internal_driver_SoundThread_GetInstance(void);
void linkListEraseManagerNode(void *thread, void *node);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Stops the player: unregisters its node from the sound thread if it was started. */
void WaveSoundPlayer::Stop()
{
    if (started != 0) {
        linkListEraseManagerNode(nw_snd_internal_driver_SoundThread_GetInstance(), node);
        started = 0;
    }
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
