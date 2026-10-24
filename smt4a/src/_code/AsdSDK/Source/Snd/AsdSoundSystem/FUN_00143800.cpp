/* NON_MATCHING: same stores and barrier; only the constant registers for the final two stores are allocated the other way round (r1/r2 swapped) */
#include "nn/svc.h"

struct AsdSoundStatus143800 {
    u8 unk00[12];
    u8 lock[0xd];
    u8 ready;
};

struct SoundThread143800 {
    u8 unk00[0x1e8];
    void (*callback)(void);
    u32 unk1ec;
};

extern "C" {
extern AsdSoundStatus143800 g_asdSoundStatus;
extern u32 DAT_0059dba8;
void nn_os_CriticalSection_Initialize(void *section);
SoundThread143800 *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void FUN_00154320(void);

/* Initialises the sound status lock and publishes the sound thread's callback (after a memory barrier), then marks the status ready. */
void FUN_00143800(void)
{
    nn_os_CriticalSection_Initialize(g_asdSoundStatus.lock);
    SoundThread143800 *thread = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
    thread->unk1ec = 0;
    nn::os::DataMemoryBarrier();
    thread->callback = FUN_00154320;
    DAT_0059dba8 = 20;
    g_asdSoundStatus.ready = 1;
}
}
