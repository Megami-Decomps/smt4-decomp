/* NON_MATCHING: register allocation only: the final flag clear reuses r5 (the job owner) here; retail forms the address in r1 and the value in r2 */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "map/mapDepart.h"
#include "shard/JobWork.h"

extern "C" {


extern void *g_btlUiBlock;

extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);
extern void asdMemFree(void *block);
extern void FUN_0024ef90(u32 job);

/* Shuts down the battle UI block and the popup job, then clears the owner's flag 0. */
void FUN_0021ec34(u32 handle)
{
    BattleDebugOwnerView *owner = (BattleDebugOwnerView *)jobGetWork(handle);

    if (g_btlUiBlock != NULL) {
        FUN_0025c2d0(reinterpret_cast<u32>(g_btlUiBlock), 0);
    }
    if (g_btlDebugState.work != NULL) {
        BattleDebugWork *popup = g_btlDebugState.work;

        g_btlDebugState.selection = 0;
        if (jobIsValid(popup->listBox) != 0) {
            FUN_0024ef90(popup->listBox);
            jobStop(popup->listBox, 0);
        }
        asdMemFree(g_btlDebugState.work);
        g_btlDebugState.work = NULL;
    }
    if (jobIsValid(owner->job) != 0) {
        jobStop(owner->job, 0);
    }
    owner->flags &= ~1;
}

} /* extern "C" */
