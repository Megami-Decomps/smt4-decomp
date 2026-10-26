/* NON_MATCHING: panel-job and settings loads are scheduled in a different order, and the 64-bit mask loads use LDM/register choices that differ from retail's separate LDRs. */
#include "battle/DebugPanel.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "battle/btlDebug.h"

/* The debug menu's settings block at 0x5715f8; only the parts this panel reads are named. */
struct BtlDebugMenuSettings {
    /* 0x000 */ s8 variant;
    /* 0x001 */ u8 unk001[3];
    /* 0x004 */ s32 selection;
    /* 0x008 */ u8 unk008[0xA0];
    /* 0x0A8 */ u64 maskA8;
    /* 0x0B0 */ u64 maskB0;
    /* 0x0B8 */ u64 maskB8;
    /* 0x0C0 */ u8 unk0C0[0x10];
    /* 0x0D0 */ u64 maskD0;
    /* 0x0D8 */ u8 unk0D8[0x40];
    /* 0x118 */ u64 mask118;
    /* 0x120 */ u8 unk120[8];
    /* 0x128 */ u64 mask128;
    /* 0x130 */ u8 unk130[0x28];
    /* 0x158 */ u64 mask158;
    /* 0x160 */ u8 unk160[8];
    /* 0x168 */ u64 mask168;
};
typedef char BtlDebugMenuSettingsOffsets[
    offsetof(BtlDebugMenuSettings, selection) == 4 && offsetof(BtlDebugMenuSettings, maskA8) == 0xA8 &&
    offsetof(BtlDebugMenuSettings, maskD0) == 0xD0 && offsetof(BtlDebugMenuSettings, mask118) == 0x118 &&
    offsetof(BtlDebugMenuSettings, mask128) == 0x128 && offsetof(BtlDebugMenuSettings, mask158) == 0x158 &&
    offsetof(BtlDebugMenuSettings, mask168) == 0x168 ? 1 : -1];

extern "C" {
extern BtlDebugMenuSettings DAT_005715f8;
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
    asdListBoxSetToggleItem(work->panelJob, 6, (battle->markerMasks.bits & DAT_005715f8.maskB8) != 0);
    asdListBoxSetToggleItem(work->panelJob, 11, (battle->markerMasks.bits & DAT_005715f8.mask118) != 0);
    asdListBoxSetToggleItem(work->panelJob, 12, (battle->markerMasks.bits & DAT_005715f8.mask158) != 0);
    asdListBoxSetToggleItem(work->panelJob, 14, (battle->markerMasks.bits & DAT_005715f8.maskD0) != 0);
    asdListBoxSetToggleItem(work->panelJob, 15, (battle->markerMasks.bits & DAT_005715f8.mask128) != 0);
    asdListBoxSetToggleItem(work->panelJob, 13, (battle->markerMasks.bits & DAT_005715f8.mask168) != 0);
}
}
