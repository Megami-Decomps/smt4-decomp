/* NON_MATCHING: register allocation only: retail holds the lock pointer in r5 and the buffer/size in r6/r7 (built: r7, r5/r6) */
/* Installs the profile buffer (and its size) under the thread's lock, if profiling is enabled and a buffer is given. */
#include "common.h"

extern "C" {

typedef struct CriticalSection CriticalSection;

typedef struct SoundThread {
    /* 0x000 */ u8 unk000[0x1B8];
    /* 0x1B8 */ void *profileBuffer;
    /* 0x1BC */ u32 profileBufferSize;
    /* 0x1C0 */ u32 profileUsed;
    /* 0x1C4 */ u8 lock[0x32];      /* CriticalSection */
    /* 0x1F6 */ u8 profileEnabled;
} SoundThread;

extern void nn_os_CriticalSection_Enter(void *cs);
extern void nn_os_CriticalSection_Leave(void *cs);

void nw_snd_internal_driver_SoundThread_SetProfileBuffer(SoundThread *thread, void *buffer, u32 size)
{
    void *lock = thread->lock;

    nn_os_CriticalSection_Enter(lock);
    if (thread->profileEnabled != 0 && buffer != NULL) {
        thread->profileUsed = 0;
        thread->profileBuffer = buffer;
        thread->profileBufferSize = size;
        nn_os_CriticalSection_Leave(lock);
        return;
    }
    nn_os_CriticalSection_Leave(lock);
}

}
