#ifndef SHARD_FRAMEWORK_H
#define SHARD_FRAMEWORK_H

#include "shard/JobWork.h"

struct FrameReadyFlags {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 active;
    /* 0x8d */ u8 ready;
    /* 0x8e */ u8 unk8e[8];
    /* 0x96 */ u8 surfaceReady;
};

struct FrameSurfaceState {
    /* 0x00 */ u8 unk00[0xd8];
    /* 0xd8 */ u8 blocked;
    /* 0xd9 */ u8 unkd9[3];
    /* 0xdc */ JobSurface *surface;
    /* 0xe0 */ u8 unkE0;
};

struct FrameWork {
    /* 0x0000 */ u8 unk0000[0xe00];
    /* 0x0e00 */ FrameReadyFlags flags;
    /* 0x0e97 */ u8 unk0e97[0x69];
    /* 0x0f00 */ FrameSurfaceState frame;
};

struct FrameReadyFlagsA {
    /* 0x00 */ u8 unk00[0xf4];
    /* 0xf4 */ u8 active;
    /* 0xf5 */ u8 ready;
    /* 0xf6 */ u8 unkf6[8];
    /* 0xfe */ u8 surfaceReady;
};

struct FrameSurfaceStateA {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 blocked;
    /* 0x8d */ u8 unk8d[3];
    /* 0x90 */ JobSurface *surface;
};

struct FrameWorkA {
    /* 0x0000 */ u8 unk0000[0xf00];
    /* 0x0f00 */ FrameReadyFlagsA flags;
    /* 0x0fff */ u8 unk0fff[0x401];
    /* 0x1400 */ FrameSurfaceStateA frame;
};

#endif
