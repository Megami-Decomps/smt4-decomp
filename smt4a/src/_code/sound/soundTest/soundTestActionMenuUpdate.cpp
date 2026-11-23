#include "sound/SoundTestWork.h"

namespace {

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
void jobStop(u32 job, s32 flags);
u32 padButtonIsPressed(u32 button);
u32 padButtonRepeat(u32 button);
void bgmResumeOrRequestTrack(u32 sound);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 sound, u32 channel, u32 frames);
void soundChannelStopAll(u32 frames);
void bgmPlay(s32 sound, u32 channel, u32 frames);
void FUN_0021c118(s32 sound, s32 frames);

/* The sound test's action menu: picks one of ten sound actions and runs it on A; B leaves. */
u32 soundTestActionMenuUpdate()
{
    SoundTestWork *work = DAT_00588fc8;
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
                bgmResumeOrRequestTrack(0x100000f);
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
        jobStop(DAT_00588fc8->job, 0);
        return 0xFFFFFFFF;
    }
    return 0;
}
}
