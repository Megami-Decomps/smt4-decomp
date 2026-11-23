#ifndef SMT4A_SOUND_SOUNDTESTWORK_H
#define SMT4A_SOUND_SOUNDTESTWORK_H

#include "common.h"
#include <stddef.h>

/* The sound test's control process and menu state. */
struct SoundTestWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 requested;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 frame;
    /* 0x10 */ s32 selection;
};
typedef char SoundTestWorkOffsetsCheck[
    offsetof(SoundTestWork, requested) == 4 && offsetof(SoundTestWork, state) == 8 &&
    offsetof(SoundTestWork, selection) == 0x10 && sizeof(SoundTestWork) == 0x14 ? 1 : -1];

extern "C" {
extern SoundTestWork *g_requestWork;
void workRequest(u32 handle);
}

/* Sets the request flag at startup and in the control process's end callback. */
static void soundTestSetRequested(SoundTestWork *work, u32 requested)
{
    work->requested = requested;
}

#endif
