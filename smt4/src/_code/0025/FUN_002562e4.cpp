/* NON_MATCHING: retail reloads g_mapIf (second literal-pool word) after the first byte store and keeps the 0.0f in s0; the build keeps one base register and schedules the duration scaling before the stores. */
#include "common.h"

/* The fade block of the map interface at +0xCCC0. */
struct MapIfFade {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 id;
    /* 0x04 */ s16 step;
    /* 0x06 */ s16 frames;
    /* 0x08 */ s16 stepCopy;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ f32 offset[3];
};

struct MapIfFadeOwner {
    /* 0x0000 */ u8 unk0000[0xCCC0];
    /* 0xCCC0 */ MapIfFade fade;
};

extern "C" {

extern MapIfFadeOwner *g_mapIf; /* 0x447a78 */

/* Starts (or, with zero duration, stops) the map interface fade: `duration` in tenths of a second is kept in frames. */
void FUN_002562e4(s32 id, s32 duration)
{
    if (duration == 0) {
        g_mapIf->fade.active = 0;
        return;
    }
    g_mapIf->fade.active = 1;
    if (id == 0) {
        id = -1;
    }
    g_mapIf->fade.id = id;
    s16 frames = duration * 10;
    g_mapIf->fade.frames = frames;
    g_mapIf->fade.offset[0] = 0.0f;
    g_mapIf->fade.offset[1] = 0.0f;
    g_mapIf->fade.offset[2] = 0.0f;
    s16 step = frames * 4 / 10;
    g_mapIf->fade.step = step;
    g_mapIf->fade.stepCopy = step;
}

} /* extern "C" */
