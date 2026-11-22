#include "code/Code0024.h"
#include "common.h"

/* The stage's gradient colors: per-channel RGB, one alpha per stop, and the packed RGBA stops. */
struct StageGradientWork {
    u8 unk00[0x5c];
    u32 rgb[3];    // 0x5c
    u32 alpha[3];  // 0x68
    u32 packed[3]; // 0x74
};

extern "C" {
void frameTexStartTransition(u32 first, u32 middle, u32 last);

// Repacks the gradient's outer stops from its RGB and alphas, keeps the middle stop's RGB, and applies it.
void FUN_0034043c(StageGradientWork *work)
{
    work->packed[0] = work->alpha[0] | (work->rgb[0] << 24) | (work->rgb[1] << 16) | (work->rgb[2] << 8);
    work->packed[1] = (work->packed[1] & 0xffffff00) | work->alpha[1];
    work->packed[2] = work->alpha[2] | (work->rgb[0] << 24) | (work->rgb[1] << 16) | (work->rgb[2] << 8);
    frameTexSetHdrEnabled(1);
    frameTexStartTransition(work->packed[0], work->packed[1], work->packed[2]);
}
}
