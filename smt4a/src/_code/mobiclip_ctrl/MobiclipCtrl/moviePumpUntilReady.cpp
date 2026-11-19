#include "shard/W6_W6Match3_MovieRead.h"
#include "shard/S2MovieSync.h"
#include "mobiclip_ctrl/MobiclipStartState.h"

extern "C" {
extern MobiclipStartClock g_mobiclipCtrl;
extern MovieReadHandle DAT_00617f18;
extern MovieSync g_mobiclipPlayer;
s32 mobiclipProcessPollStopEvent();
void mobiclipPlayerReleaseHandle(MovieReadHandle *read);
void timedJobBeginStop(MovieSync *sync);
void FUN_0015842c(MovieSync *sync);
void asdSndApplyPendingVoiceState(MovieReadHandle *read);
s32 block158OwnerHasRemaining(MovieSync *sync);
s64 FUN_00425610(MovieSync *sync);
void movieSyncConsumeReadyFrame(MovieSync *sync);
s32 FUN_004252b0(MovieSync *sync);
s32 block158OwnerCheck(MovieSync *sync);
s32 block158OwnerReady(MovieSync *sync);
void FUN_00423c0c(MovieReadHandle *read);
void movieSyncDrainSourcePositions(MovieSync *sync);
void FUN_004241e0(MovieSync *sync);
void FUN_00425448(MovieSync *sync);
void playHandleStart(MovieReadHandle *read);
void mobiclipYieldPlaybackThread(MovieSync *sync);
void FUN_00424938(MovieSync *sync);
s32 movieSyncGetState(MovieSync *sync);

// Pump pending input until movie playback can start, or until stop/end conditions arrive.
bool moviePumpUntilReady()
{
    bool canceled = false;
    bool started = false;
    s32 state;
    do {
        if (!mobiclipProcessPollStopEvent())
            canceled = true;
        if (mobiclipReadIsComplete(&DAT_00617f18)) {
            mobiclipPlayerReleaseHandle(&DAT_00617f18);
            timedJobBeginStop(&g_mobiclipPlayer);
            FUN_0015842c(&g_mobiclipPlayer);
            asdSndApplyPendingVoiceState(&DAT_00617f18);
        }
        if (!block158OwnerHasRemaining(&g_mobiclipPlayer)) {
            s64 position = FUN_00425610(&g_mobiclipPlayer);
            if (position >= g_mobiclipCtrl.position)
                movieSyncConsumeReadyFrame(&g_mobiclipPlayer);
            else if (FUN_004252b0(&g_mobiclipPlayer))
                block158OwnerCheck(&g_mobiclipPlayer);
        }
        if (block158OwnerReady(&g_mobiclipPlayer)) {
            s64 position = FUN_00425610(&g_mobiclipPlayer);
            if (position >= g_mobiclipCtrl.position * 6) {
                FUN_00423c0c(&DAT_00617f18);
                movieSyncDrainSourcePositions(&g_mobiclipPlayer);
                FUN_004241e0(&g_mobiclipPlayer);
            } else if (position >= 0) {
                started = true;
                FUN_00425448(&g_mobiclipPlayer);
                playHandleStart(&DAT_00617f18);
            }
        }
        if (g_mobiclipCtrl.stopRequested)
            canceled = true;
        mobiclipYieldPlaybackThread(&g_mobiclipPlayer);
        state = movieSyncGetState(&g_mobiclipPlayer);
    } while (!started && !canceled && state != 7 && state != 1);
    if (started)
        return true;
    FUN_00424938(&g_mobiclipPlayer);
    return false;
}
}
