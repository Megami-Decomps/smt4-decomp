/* The nn::snd::CTR sound thread's state. */
#ifndef SHARD_S1SNDTHREAD_H
#define SHARD_S1SNDTHREAD_H

#include "shard/S1NnOs.h"
#include "shard/S1NnSnd.h"

typedef void (*SndThreadCallback)(u32 userData);

typedef struct SndThread {
    /* 0x00 */ u64 workTicks;            /* ticks spent per update, when profiling */
    /* 0x08 */ u8 profiling;
    /* 0x09 */ u8 unk09[4];
    /* 0x0D */ u8 running;
    /* 0x0E */ s8 auxEnabled;
    /* 0x0F */ u8 unk0F[0x11];
    /* 0x20 */ SndThreadCallback callback;   /* runs under the lock */
    /* 0x24 */ u32 callbackData;
    /* 0x28 */ SndThreadCallback preCallback;
    /* 0x2C */ u32 preCallbackData;
    /* 0x30 */ u8 skipPreCallback;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ CriticalSection lock;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ LightEvent auxEvent;      /* signaled when aux processing is requested */
    /* 0x48 */ LightEvent doneEvent;     /* waited on until aux processing finished */
} SndThread;

#endif
