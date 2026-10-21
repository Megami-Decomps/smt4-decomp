/* NON_MATCHING: register allocation: retail recomputes the list head addresses each iteration (r4-r6 only); built hoists them into r5-r9. */
#include "common.h"
#include "shard/S3SoundThread.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *cs);
void nn_os_CriticalSection_Leave(void *cs);
int FUN_001b207c(u8 *);
int FUN_00191330(void);
int objectCommandQueueGet(void);
int FUN_001b1f80(void);
int FUN_00191548(void);
int nw_snd_internal_DriverCommandManager_ProcessCommand(void);
int nw_snd_internal_driver_VoiceManager_GetInstance(void);
int nw_snd_internal_driver_VoiceManager_UpdateAllVoices(void);
int lcgRandomHigh16(void);

extern u8 DAT_00646b38;

/* One sound thread frame: runs the callback objects around the driver updates, under the lock. */
void FUN_001a5fb8(SoundThread *thread)
{
    u8 *lock = thread->lock;

    nn_os_CriticalSection_Enter(lock);
    SoundThreadListCallVfunc08(&thread->listA);
    SoundThreadListCallVfunc0C(&thread->listB);
    FUN_001b207c(&DAT_00646b38);
    objectCommandQueueGet();
    nw_snd_internal_DriverCommandManager_ProcessCommand();
    FUN_00191330();
    nw_snd_internal_DriverCommandManager_ProcessCommand();
    SoundThreadListCallVfunc08(&thread->listB);
    FUN_00191548();
    FUN_001b1f80();
    lcgRandomHigh16();
    nw_snd_internal_driver_VoiceManager_GetInstance();
    nw_snd_internal_driver_VoiceManager_UpdateAllVoices();
    SoundThreadListCallVfunc0C(&thread->listA);
    nn_os_CriticalSection_Leave(lock);
}

} /* extern "C" */
