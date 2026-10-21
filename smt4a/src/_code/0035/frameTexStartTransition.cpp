/* NON_MATCHING: retail uses `str r1, [r3, #4076]` where armcc emits `add r0, r3, #3072`. */
#include "common.h"

extern "C" {

struct FrameTexture {
    /* 0x000 */ u8 unk000[0xfa5];
    /* 0xfa5 */ u8 dirty;
    /* 0xfa6 */ u8 unkfa6[2];
    /* 0xfa8 */ u32 mode;
    /* 0xfac */ u32 unkfac;
    /* 0xfb0 */ f32 bounds[6];
    /* 0xfc8 */ f32 bottom[2];
    /* 0xfd0 */ u8 unkfd0[0xc];
    /* 0xfdc */ f32 time;
    /* 0xfe0 */ u32 state;
    /* 0xfe4 */ u8 active;
    /* 0xfe5 */ u8 unkfe5[3];
    /* 0xfe8 */ u32 arguments[3];
};
extern FrameTexture *g_frameTex;

void frameTexStartTransition(u32 first, u32 second, u32 third)
{
    FrameTexture *texture = g_frameTex;
    texture->bounds[0] = -3.0f;
    texture->bounds[1] = 403.0f;
    texture->bounds[2] = -3.0f;
    texture->bounds[3] = 403.0f;
    texture->bounds[4] = -3.0f;
    texture->bounds[5] = -3.0f;
    texture->bottom[0] = 243.0f;
    texture->bottom[1] = 243.0f;
    texture->arguments[0] = first;
    texture->arguments[1] = second;
    texture->arguments[2] = third;
    texture->time = 0.0f;
    texture->active = 1;
    texture->state = 1;
    texture->mode = 3;
    texture->dirty = 1;
}

} /* extern "C" */
