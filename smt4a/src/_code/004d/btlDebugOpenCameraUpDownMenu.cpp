#include "battle/DebugPanel.h"
#include "battle/btlCamera.h"
#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" {
extern BtlCameraA *g_btlCamera;
extern const AsdListBoxEntry DAT_005736e0[8];
extern const char DAT_00528088[];
extern f32 DAT_0057150c;
extern f32 DAT_00571510;
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 mode);
u32 asdListBoxCreateDefaultFlags(u32 parent, u32 id, u32 argument, u32 flags);
void asdListBoxAddItems(u32 job, const AsdListBoxEntry *items, u32 count);
void asdListBoxSetByteValue(u32 job, u32 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetToggleItem(u32 job, s32 item, s32 value);
void asdListBoxSetFloatItem(u32 job, s32 item, f32 value, s32 minimum, s32 maximum);

// Rebuild the camera up/down menu from the camera mode flags, controls and position.
void btlDebugOpenCameraUpDownMenu(BattleDebugPanelWork *work, BattleDebugPanelParent *parent)
{
    if (jobIsValid(work->panelJob)) {
        FUN_003592dc(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(parent->job, 117, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_005736e0, 8);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, DAT_00528088);
    asdListBoxSetToggleItem(work->panelJob, 0, (g_btlCamera->flags & 0x20) >> 5);
    asdListBoxSetToggleItem(work->panelJob, 1, (g_btlCamera->flags & 0x40) >> 6);
    asdListBoxSetToggleItem(work->panelJob, 2, (g_btlCamera->flags & 0x80) >> 7);
    asdListBoxSetFloatItem(work->panelJob, 3, DAT_0057150c, -10, 10);
    asdListBoxSetFloatItem(work->panelJob, 4, DAT_00571510, 0, 10);
    asdListBoxSetFloatItem(work->panelJob, 5, g_btlCamera->vector[0], -999, 999);
    asdListBoxSetFloatItem(work->panelJob, 6, g_btlCamera->vector[1], -999, 999);
    asdListBoxSetFloatItem(work->panelJob, 7, g_btlCamera->vector[2], -999, 999);
}
}
