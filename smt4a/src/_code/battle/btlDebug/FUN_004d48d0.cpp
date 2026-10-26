/* NON_MATCHING: panel-job and settings loads are scheduled in a different order, and the 64-bit mask loads use LDM/register choices that differ from retail's separate LDRs. */
#include "battle/DebugPanel.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "battle/btlDebug.h"
#include "shard/X14_BtlUiClose.h"

extern "C" {
extern BtlUiCloseState DAT_005715f8;
extern const AsdListBoxEntry DAT_00571780[16];
extern s32 DAT_00573970;
extern s32 DAT_00573b80;
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
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
        FUN_003592dc(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 117, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_00571780, 16);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, "btl Debug Menu");
    if (!DAT_005715f8.variant) {
        asdListBoxSetIntItem(work->panelJob, 0, DAT_005715f8.selection, 0, dataTable22GetCount() - 1, 0);
        asdListBoxSetToggleItem(work->panelJob, 1, DAT_005715f8.variant);
    } else {
        asdListBoxSetIntItem(work->panelJob, 0, DAT_005715f8.selection, 0, dataTable3Type0Count() - 1, 0);
        asdListBoxSetToggleItem(work->panelJob, 1, DAT_005715f8.variant);
    }
    asdListBoxSetIntItem(work->panelJob, 2, DAT_00573970, 0, 0x4B1, 0);
    asdListBoxSetIntItem(work->panelJob, 3, DAT_00573b80, 0, 1000, 0);
    asdListBoxSetToggleItem(work->panelJob, 4, (battle->markerMasks.bits & DAT_005715f8.maskA8) != 0);
    asdListBoxSetToggleItem(work->panelJob, 5, (battle->markerMasks.bits & DAT_005715f8.maskB0) != 0);
    asdListBoxSetToggleItem(work->panelJob, 6, (DAT_005715f8.maskB8 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 11, (DAT_005715f8.mask118 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 12, (battle->markerMasks.bits & DAT_005715f8.mask158) != 0);
    asdListBoxSetToggleItem(work->panelJob, 14, (DAT_005715f8.maskD0 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 15, (DAT_005715f8.mask128 & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(work->panelJob, 13, (battle->markerMasks.bits & DAT_005715f8.mask168) != 0);
}
}
