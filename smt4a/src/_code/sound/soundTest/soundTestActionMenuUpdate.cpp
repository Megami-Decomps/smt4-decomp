/* NON_MATCHING: state/inner-switch block placement and wrapped-index register reuse differ; an optimization flag may explain them. */
#include "common.h"

struct SoundTestRequestWork {
    u32 job;
    u32 unk04;
    s32 state;
    u32 frame;
    s32 selection;
};

extern "C" {
extern SoundTestRequestWork *g_requestWork;
void jobStop(u32, s32);
u32 padButtonIsPressed(u32);
u32 padButtonRepeat(u32);
void FUN_003d4c68(u32);
void FUN_003de02c(u32);
void soundChannelRequestIfEnabled(u32, u32, u32);
void soundChannelStopAll(u32);
void bgmPlay(s32, u32, u32);
void FUN_0021c118(s32, s32);

u32 soundTestActionMenuUpdate()
{
    SoundTestRequestWork *work = g_requestWork;
    if (work->state != 99 && padButtonIsPressed(2))
        work->state = 99;
    switch (work->state) {
    case 0:
        work->state = 1;
        work->frame = 0;
        return 0;
    case 1:
        break;
    case 99:
        jobStop(g_requestWork->job, 0);
        return 0xffffffff;
    default:
        return 0;
    }
    if (padButtonRepeat(4)) {
        s32 next = work->selection - 1;
        if (next > 9)
            next = 0;
        else if (next < 0)
            next = 9;
        work->selection = next;
    }
    if (padButtonRepeat(3)) {
        s32 next = work->selection + 1;
        if (next > 9)
            next = 0;
        else if (next < 0)
            next = 9;
        work->selection = next;
    }
    if (!padButtonIsPressed(0)) {
        padButtonIsPressed(1);
        return 0;
    }
    switch (work->selection) {
    case 0:
        FUN_003d4c68(0x100000f);
        break;
    case 1:
        FUN_003de02c(30);
        break;
    case 2:
        soundChannelRequestIfEnabled(0x1000003, 0, 60);
        break;
    case 3:
        soundChannelRequestIfEnabled(0x1000006, 0, 60);
        break;
    case 4:
        soundChannelStopAll(15);
        break;
    case 5:
        bgmPlay(0x1000008, 0, 60);
        break;
    case 6:
        bgmPlay(0x1000005, 0, 60);
        break;
    case 7:
        FUN_0021c118(0x100000f, 15);
        break;
    case 8:
        FUN_0021c118(0x1000003, 15);
        break;
    case 9:
        FUN_0021c118(0x1000008, 15);
        break;
    }
    return 0;
}
}
