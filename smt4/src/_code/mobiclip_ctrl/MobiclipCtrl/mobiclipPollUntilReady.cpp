/* NON_MATCHING: O3 keeps the synchronization state base live in r7 across the loop and changes the termination-load schedule; O2 may preserve retail's literal reloads and multiply registers. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match3_MovieRead.h"


struct MoviePlaybackControl {
    /* 0x00 */ u8 stop;
    /* 0x01 */ u8 unk01[7];
    /* 0x08 */ s64 interval;
};

extern "C" {
extern MoviePlaybackControl g_mobiclipCtrl;
extern MovieReadHandle DAT_004c3af8;
extern MovieSync g_mobiclipPlayer;
void mobiclipPlayerReleaseHandle(MovieReadHandle *);
void timedJobBeginStop(MovieSync *);
void FUN_0011b788(MovieSync *);
void asdSndApplyPendingVoiceState(MovieReadHandle *);
s32 block158OwnerHasRemaining(MovieSync *);
s64 FUN_00350ff8(MovieSync *);
void movieSyncConsumeReadyFrame(MovieSync *, s64 interval);
s32 FUN_00350c98(MovieSync *, s64 interval);
void block158OwnerCheck(MovieSync *);
s32 block158OwnerReady(MovieSync *);
void frameStreamStop(MovieReadHandle *);
void movieSyncDrainSourcePositions(MovieSync *);
void FUN_0034fbc8(MovieSync *);
void FUN_00350e30(MovieSync *);
void playHandleStart(MovieReadHandle *);
void mobiclipYieldPlaybackThread(MovieSync *);
void FUN_00350320(MovieSync *);

// Pump movie synchronization until playback is ready, interrupted, or stopped.
u8 mobiclipPollUntilReady(void)
{
    bool interrupted = false;
    bool ready = false;
    do {
        if (mobiclipReadIsComplete(&DAT_004c3af8)) {
            mobiclipPlayerReleaseHandle(&DAT_004c3af8);
            timedJobBeginStop(&g_mobiclipPlayer);
            FUN_0011b788(&g_mobiclipPlayer);
            asdSndApplyPendingVoiceState(&DAT_004c3af8);
        }
        if (!block158OwnerHasRemaining(&g_mobiclipPlayer)) {
            s64 elapsed = FUN_00350ff8(&g_mobiclipPlayer);
            if (elapsed >= g_mobiclipCtrl.interval) {
                movieSyncConsumeReadyFrame(&g_mobiclipPlayer, g_mobiclipCtrl.interval);
            } else if (FUN_00350c98(&g_mobiclipPlayer, g_mobiclipCtrl.interval)) {
                block158OwnerCheck(&g_mobiclipPlayer);
            }
        }
        if (block158OwnerReady(&g_mobiclipPlayer)) {
            s64 elapsed = FUN_00350ff8(&g_mobiclipPlayer);
            if (elapsed >= g_mobiclipCtrl.interval * 6) {
                frameStreamStop(&DAT_004c3af8);
                movieSyncDrainSourcePositions(&g_mobiclipPlayer);
                FUN_0034fbc8(&g_mobiclipPlayer);
            } else if (elapsed >= 0) {
                ready = true;
                FUN_00350e30(&g_mobiclipPlayer);
                playHandleStart(&DAT_004c3af8);
            }
        }
        if (g_mobiclipCtrl.stop) {
            interrupted = true;
        }
        mobiclipYieldPlaybackThread(&g_mobiclipPlayer);
    } while (!ready && !interrupted && g_mobiclipPlayer.state != 7 && g_mobiclipPlayer.state != 1);
    if (ready) {
        return 1;
    }
    FUN_00350320(&g_mobiclipPlayer);
    return 0;
}
}
