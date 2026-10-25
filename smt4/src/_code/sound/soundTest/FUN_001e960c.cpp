#include "common.h"
#include <stddef.h>

struct SoundTestWork;
namespace {
struct SoundTestControlView {
    u32 process;
    u32 flags;
    u32 state;
    u32 counter;
    s32 selection;
};
typedef char SoundTestControlViewOffsetsCheck[
    offsetof(SoundTestControlView, state) == 8 &&
    offsetof(SoundTestControlView, selection) == 0x10 ? 1 : -1];

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
extern SoundTestWork *DAT_0044e110;
u32 padIsButtonPressed(u32 button);
u32 padIsButtonRepeat(u32 button);
void jobStop(u32 process, s32 flags);
void FUN_00287328(u32 sound);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 sound, s32 channel, s32 frames);
void soundChannelStopAll(s32 frames);
void bgmPlay(u32 sound, s32 channel, s32 frames);
void bgmStopNoForce(u32 sound, s32 frames);

u32 FUN_001e960c()
{
    SoundTestControlView *work = reinterpret_cast<SoundTestControlView *>(DAT_0044e110);
    if (work->state != 99 && padIsButtonPressed(2)) {
        work->state = 99;
    }
    switch (work->state) {
    case 0:
        work->state = 1;
        work->counter = 0;
        break;
    case 1:
        if (padIsButtonRepeat(4)) {
            work->selection = stepSoundTestSelection(work->selection, -1);
        }
        if (padIsButtonRepeat(3)) {
            work->selection = stepSoundTestSelection(work->selection, 1);
        }
        if (padIsButtonPressed(0)) {
            switch (work->selection) {
            case 0:
                FUN_00287328(0x1000010);
                break;
            case 1:
                bgmRequestSelectedChannelFade(30);
                break;
            case 2:
                soundChannelRequestIfEnabled(0x1000004, 0, 60);
                break;
            case 3:
                soundChannelRequestIfEnabled(0x1000007, 0, 60);
                break;
            case 4:
                soundChannelStopAll(15);
                break;
            case 5:
                bgmPlay(0x1000009, 0, 60);
                break;
            case 6:
                bgmPlay(0x1000006, 0, 60);
                break;
            case 7:
                bgmStopNoForce(0x1000010, 15);
                break;
            case 8:
                bgmStopNoForce(0x1000004, 15);
                break;
            case 9:
                bgmStopNoForce(0x1000009, 15);
            }
        } else {
            padIsButtonPressed(1);
        }
        break;
    case 99:
        jobStop(reinterpret_cast<SoundTestControlView *>(DAT_0044e110)->process, 0);
        return 0xFFFFFFFF;
    }
    return 0;
}
}
