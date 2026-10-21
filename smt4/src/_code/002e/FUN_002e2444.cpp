/* NON_MATCHING: geometry stores use different base registers and combine the final arguments into stm. */
#include "common.h"

namespace {
struct FrameGeometry {
    /* 0x000 */ u8 unk000[0x28d];
    /* 0x28d */ u8 frameActive;
    /* 0x28e */ u8 unk28E[2];
    /* 0x290 */ s32 frameState;
    /* 0x294 */ u8 unk294[4];
    /* 0x298 */ f32 coordinates[8];
    /* 0x2b8 */ u8 unk2B8[0xc];
    /* 0x2c4 */ f32 progress;
    /* 0x2c8 */ s32 state;
    /* 0x2cc */ u8 active;
    /* 0x2cd */ u8 unk2CD[3];
    /* 0x2d0 */ u32 first;
    /* 0x2d4 */ u32 second;
    /* 0x2d8 */ u32 third;
};
struct FrameState {
    /* 0x000 */ u8 unk000[0xc00];
    /* 0xc00 */ FrameGeometry geometry;
};
}

extern "C" {
extern FrameState *g_frameTex;

/* Initializes the full-screen frame geometry and its transition state. */
void FUN_002e2444(u32 first, u32 second, u32 third)
{
    FrameGeometry *geometry = &g_frameTex->geometry;
    geometry->coordinates[0] = -3.0f;
    geometry->coordinates[1] = 403.0f;
    geometry->coordinates[2] = -3.0f;
    geometry->coordinates[3] = 403.0f;
    geometry->coordinates[4] = -3.0f;
    geometry->coordinates[5] = -3.0f;
    geometry->coordinates[6] = 243.0f;
    geometry->coordinates[7] = 243.0f;
    geometry->first = first;
    geometry->second = second;
    geometry->third = third;
    geometry->progress = 0.0f;
    geometry->active = 1;
    geometry->state = 1;
    geometry->frameState = 3;
    geometry->frameActive = 1;
}
}
