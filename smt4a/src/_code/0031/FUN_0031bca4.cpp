/* NON_MATCHING: same control flow, but armcc loads 1.0f into s0 and 0.0f into s1 (retail: 0.0f in s0, 1.0f in s1), so the literal pool order and the stores' registers are swapped. */
#include "common.h"

extern "C" {

/* The job work area's 2D axis: unit direction along x or a scaled y slope. */
struct JobAxisWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ f32 axisX;
    /* 0x28 */ f32 axisY;
};

JobAxisWork *jobGetWork(void);

/* Sets the work area's axis from a signed extent: reciprocal slope, negated when `flip` is set. */
void FUN_0031bca4(u32 unused, s32 extent, s32 flip)
{
    JobAxisWork *work = jobGetWork();

    if (flip == 0) {
        if (extent == 0) {
            work->axisX = 1.0f;
        } else {
            work->axisX = 0.0f;
            work->axisY = 1.0f / (f32)extent;
            return;
        }
    } else {
        if (extent == 0) {
            work->axisX = 0.0f;
        } else {
            work->axisX = 1.0f;
            work->axisY = -1.0f / (f32)extent;
            return;
        }
    }
    work->axisY = 0.0f;
}

} /* extern "C" */
