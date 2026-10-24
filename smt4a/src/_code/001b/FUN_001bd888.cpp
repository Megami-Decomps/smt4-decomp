/* NON_MATCHING: svc 0x28 (svcGetSystemTick) and the data synchronization barrier (mcr c7, c10, 4 via nn/svc.h) now match; armcc hoists the aux-callback array addresses and keeps different locals (push list r4-fp vs retail r4-r9). */
#include "shard/S1SndThread.h"
#include "nn/svc.h"

extern "C" {

extern u8 g_nnSndMasterManager;

void nn_os_LightEvent_Signal(LightEvent *event);
void nn_os_LightEvent_Wait(LightEvent *event);
void nn_os_CriticalSection_Enter(CriticalSection *cs);
void nn_os_CriticalSection_Leave(CriticalSection *cs);
void FUN_001c7598(u64 *elapsed);
void FUN_001cd5ac(void);
void FUN_001c76b8(void);
void nn_snd_CTR_MasterManager_GetAuxCallback(void *manager, s32 bus, u32 *callback, u8 *unused);

/* The sound thread loop: each pass runs the aux callbacks, the registered callbacks and the mixer
 * step, timing the pass when profiling is enabled, until the thread is told to stop. */
void FUN_001bd888(SndThread *thread, void *arg)
{
    thread->running = 1;
    do {
        u64 elapsed = 0;
        u64 startTick = 0;

        if (thread->profiling) {
            FUN_001c7598(&elapsed);
            startTick = svcGetSystemTick();
        } else {
            FUN_001cd5ac();
        }

        bool hasPreCallback = thread->preCallback != NULL;
        s32 auxEnabled = thread->auxEnabled;
        bool auxPending = false;

        if (auxEnabled != 0) {
            u32 auxCallback[2];
            u8 unused[4][2];

            nn_snd_CTR_MasterManager_GetAuxCallback(&g_nnSndMasterManager, 0, &auxCallback[0], unused[0]);
            nn_snd_CTR_MasterManager_GetAuxCallback(&g_nnSndMasterManager, 1, &auxCallback[1], unused[1]);
            auxPending = auxCallback[0] != 0 || auxCallback[1] != 0;
        }

        bool signalAux = auxEnabled & (auxPending | hasPreCallback);

        if (signalAux) {
            nn::os::DataSynchronizationBarrier();
            nn_os_LightEvent_Signal(&thread->auxEvent);
        }
        if (!thread->skipPreCallback && thread->preCallback != NULL) {
            thread->preCallback(thread->preCallbackData);
        }
        if (thread->callback != NULL) {
            nn_os_CriticalSection_Enter(&thread->lock);
            thread->callback(thread->callbackData);
            nn_os_CriticalSection_Leave(&thread->lock);
        }
        if (signalAux) {
            nn_os_LightEvent_Wait(&thread->doneEvent);
        }

        nn_os_CriticalSection_Enter(&thread->lock);
        FUN_001c76b8();
        nn_os_CriticalSection_Leave(&thread->lock);

        if (thread->profiling) {
            thread->workTicks = elapsed + (svcGetSystemTick() - startTick);
        }
    } while (thread->running);
}

} /* extern "C" */
