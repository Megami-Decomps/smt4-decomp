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
extern MovieSync DAT_004c3b20;
void mobiclipPlayerReleaseHandle(MovieReadHandle *);
void FUN_0011b6c8(MovieSync *);
void FUN_0011b788(MovieSync *);
void asdSndApplyPendingVoiceState(MovieReadHandle *);
s32 FUN_00350e18(MovieSync *);
s64 FUN_00350ff8(MovieSync *);
void FUN_0034fc50(MovieSync *, s64 interval);
s32 FUN_00350c98(MovieSync *, s64 interval);
void FUN_0034fe14(MovieSync *);
s32 FUN_00350854(MovieSync *);
void FUN_0034f5f8(MovieReadHandle *);
void movieSyncDrainSourcePositions(MovieSync *);
void FUN_0034fbc8(MovieSync *);
void FUN_00350e30(MovieSync *);
void FUN_0034f630(MovieReadHandle *);
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
            FUN_0011b6c8(&DAT_004c3b20);
            FUN_0011b788(&DAT_004c3b20);
            asdSndApplyPendingVoiceState(&DAT_004c3af8);
        }
        if (!FUN_00350e18(&DAT_004c3b20)) {
            s64 elapsed = FUN_00350ff8(&DAT_004c3b20);
            if (elapsed >= g_mobiclipCtrl.interval) {
                FUN_0034fc50(&DAT_004c3b20, g_mobiclipCtrl.interval);
            } else if (FUN_00350c98(&DAT_004c3b20, g_mobiclipCtrl.interval)) {
                FUN_0034fe14(&DAT_004c3b20);
            }
        }
        if (FUN_00350854(&DAT_004c3b20)) {
            s64 elapsed = FUN_00350ff8(&DAT_004c3b20);
            if (elapsed >= g_mobiclipCtrl.interval * 6) {
                FUN_0034f5f8(&DAT_004c3af8);
                movieSyncDrainSourcePositions(&DAT_004c3b20);
                FUN_0034fbc8(&DAT_004c3b20);
            } else if (elapsed >= 0) {
                ready = true;
                FUN_00350e30(&DAT_004c3b20);
                FUN_0034f630(&DAT_004c3af8);
            }
        }
        if (g_mobiclipCtrl.stop) {
            interrupted = true;
        }
        mobiclipYieldPlaybackThread(&DAT_004c3b20);
    } while (!ready && !interrupted && DAT_004c3b20.state != 7 && DAT_004c3b20.state != 1);
    if (ready) {
        return 1;
    }
    FUN_00350320(&DAT_004c3b20);
    return 0;
}
}
