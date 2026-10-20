#ifndef NW_SND_WAVESOUNDPLAYER_H
#define NW_SND_WAVESOUNDPLAYER_H

#include "common.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* The sound player base: its vtable (0x421ddc) holds the destructor slots, Initialize and Finalize. */
class BasicSoundPlayer {
public:
    virtual ~BasicSoundPlayer();
    virtual void Initialize();   /* +0x08 */
    virtual void Finalize();     /* +0x0C */
};

/* The player for wave sounds (vtable 0x421d7c): Initialize and Finalize are overridden, and it adds
 * Start and Stop, which register and unregister its node with the sound thread. */
class WaveSoundPlayer : public BasicSoundPlayer {
public:
    virtual void Initialize();
    virtual void Finalize();
    virtual void Start();   /* +0x10 */
    virtual void Stop();    /* +0x14 */

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[9];
    /* 0x0D */ u8 started;   /* nonzero between Start and Stop */
    /* 0x0E */ u8 unk0E[0x42];
    /* 0x50 */ u8 node[4];   /* registered with the sound thread while started */
};

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw

#endif
