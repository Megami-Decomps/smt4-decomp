/* NON_MATCHING: panel-job and settings loads are scheduled in a different order, and the 64-bit mask loads use LDM/register choices that differ from retail's separate LDRs. */
#include "battle/DebugPanel.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "battle/btlDebug.h"
#include "shard/X14_BtlUiClose.h"

extern "C" {
extern BtlUiCloseState g_btlDebugGlobals;
extern const AsdListBoxEntry DAT_00571780[16];
extern s32 DAT_00573970;
extern s32 DAT_00573b80;
s32 jobIsValid(u32 job);
void asdListBoxJobReset(u32 job);
void jobStop(u32 job, s32 mode);
void asdListBoxAddItems(u32 job, const AsdListBoxEntry *items, u32 count);
void jobSetText(u32 job, const char *text);
void asdListBoxSetToggleItem(u32 job, s32 item, s32 value);
void asdListBoxSetIntItem(u32 job, s32 item, s32 value, s32 minimum, s32 maximum, u8 flags);
s32 dataTable22GetCount(void);

// Recreate the debug menu panel from the battle's marker masks and the menu settings.
void FUN_004d48d0(BattleDebugPanelWork *work, BtlMainStateA *battle)
{
    if (jobIsValid(work->panelJob)) {
        asdListBoxJobReset(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 117, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_00571780, 16);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, "btl Debug Menu");
    if (!g_btlDebugGlobals.variant) {
        asdListBoxSetIntItem(work->panelJob, 0, g_btlDebugGlobals.selection, 0, dataTable22GetCount() - 1, 0);
        asdListBoxSetToggleItem(work->panelJob, 1, g_btlDebugGlobals.variant);
    } else {
        asdListBoxSetIntItem(work->panelJob, 0, g_btlDebugGlobals.selection, 0, dataTable3Type0Count() - 1, 0);
        asdListBoxSetToggleItem(work->panelJob, 1, g_btlDebugGlobals.variant);
    }
    asdListBoxSetIntItem(work->panelJob, 2, DAT_00573970, 0, 0x4B1, 0);
    asdListBoxSetIntItem(work->panelJob, 3, DAT_00573b80, 0, 1000, 0);
    asdListBoxSetToggleItem(work->panelJob, 4, (battle->markerMasks.bits & g_btlDebugGlobals.maskA8) != 0);
    asdListBoxSetToggleItem(work->panelJob, 5, (battle->markerMasks.bits & g_btlDebugGlobals.maskB0) != 0);
    asdListBoxSetToggleItem(work->panelJob, 6, (g_btlDebugGlobals.maskB8 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 11, (g_btlDebugGlobals.mask118 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 12, (battle->markerMasks.bits & g_btlDebugGlobals.mask158) != 0);
    asdListBoxSetToggleItem(work->panelJob, 14, (g_btlDebugGlobals.maskD0 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 15, (g_btlDebugGlobals.mask128 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 13, (battle->markerMasks.bits & g_btlDebugGlobals.mask168) != 0);
}
}
