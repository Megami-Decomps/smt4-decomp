/* AsdSDK/Source/Snd/AsdSoundSystem: the three scalars of the 3D sound manager that the sound system
 * forwards to its playing object, reached through the manager's base inside g_asdSound (IV layout). */
#ifndef ASDSDK_SOURCE_SND_ASDSND3DMANAGERSCALARS_H
#define ASDSDK_SOURCE_SND_ASDSND3DMANAGERSCALARS_H

#include "common.h"
#include "AsdSDK/Source/Snd/AsdSnd3dPosition.h"
#include <stddef.h>

/* An nw::snd::Sound3DActor (0x84 bytes). */
struct AsdSnd3dActor {
    /* 0x00 */ u8 unk00[0x84];
};


/* The 3D sound manager (0x784 in the sound system block). */
struct AsdSnd3dManagerScalars {
    /* 0x000 */ u8 unk000[0x3C];
    /* 0x03C */ AsdSnd3dActor actors[16];
    /* 0x87C */ u32 handles[16];       /* the sound handle each actor plays, 0 when none */
    /* 0x8BC */ AsdSnd3dPosition positions[16];
    /* 0x97C */ u8 object[0xB8];     /* the playing object the scalars are forwarded to */
    /* 0xA34 */ f32 scalarA34;
    /* 0xA38 */ f32 outputVolume;
    /* 0xA3C */ f32 scalarA3C;
    /* 0xA40 */ u32 playingMask;       /* bit n: actor n is playing */
    /* 0xA44 */ u8 unkA44[4];
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
    offsetof(AsdSnd3dScalarsView, manager.outputVolume) == 0x11BC &&
    offsetof(AsdSnd3dScalarsView, manager.actors) == 0x7C0 &&
    offsetof(AsdSnd3dScalarsView, manager.handles) == 0x1000 &&
    offsetof(AsdSnd3dScalarsView, manager.positions) == 0x1040 &&
    offsetof(AsdSnd3dScalarsView, manager.playingMask) == 0x11C4 ? 1 : -1];

#endif
