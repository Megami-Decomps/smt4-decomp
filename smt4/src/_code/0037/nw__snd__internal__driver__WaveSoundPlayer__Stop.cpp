#include "nw/snd/WaveSoundPlayer.h"

extern "C" {
void *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
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
        linkListEraseManagerNode(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), node);
        started = 0;
    }
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
