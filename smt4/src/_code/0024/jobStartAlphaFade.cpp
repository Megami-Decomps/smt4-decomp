/* NON_MATCHING: only the flipped reciprocal differs: retail converts the extent in place (vcvt s2, s2; vdiv s0, s1, s2), the build converts into s0. */
#include "common.h"
#include "shard/JobWork.h"

extern "C" {

/* The job work area's 2D axis: unit direction along x or a scaled y slope. */
struct JobAxisWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ f32 axisX;
    /* 0x28 */ f32 axisY;
};


/* Sets the work area's axis from a signed extent: reciprocal slope, negated when `flip` is set. */
void jobStartAlphaFade(u32 handle, s32 extent, s32 flip)
{
    JobAxisWork *work = (JobAxisWork *)jobGetWork(handle);
    f32 zero = 0.0f;
    f32 one = 1.0f;

    if (flip != 0) {
        if (extent == 0) {
            work->axisX = zero;
        } else {
            work->axisX = one;
            work->axisY = -1.0f / (f32)extent;
            return;
        }
    } else {
        if (extent == 0) {
            work->axisX = one;
        } else {
            work->axisX = zero;
            work->axisY = one / (f32)extent;
            return;
        }
    }
    work->axisY = zero;
}

} /* extern "C" */
