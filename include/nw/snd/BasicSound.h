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

/* The driver-side player's state bytes a sound polls (driver::BasicSoundPlayer). */
struct BasicSoundPlayerStateA {
    /* 0x00 */ u8 unk00[0xF];
    /* 0x0F */ u8 finishFlag;            /* the player has played to its end */
    /* 0x10 */ u8 finalizedForceDetach;  /* the driver detached the player; its resources are to be released */
};

/* SoundAmbientParam: what the ambient-parameter callback fills in for a sound. */
struct SoundAmbientParam {
    /* 0x00 */ f32 volume;
    /* 0x04 */ f32 pitch;
    /* 0x08 */ f32 pan;
    /* 0x0C */ f32 span;
    /* 0x10 */ f32 fxSend;
    /* 0x14 */ f32 lpf;
    /* 0x18 */ f32 biquadFilterValue;
    /* 0x1C */ s32 biquadFilterType;
    /* 0x20 */ s32 priority;
    /* 0x24 */ u32 userData;

    SoundAmbientParam()
        : volume(1.0f), pitch(1.0f), pan(0.0f), span(0.0f), fxSend(0.0f), lpf(0.0f), biquadFilterValue(0.0f),
          biquadFilterType(0), priority(0), userData(0)
    {
    }
};

/* SoundActorParam: the volume, pitch and pan a sound takes from its actor. */
struct SoundActorParam {
    /* 0x00 */ f32 volume;
    /* 0x04 */ f32 pitch;
    /* 0x08 */ f32 pan;
    /* 0x0C */ f32 unk0C;
};

class BasicSoundA;

/* The ambient callbacks of a sound (SoundHandle's AmbientInfo). */
class AmbientParamUpdateCallbackA {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void at_AmbientParamUpdate(void *arg, u32 soundId, SoundAmbientParam *param) = 0; /* 0x08 */
};
class AmbientArgUpdateCallbackA {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void at_AmbientArgUpdate(void *arg, const BasicSoundA *sound) = 0;                /* 0x08 */
};

/* The actor a sound was started from; only its parameters are read here. */
struct SoundActorA {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ SoundActorParam actorParam;
};

} /* namespace internal */
} /* namespace snd */
} /* namespace nw */

/* Apocalypse's SoundPlayer::detail_SortPriorityList. */
extern "C" void soundObjectUnlinkFromOwner(nw::snd::internal::SoundPlayer *player, nw::snd::internal::BasicSoundA *sound);
/* Apocalypse's MoveValue<f32, s32>::GetValue, out of line. */
extern "C" f32 interpolationStateEvaluate(const nw::snd::internal::MoveValue<f32, s32> *value);

namespace nw {
namespace snd {
namespace internal {

/* MoveValue::SetTarget as Apocalypse has it: GetValue stays out of line there. */
static __inline void moveValueSetTargetA(MoveValue<f32, s32> *value, f32 target, s32 frames)
{
    value->origin = interpolationStateEvaluate(value);
    value->target = target;
    value->frames = frames;
    value->counter = 0;
}

/* Apocalypse's BasicSound (a later NintendoWare): the same members four bytes further on, with its flags and
 * counters after the three volume ramps. */
class BasicSoundA {
public:
    enum PlayerState { PLAYER_STATE_INIT, PLAYER_STATE_PLAY, PLAYER_STATE_STOP };
    enum PauseState { PAUSE_STATE_NORMAL, PAUSE_STATE_PAUSING, PAUSE_STATE_PAUSED, PAUSE_STATE_UNPAUSING };
    enum MuteState { MUTE_STATE_NORMAL, MUTE_STATE_MUTING, MUTE_STATE_MUTED, MUTE_STATE_UNMUTING };

    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void vfn08() = 0;
    virtual void vfn0C() = 0;
    virtual void Finalize() = 0;                                    /* 0x10 */
    virtual bool IsPrepared() const = 0;                            /* 0x14 */
    virtual void vfn18() = 0;
    virtual void vfn1C() = 0;
    virtual BasicSoundPlayerStateA *GetBasicSoundPlayerHandle() = 0; /* 0x20 */
    virtual void OnUpdatePlayerPriority() = 0;                      /* 0x24 */
    virtual void UpdateMoveValue() = 0;                             /* 0x28 */
    virtual void vfn2C() = 0;
    virtual void UpdateParam() = 0;                                 /* 0x30 */

    /* Sets the priority the player sorts by, and lets the player and the sound react. */
    void SetPlayerPriority(u8 priority)
    {
        playerPriority = priority;
        if (soundPlayer != NULL) {
            soundObjectUnlinkFromOwner(soundPlayer, this);
        }
        OnUpdatePlayerPriority();
    }

    /* BasicSound::Stop (nw_snd_internal_BasicSound_Stop, 0x1742e4): fades the sound out over `fadeFrames` scaled by its
     * current fade volume, or finalizes it at once when it has not started or no fade is asked for. */
    void Stop(s32 fadeFrames)
    {
        if (fadeFrames > 0 && pauseState != PAUSE_STATE_PAUSED && (startFlag != 0 || startedFlag != 0)) {
            s32 frames = (s32)(interpolationStateEvaluate(&fadeVolume) * (f32)fadeFrames);
            moveValueSetTargetA(&fadeVolume, 0.0f, frames);
            SetPlayerPriority(0);
            autoStopFlag = 0;
            pauseState = PAUSE_STATE_NORMAL;
            unPauseFlag = 0;
            fadeOutFlag = 1;
            muteState = MUTE_STATE_NORMAL;
            return;
        }
        Finalize();
    }

    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ SoundPlayer *soundPlayer;
    /* 0x14 */ SoundActorA *soundActor;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ AmbientParamUpdateCallbackA *ambientParamUpdateCallback;
    /* 0x20 */ AmbientArgUpdateCallbackA *ambientArgUpdateCallback;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ void *ambientArg;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ SoundAmbientParam ambientParam;
    /* 0x58 */ SoundActorParam actorParam;
    /* 0x68 */ MoveValue<f32, s32> fadeVolume;
    /* 0x78 */ MoveValue<f32, s32> pauseFadeVolume;
    /* 0x88 */ MoveValue<f32, s32> muteFadeVolume;
    /* 0x98 */ u8 startFlag;
    /* 0x99 */ u8 startedFlag;
    /* 0x9A */ u8 autoStopFlag;
    /* 0x9B */ u8 fadeOutFlag;
    /* 0x9C */ u8 playerAvailable;
    /* 0x9D */ u8 playerPriority;
    /* 0x9E */ u8 unk9E[2];
    /* 0xA0 */ u8 playerState;      /* PlayerState */
    /* 0xA1 */ u8 pauseState;       /* PauseState */
    /* 0xA2 */ u8 muteState;        /* MuteState */
    /* 0xA3 */ u8 unPauseFlag;
    /* 0xA4 */ s32 autoStopCounter;
    /* 0xA8 */ u32 updateCounter;
    /* 0xAC */ u32 playingCounter;
    /* 0xB0 */ u32 id;
};

} /* namespace internal */
} /* namespace snd */
} /* namespace nw */

#endif
