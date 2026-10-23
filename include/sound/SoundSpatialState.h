#ifndef SOUND_SOUNDSPATIALSTATE_H
#define SOUND_SOUNDSPATIALSTATE_H

#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundSpatialControllerOwner {
    u32 unk00;
    void* controller;
};

struct SoundSpatialState {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u8 unk014;
    /* 0x015 */ u8 unk015;
    /* 0x016 */ u8 unk016[2];
    /* 0x018 */ u32 unk018;
    union {
        /* 0x01C */ u8 unk01C[0x30];
        /* 0x01C */ SoundSpatialControllerOwner* controllerOwner;
    };
    /* 0x04C */ s32 soundId;
    /* 0x050 */ u8 unk050[0x544];
    /* 0x594 */ u32 unk594;
    /* 0x598 */ u32 unk598;
    union {
        /* 0x59C */ AsdSndListener listenerHistory[8];
        struct {
            AsdSndListener positionDelta;
            AsdSndListener rotationDelta;
            AsdSndListener position;
            AsdSndListener rotation;
            AsdSndListener targetPosition;
            AsdSndListener targetRotation;
        } transition;
    };
};
typedef char SoundSpatialStateLayoutCheck[sizeof(SoundSpatialState) == 0x5FC &&
    offsetof(SoundSpatialState, listenerHistory) == 0x59C ? 1 : -1];
typedef char SoundSpatialTransitionOffsetsCheck[
    offsetof(SoundSpatialState, controllerOwner) == 0x1C &&
    offsetof(SoundSpatialState, transition.position) == 0x5B4 &&
    offsetof(SoundSpatialState, transition.targetPosition) == 0x5CC &&
    sizeof(SoundSpatialState) == 0x5FC ? 1 : -1];

#endif
