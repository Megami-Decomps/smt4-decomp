#include "ui/FrameTex.h"
extern "C" FrameWork *g_frameTex;

extern "C" {

/* Applies one of the frame-texture transition modes to the shared frame work. */
void frameTexApplyMode(s32 mode)
{
    FrameWork *work = g_frameTex;

    if (mode == 0) {
        work->unk0C = 0;
        work->unk10 = 0;
        work->unk14 = 0;
        work->unk18 = 0;
        work->unkF60 = 0;
        work->unkF63 = 0;
        work->unkF64 = 0;
        work->unkF65 = 0;
        work->unkF98 = 0;
    } else if (mode == 1) {
        work->unk0C = 1;
        work->unkF98 = 0;
        work->unk10 = 1;
    } else if (mode == 2) {
        if (work->unk0C != 0) {
            work->unk14 = 1;
        } else {
            work->unk10 = 0;
            work->unk14 = 0;
            work->unk18 = 0;
        }
    } else if (mode == 3) {
        work->unk0C = 1;
        work->unk10 = 0;
        work->unk14 = 0;
        work->unk18 = 0;
    } else if (mode == 4) {
        work->unk0C = 1;
        work->unk10 = 1;
        work->unkF98 = 1;
    }
}

} /* extern "C" */
