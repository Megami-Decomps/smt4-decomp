/* nw::snd::internal::BasicSound: the part of a playing sound the matched game code touches. The
 * vtable slots are listed up to the last one used; the class is abstract here (the real sounds
 * are the derived classes). */
#ifndef NW_SND_BASICSOUND_H
#define NW_SND_BASICSOUND_H

#include "common.h"
#include "nw/snd/MoveValue.h"

namespace nw {
namespace snd {
namespace internal {

class BasicSound;

/* The player a sound is registered with. */
class SoundPlayer {
public:
    u8 unk00[0x4];
};

} /* namespace internal */
} /* namespace snd */
} /* namespace nw */

extern "C" void nw_snd_SoundPlayer_detail_SortPriorityList(nw::snd::internal::SoundPlayer *player,
                                                          nw::snd::internal::BasicSound *sound);

namespace nw {
namespace snd {
namespace internal {

class BasicSound {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void vfn08() = 0;
    virtual void vfn0C() = 0;
    virtual void shutdown() = 0;            /* 0x10: stops the sound right now */
    virtual void vfn14() = 0;
    virtual void vfn18() = 0;
    virtual void vfn1C() = 0;
    virtual void vfn20() = 0;
    virtual void onUpdatePlayerPriority() = 0; /* 0x24 */

    /* Sets the priority the player sorts by, and lets the player and the sound react. */
    void SetPlayerPriority(u8 priority)
    {
        playerPriority = priority;
        if (soundPlayer != NULL) {
            nw_snd_SoundPlayer_detail_SortPriorityList(soundPlayer, this);
        }
        onUpdatePlayerPriority();
    }

    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ SoundPlayer *soundPlayer;
    /* 0x14 */ u8 unk14[0x50];
    /* 0x64 */ MoveValue<f32, s32> fadeVolume;
    /* 0x74 */ MoveValue<f32, s32> pauseFadeVolume;
    /* 0x84 */ u8 unk84;
    /* 0x85 */ u8 startFlag;
    /* 0x86 */ u8 unk86;
    /* 0x87 */ u8 unk87;
    /* 0x88 */ u8 fadeOutFlag;
    /* 0x89 */ u8 unk89[2];
    /* 0x8B */ u8 pauseState;
    /* 0x8C */ u8 unk8C;
    /* 0x8D */ u8 unk8D[0xB];
    /* 0x98 */ u8 playerPriority;
};

} /* namespace internal */
} /* namespace snd */
} /* namespace nw */

#endif
