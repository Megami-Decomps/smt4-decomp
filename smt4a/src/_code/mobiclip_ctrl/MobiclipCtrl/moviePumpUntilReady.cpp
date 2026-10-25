#include "shard/W6_W6Match3_MovieRead.h"
#include "shard/S2MovieSync.h"
#include "mobiclip_ctrl/MobiclipStartState.h"

extern "C" {
extern MobiclipStartClock g_mobiclipCtrl;
extern MovieReadHandle DAT_00617f18;
extern MovieSync DAT_00617f40;
s32 mobiclipProcessPollStopEvent();
void mobiclipPlayerReleaseHandle(MovieReadHandle *read);
void FUN_0015836c(MovieSync *sync);
void FUN_0015842c(MovieSync *sync);
void asdSndApplyPendingVoiceState(MovieReadHandle *read);
s32 block158OwnerHasRemaining(MovieSync *sync);
s64 FUN_00425610(MovieSync *sync);
void FUN_00424268(MovieSync *sync);
s32 FUN_004252b0(MovieSync *sync);
s32 block158OwnerCheck(MovieSync *sync);
s32 block158OwnerReady(MovieSync *sync);
void FUN_00423c0c(MovieReadHandle *read);
void movieSyncDrainSourcePositions(MovieSync *sync);
void FUN_004241e0(MovieSync *sync);
void FUN_00425448(MovieSync *sync);
void playHandleStart(MovieReadHandle *read);
void FUN_00425aa0(MovieSync *sync);
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
            FUN_0015836c(&DAT_00617f40);
            FUN_0015842c(&DAT_00617f40);
            asdSndApplyPendingVoiceState(&DAT_00617f18);
        }
        if (!block158OwnerHasRemaining(&DAT_00617f40)) {
            s64 position = FUN_00425610(&DAT_00617f40);
            if (position >= g_mobiclipCtrl.position)
                FUN_00424268(&DAT_00617f40);
            else if (FUN_004252b0(&DAT_00617f40))
                block158OwnerCheck(&DAT_00617f40);
        }
        if (block158OwnerReady(&DAT_00617f40)) {
            s64 position = FUN_00425610(&DAT_00617f40);
            if (position >= g_mobiclipCtrl.position * 6) {
                FUN_00423c0c(&DAT_00617f18);
                movieSyncDrainSourcePositions(&DAT_00617f40);
                FUN_004241e0(&DAT_00617f40);
            } else if (position >= 0) {
                started = true;
                FUN_00425448(&DAT_00617f40);
                playHandleStart(&DAT_00617f18);
            }
        }
        if (g_mobiclipCtrl.stopRequested)
            canceled = true;
        FUN_00425aa0(&DAT_00617f40);
        state = movieSyncGetState(&DAT_00617f40);
    } while (!started && !canceled && state != 7 && state != 1);
    if (started)
        return true;
    FUN_00424938(&DAT_00617f40);
    return false;
}
}
