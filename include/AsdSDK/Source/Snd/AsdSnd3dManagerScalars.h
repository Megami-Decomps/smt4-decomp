/* AsdSDK/Source/Snd/AsdSoundSystem: the three scalars of the 3D sound manager that the sound system
 * forwards to its playing object, reached through the manager's base inside g_asdSound (IV layout). */
#ifndef ASDSDK_SOURCE_SND_ASDSND3DMANAGERSCALARS_H
#define ASDSDK_SOURCE_SND_ASDSND3DMANAGERSCALARS_H

#include "common.h"
#include <stddef.h>

/* The 3D sound manager (0x784 in the sound system block). */
struct AsdSnd3dManagerScalars {
    /* 0x000 */ u8 unk000[0x97C];
    /* 0x97C */ u8 object[0xB8];     /* the playing object the scalars are forwarded to */
    /* 0xA34 */ f32 scalarA34;
    /* 0xA38 */ f32 outputVolume;
    /* 0xA3C */ f32 scalarA3C;
    /* 0xA40 */ u8 unkA40[8];
    /* 0xA48 */ s8 active;           /* the 3D sound state is enabled */
};

/* The sound system block as seen by the scalar setters. */
struct AsdSnd3dScalarsView {
    /* 0x000 */ u8 prefix[0x784];
    /* 0x784 */ AsdSnd3dManagerScalars manager;
};

typedef char AsdSnd3dManagerScalarsOffsets[
    offsetof(AsdSnd3dScalarsView, manager.active) == 0x11CC &&
    offsetof(AsdSnd3dScalarsView, manager.object) == 0x1100 &&
    offsetof(AsdSnd3dScalarsView, manager.outputVolume) == 0x11BC ? 1 : -1];

#endif
