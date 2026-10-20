#include "nw/snd/WaveSoundPlayer.h"

extern "C" {
void *FUN_002bd440(void);
void FUN_002b7430(void *thread, void *node);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Stops the player: unregisters its node from the sound thread if it was started. */
void WaveSoundPlayer::Stop()
{
    if (started != 0) {
        FUN_002b7430(FUN_002bd440(), node);
        started = 0;
    }
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
