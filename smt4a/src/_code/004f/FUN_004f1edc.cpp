/* NON_MATCHING: The final vector copy uses r1-r3 rather than retail's r0-r2; all other instructions match. */
#include "common.h"
#include <stddef.h>

struct InterpolationPosition {
    f32 x, y, z;
};
struct PositionInterpolation {
    /* 0x000 */ InterpolationPosition position;
    /* 0x00C */ u8 unk00C[0x10];
    /* 0x01C */ InterpolationPosition start;
    /* 0x028 */ InterpolationPosition end;
    /* 0x034 */ u8 unk034[0x618];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[0x144];
    /* 0x794 */ s32 frame;
    /* 0x798 */ s32 duration;
};
typedef char PositionInterpolationFrameCheck[offsetof(PositionInterpolation, frame) == 0x794 ? 1 : -1];

extern "C" {
f32 FUN_003d4dd4(s32 mode, s32 duration, u32 frame);

/* Interpolates the position for this frame, then snaps to the endpoint on completion. */
void FUN_004f1edc(PositionInterpolation *work)
{
    f32 dx = work->end.x - work->start.x;
    f32 dy = work->end.y - work->start.y;
    f32 dz = work->end.z - work->start.z;
    f32 factor = FUN_003d4dd4(0, work->duration, work->frame);
    work->position.x = work->start.x + dx * factor;
    work->position.y = work->start.y + dy * factor;
    work->position.z = work->start.z + dz * factor;
    ++work->frame;
    if (work->frame > work->duration) {
        work->position = work->end;
        work->flags &= ~0x80000u;
    }
}
}
