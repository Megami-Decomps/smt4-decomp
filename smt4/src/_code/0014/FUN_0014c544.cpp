/* NON_MATCHING: register allocation: retail recomputes the list head addresses each iteration (r4-r6 only); built hoists them into r5-r9. */
#include "common.h"
#include "shard/S3SoundThread.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *cs);
void nn_os_CriticalSection_Leave(void *cs);
int FUN_00151050(u8 *);
int FUN_002bae7c(void);
int FUN_002baed8(void);
int FUN_002baf30(void);
int FUN_002bafb0(void);
int nw_snd_internal_DriverCommandManager_ProcessCommand(void);
int nw_snd_internal_driver_ChannelManager_UpdateAllChannel(void);
int nw_snd_internal_driver_VoiceManager_UpdateAllVoices(void);
int lcgRandomHigh16(void);

extern u8 DAT_004ea168;

/* One sound thread frame: runs the callback objects around the driver updates, under the lock. */
void FUN_0014c544(SoundThread *thread)
{
    u8 *lock = thread->lock;

    nn_os_CriticalSection_Enter(lock);
    SoundThreadListCallVfunc08(&thread->listA);
    SoundThreadListCallVfunc0C(&thread->listB);
    FUN_00151050(&DAT_004ea168);
    FUN_002baed8();
    nw_snd_internal_DriverCommandManager_ProcessCommand();
    FUN_002bae7c();
    nw_snd_internal_DriverCommandManager_ProcessCommand();
    SoundThreadListCallVfunc08(&thread->listB);
    FUN_002bafb0();
    nw_snd_internal_driver_ChannelManager_UpdateAllChannel();
    lcgRandomHigh16();
    FUN_002baf30();
    nw_snd_internal_driver_VoiceManager_UpdateAllVoices();
    SoundThreadListCallVfunc0C(&thread->listA);
    nn_os_CriticalSection_Leave(lock);
}

} /* extern "C" */
