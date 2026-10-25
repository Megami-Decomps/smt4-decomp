/* NON_MATCHING: register allocation of the gauge fields (retail loads time/duration with one vldmia and shares the fill loops' tail) and the loop code shape differ; the logic is the same. */
#include "common.h"

namespace {
/* A view of a float whose ordering the engine tests through its (signed) bit pattern. */
union OrderedFloat {
    f32 value;
    s32 bits;
};

struct GaugeSegmentSource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 widthAndFlag;         /* bit 15 is a flag; the rest is the segment width */
};

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
GaugeSegmentSource *asdTMTexTableEntryAt(u32 group, u32 index);

/* Advances the gauge one frame: its scroll and spin, the position approaching the target and the fill of
   the lit segments. */
void FUN_0040898c(GaugeWork *gauge)
{
    OrderedFloat ordered;
    ordered.value = gauge->scroll + 1.0f;
    gauge->scroll = ordered.value;
    if (ordered.bits >= 0x41f00000) {
        gauge->scroll = ordered.value - 30.0f;
    }
    ordered.value = gauge->angle + 12.0f;
    gauge->angle = ordered.value;
    if (ordered.bits > 0x43b40000) {
        gauge->angle = ordered.value - 360.0f;
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
    if (gauge->litCount != 0) {
        GaugeSegmentSource *source = asdTMTexTableEntryAt(12, 55);
        if (gauge->litCount < 8) {
            f32 remaining = gauge->target - gauge->position;
            f32 reach = gauge->span - (f32)((source->widthAndFlag & ~0x8000) * gauge->litCount);
            if (!(reach < remaining)) {
                do {
                    gauge->litCount++;
                    if (gauge->litCount >= 8) {
                        break;
                    }
                    reach = gauge->span - (f32)((source->widthAndFlag & ~0x8000) * gauge->litCount);
                } while (!(reach < remaining));
            }
        }
    } else if (!(gauge->target - gauge->position > gauge->span)) {
        gauge->litCount = 1;
        gauge->step = 1.0f / ((gauge->duration - gauge->time) * 0.125f);
    }
    s32 count = gauge->litCount;
    if (gauge->forward != 0) {
        for (s32 i = 0; i < count; i++) {
            OrderedFloat level;
            level.value = gauge->fill[i] + gauge->step;
            if (level.bits > 0x3f800000) {
                level.value = 1.0f;
            }
            gauge->fill[i] = level.value;
        }
    } else {
        for (s32 i = 0; i < count; i++) {
            OrderedFloat level;
            level.value = gauge->fill[7 - i] + gauge->step;
            if (level.bits > 0x3f800000) {
                level.value = 1.0f;
            }
            gauge->fill[7 - i] = level.value;
        }
    }
}

} /* extern "C" */
