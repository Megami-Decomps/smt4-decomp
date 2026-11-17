#include "shard/W6_W6Match8_BattleDebug.h"
#include "map/mapDepart.h"
#include "shard/JobWork.h"
#include "battle/BtlUiGlobal.h"

extern "C" {



extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);
extern void asdMemFree(void *block);
extern void FUN_0024ef90(u32 job);

/* Shuts down the battle UI block and the popup job, then clears the debug-menu bit of the editor mask. */
void btlDebugClose(u32 handle)
{
    BattleDebugOwnerView *owner = (BattleDebugOwnerView *)jobGetWork(handle);

    if (g_btlUiBlock != NULL) {
        FUN_0025c2d0(g_btlUiBlock, 0);
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
    owner->editorMask &= ~1ULL;
}

} /* extern "C" */
