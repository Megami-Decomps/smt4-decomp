/* The sound thread's state (nn::snd driver thread). */
#ifndef S2_SOUND_THREAD_H
#define S2_SOUND_THREAD_H

#include "common.h"

typedef struct SoundThread SoundThread;

typedef void (*SoundThreadCallback)(void *arg);

struct SoundThread {
    /* 0x00 */ u32 processTicksLow;        /* system ticks spent in the passes, accumulated when profiling */
    /* 0x04 */ u32 processTicksHigh;
    /* 0x08 */ u8 profileEnabled;
    /* 0x09 */ u8 unk09[4];
    /* 0x0d */ u8 running;                 /* the thread loop runs while this is set */
    /* 0x0e */ s8 auxEnabled;              /* signals the DSP-side waiter when an aux callback is set */
    /* 0x0f */ u8 unk0f[0x11];
    /* 0x20 */ SoundThreadCallback frameCallback; /* run once per pass under the lock */
    /* 0x24 */ void *frameCallbackArg;
    /* 0x28 */ SoundThreadCallback userCallback;  /* run once per pass, outside the lock */
    /* 0x2c */ void *userCallbackArg;
    /* 0x30 */ u8 userCallbackDisabled;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ u8 lock[0xc];               /* nn::os::CriticalSection */
    /* 0x40 */ u8 wakeEvent[8];            /* nn::os::LightEvent, signalled when a pass has aux work */
    /* 0x48 */ u8 doneEvent[8];            /* nn::os::LightEvent, waited on before the next step */
};

#endif
