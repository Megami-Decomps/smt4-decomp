/* NON_MATCHING: 84 lines, VFP and scratch register choices only: retail loads time and duration with one vldmia
 * into s0/s1 (ours: two vldr into s1/s0) and the settled step's skip is bcs where ours is bge. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
/* The segmented gauge's work block. */
struct GaugeWork {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ f32 span;                 /* length of the gauge */
    /* 0x9c */ u8 unk9c[8];
    /* 0xa4 */ u8 forward;               /* fills left to right (segment 0 first) */
    /* 0xa5 */ u8 settled;
    /* 0xa6 */ u8 unka6[2];
    /* 0xa8 */ f32 time;
    /* 0xac */ f32 duration;
    /* 0xb0 */ f32 position;
    /* 0xb4 */ f32 target;
    /* 0xb8 */ f32 step;                 /* per-frame fill of the lit segments */
    /* 0xbc */ s32 litCount;
    /* 0xc0 */ f32 fill[8];
    /* 0xe0 */ u8 unke0[4];
    /* 0xe4 */ f32 scroll;
    /* 0xe8 */ f32 angle;
};
}

extern "C" {

/* Advances the gauge one frame: its scroll and spin, the position approaching the target and the fill of
   the lit segments. */
void FUN_0040898c(GaugeWork *gauge)
{
    gauge->scroll += 1.0f;
    if (gauge->scroll >= 30.0f) {
        gauge->scroll -= 30.0f;
    }
    gauge->angle += 12.0f;
    if (gauge->angle > 360.0f) {
        gauge->angle -= 360.0f;
    }
    if (gauge->settled != 0) {
        if (gauge->time < gauge->duration) {
            gauge->time += 1.0f;
            if (gauge->time >= gauge->duration) {
                gauge->time = 0.0f;
            }
        }
        return;
    }
    if (!(gauge->time < gauge->duration)) {
        return;
    }
    gauge->time += 1.0f;
    if (gauge->time >= gauge->duration) {
        gauge->settled = 1;
        gauge->target = 400.0f;
        gauge->position = 400.0f;
        for (s32 i = 0; i < 8; i++) {
            gauge->fill[i] = 1.0f;
        }
        gauge->time = 0.0f;
        gauge->duration = 40.0f;
        return;
    }
    gauge->position = gauge->target / gauge->duration + gauge->position;
    if (gauge->litCount == 0) {
        if (!(gauge->target - gauge->position > gauge->span)) {
            gauge->litCount = 1;
            gauge->step = 1.0f / ((gauge->duration - gauge->time) * 0.125f);
        }
    } else {
        TextureTableEntryIV *source = asdTMTexTableEntryAt(12, 55);
        if (gauge->litCount < 8) {
            f32 remaining = gauge->target - gauge->position;
            f32 reach = gauge->span - (f32)((source->width & ~0x8000) * gauge->litCount);
            if (!(reach < remaining)) {
                do {
                    gauge->litCount++;
                    if (gauge->litCount >= 8) {
                        break;
                    }
                    reach = gauge->span - (f32)((source->width & ~0x8000) * gauge->litCount);
                } while (!(reach < remaining));
            }
        }
    }
    s32 count = gauge->litCount;
    if (gauge->forward != 0) {
        for (s32 i = 0; i < count; i++) {
            gauge->fill[i] += gauge->step;
            if (gauge->fill[i] > 1.0f) {
                gauge->fill[i] = 1.0f;
            }
        }
    } else {
        for (s32 i = 0; i < count; i++) {
            gauge->fill[7 - i] += gauge->step;
            if (gauge->fill[7 - i] > 1.0f) {
                gauge->fill[7 - i] = 1.0f;
            }
        }
    }
}

} /* extern "C" */
