#include "common.h"
#include <stddef.h>

namespace {
struct SoundTestRequestWork {
    u32 job;
    u32 unk04;
    u32 state;
    u32 frame;
    s32 selection;
};
typedef char SoundTestRequestWorkOffsetsCheck[
    offsetof(SoundTestRequestWork, state) == 8 &&
    offsetof(SoundTestRequestWork, selection) == 0x10 ? 1 : -1];

/* Moves the menu selection by `step`, wrapping around the ten entries. */
inline s32 stepSoundTestSelection(s32 selection, s32 step)
{
    if (selection + step > 9) {
        selection = 0;
    } else if (selection + step < 0) {
        selection = 9;
    } else {
        selection += step;
    }
    return selection;
}
}

extern "C" {
extern SoundTestRequestWork *g_requestWork;
void jobStop(u32 job, s32 flags);
u32 padButtonIsPressed(u32 button);
u32 padButtonRepeat(u32 button);
void FUN_003d4c68(u32 sound);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 sound, u32 channel, u32 frames);
void soundChannelStopAll(u32 frames);
void bgmPlay(s32 sound, u32 channel, u32 frames);
void FUN_0021c118(s32 sound, s32 frames);

/* The sound test's action menu: picks one of ten sound actions and runs it on A; B leaves. */
u32 soundTestActionMenuUpdate()
{
    SoundTestRequestWork *work = g_requestWork;
    if (work->state != 99 && padButtonIsPressed(2)) {
        work->state = 99;
    }
    switch (work->state) {
    case 0:
        work->state = 1;
        work->frame = 0;
        break;
    case 1:
        if (padButtonRepeat(4)) {
            work->selection = stepSoundTestSelection(work->selection, -1);
        }
        if (padButtonRepeat(3)) {
            work->selection = stepSoundTestSelection(work->selection, 1);
        }
        if (padButtonIsPressed(0)) {
            switch (work->selection) {
            case 0:
                FUN_003d4c68(0x100000f);
                break;
            case 1:
                bgmRequestSelectedChannelFade(30);
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
            }
        } else {
            padButtonIsPressed(1);
        }
        break;
    case 99:
        jobStop(g_requestWork->job, 0);
        return 0xFFFFFFFF;
    }
    return 0;
}
}
