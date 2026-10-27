/* NON_MATCHING: camera position snapshot load grouping and angle-conversion VFP register allocation differ. */
#include "battle/DebugPanel.h"
#include "battle/btlCamera.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {
extern BtlCameraA *g_btlCamera;
extern const AsdListBoxEntry DAT_00573220[];
extern const char DAT_0052809c[];
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 list);
void jobStop(u32 job, s32 delay);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *items, s32 count);
void asdListBoxSetByteValue(u32 list, u8 value);
void jobSetText(u32 list, const char *title);
void asdListBoxSetToggleItem(u32 list, u32 index, u32 value);
void asdListBoxSetFloatItem(u32 list, u32 index, f32 value, s32 minimum, s32 maximum);

void FUN_004d5290(BattleDebugPanelWork *work, const BattleDebugPanelParent *parent)
{
    if (jobIsValid(work->panelJob)) {
        FUN_003592dc(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(parent->job, 0x75, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_00573220, 7);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, DAT_0052809c);
    asdListBoxSetToggleItem(work->panelJob, 0, (g_btlCamera->flags & 0x10000000) >> 28);
    BtlCameraVector3 position = g_btlCamera->basePose.position;
    BtlCameraVector3 offset = {g_btlCamera->vector[0], g_btlCamera->vector[1], g_btlCamera->vector[2]};
    asdListBoxSetFloatItem(work->panelJob, 1, position.x + offset.x, -999, 999);
    asdListBoxSetFloatItem(work->panelJob, 2, position.y + offset.y, -999, 999);
    asdListBoxSetFloatItem(work->panelJob, 3, position.z + offset.z, -999, 999);
    asdListBoxSetFloatItem(work->panelJob, 4, (g_btlCamera->basePose.angle + g_btlCamera->unk10) * 360.0f * (1.0f / 256.0f), 0, 360);
    asdListBoxSetFloatItem(work->panelJob, 5, g_btlCamera->basePose.distance + g_btlCamera->unk0C, -90, 90);
    asdListBoxSetToggleItem(work->panelJob, 6, (g_btlCamera->flags & 0x20000000) >> 29);
}
}
