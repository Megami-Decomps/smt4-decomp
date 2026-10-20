/* NON_MATCHING: retail reads the system tick with `svc 0x28` and issues a data-synchronization barrier (`mcr`) inline (built calls the placeholders
 * svcGetSystemTick / coproc_moveto_Data_Synchronization); also the stack layout (retail keeps the aux callback pair at sp+0, the tick count at sp+8)
 * and the tick counter store (retail: two 32-bit stores, built: strd). */
#include "shard/S2SoundThread.h"

extern "C" {

extern u8 g_nnSndMasterManager;

extern u64 svcGetSystemTick(void);                       /* svc 0x28 */
extern void coproc_moveto_Data_Synchronization(u32 zero); /* mcr p15, 0, r0, c7, c10, 4 */
extern void FUN_00159eb8(u64 *ticks);
extern void FUN_00159fd8(void);
extern void FUN_002a208c(void);
extern void nn_snd_CTR_MasterManager_GetAuxCallback(void *manager, u32 index, u32 *callback, u32 *arg);
extern void nn_os_CriticalSection_Enter(void *lock);
extern void nn_os_CriticalSection_Leave(void *lock);
extern void nn_os_LightEvent_Signal(void *event);
extern void nn_os_LightEvent_Wait(void *event);

/* The sound thread loop: each pass runs the sound callbacks and, when profiling, adds the
 * ticks the pass took to the thread's tick counter. `arg` is the thread entry argument (unused). */
void FUN_001560dc(SoundThread *thread, void *arg)
{
    thread->running = 1;
    do {
        u32 auxCallback[2];
        u64 passTicks = 0;
        u32 auxArg[2];
        u64 startTick = 0;
        u32 hasUserCallback;
        s32 auxEnabled;
        u32 auxPending = 0;
        u32 waitForAux;

        if (thread->profileEnabled) {
            FUN_00159eb8(&passTicks);
            startTick = svcGetSystemTick();
        } else {
            FUN_002a208c();
        }

        hasUserCallback = thread->userCallback != NULL;
        auxEnabled = thread->auxEnabled;
        if (auxEnabled) {
            nn_snd_CTR_MasterManager_GetAuxCallback(&g_nnSndMasterManager, 0, &auxCallback[0], &auxArg[0]);
            nn_snd_CTR_MasterManager_GetAuxCallback(&g_nnSndMasterManager, 1, &auxCallback[1], &auxArg[1]);
            auxPending = (auxCallback[0] | auxCallback[1]) != 0;
        }
        waitForAux = auxEnabled & (auxPending | hasUserCallback);
        if (waitForAux) {
            coproc_moveto_Data_Synchronization(0);
            nn_os_LightEvent_Signal(thread->wakeEvent);
        }

        if (!thread->userCallbackDisabled && thread->userCallback != NULL) {
            thread->userCallback(thread->userCallbackArg);
        }
        if (thread->frameCallback != NULL) {
            nn_os_CriticalSection_Enter(thread->lock);
            thread->frameCallback(thread->frameCallbackArg);
            nn_os_CriticalSection_Leave(thread->lock);
        }
        if (waitForAux) {
            nn_os_LightEvent_Wait(thread->doneEvent);
        }

        nn_os_CriticalSection_Enter(thread->lock);
        FUN_00159fd8();
        nn_os_CriticalSection_Leave(thread->lock);

        if (thread->profileEnabled) {
            u64 total = passTicks + (svcGetSystemTick() - startTick);

            thread->processTicksHigh = (u32)(total >> 32);
            thread->processTicksLow = (u32)total;
        }
    } while (thread->running);
}

} /* extern "C" */
