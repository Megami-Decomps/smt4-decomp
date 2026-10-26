#include "common.h"

struct FrameColorUpdateWork {
    u8 unk00[0x7c];
    u32 rgb[3];
    u32 alpha[3];
    u32 packed[3];
};

extern "C" {
void FUN_00348c28(u32 enabled);
void frameTexStartTransition(u32 first, u32 second, u32 third);

void FUN_0040128c(FrameColorUpdateWork *work)
{
    work->packed[0] = work->alpha[0] | (work->rgb[0] << 24) | (work->rgb[1] << 16) | (work->rgb[2] << 8);
    work->packed[1] = (work->packed[1] & 0xffffff00) | work->alpha[1];
    work->packed[2] = work->alpha[2] | (work->rgb[0] << 24) | (work->rgb[1] << 16) | (work->rgb[2] << 8);
    FUN_00348c28(1);
    frameTexStartTransition(work->packed[0], work->packed[1], work->packed[2]);
}
}
