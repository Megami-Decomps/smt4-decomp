/* NON_MATCHING: only the last two stores are swapped: retail stores DAT_0044e90c before the ready flag but with the same registers this source gives (storing them in the other source order changes the constants' registers). */
#include "common.h"
#include "nn/svc.h"
#include "nn/os/CriticalSection.h"

/* The sound layer's status block (SMT IV): the lock around the list of live sounds and its ready flag. */
struct SoundStatusInit {
    /* 0x00 */ void *objects;
    /* 0x04 */ s32 objectCount;
    /* 0x08 */ u8 lock[8];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 ready;
};

/* The sound thread's per-frame user callback and its argument. */
struct SoundThreadCallbackView {
    /* 0x000 */ u8 unk000[0x1e8];
    /* 0x1e8 */ void (*callback)(void);
    /* 0x1ec */ u32 argument;
};

extern "C" {
extern SoundStatusInit g_asdSoundStatus;
extern s32 DAT_0044e90c;
SoundThreadCallbackView *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void asdWaveVoiceUpdateAll(void);

/* Sets up the sound layer: its lock, the sound thread's per-frame callback, and marks it ready. */
void FUN_0010dd80(void)
{
    nn_os_CriticalSection_Initialize(g_asdSoundStatus.lock);
    SoundThreadCallbackView *thread = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
    thread->argument = 0;
    nn::os::DataMemoryBarrier();
    thread->callback = asdWaveVoiceUpdateAll;
    g_asdSoundStatus.ready = 1;
    DAT_0044e90c = 20;
}

} /* extern "C" */
