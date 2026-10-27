#include "battle/DebugPanel.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
extern "C" {
extern AsdListBoxEntry DAT_00572260[7];
extern const char DAT_005280d8[];
extern u8 DAT_00573bd8;
extern u8 DAT_00573bd9;
extern u8 DAT_00573bda;
extern u8 DAT_00573bdb;
extern u32 DAT_00573bdc;
extern f32 DAT_00573be0;
extern f32 DAT_00573c00;
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 flags);
u32 asdListBoxCreateDefaultFlags(u32 parent, s32 group, s32 flags, s32 argument);
void asdListBoxAddItems(u32 box, const AsdListBoxEntry *items, s32 count);
void asdListBoxSetByteValue(u32 box, u8 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetIntItem(u32 box, s32 item, s32 value, s32 minimum, s32 maximum, s32 flags);
void asdListBoxSetFloatItem(u32 box, s32 item, f32 value, s32 minimum, s32 maximum);

/* Replace the battle-panel debug menu and seed its color, timing and scale controls. */
void btlDebugCreatePanelMenu(BattleDebugPanelWork *work, const BattleDebugPanelParent *parent)
{
    if (jobIsValid(work->panelJob)) {
        FUN_003592dc(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(parent->job, 0x75, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_00572260, 7);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, DAT_005280d8);
    asdListBoxSetIntItem(work->panelJob, 0, DAT_00573bd8, 0, 255, 0);
    asdListBoxSetIntItem(work->panelJob, 1, DAT_00573bd9, 0, 255, 0);
    asdListBoxSetIntItem(work->panelJob, 2, DAT_00573bda, 0, 255, 0);
    asdListBoxSetIntItem(work->panelJob, 3, DAT_00573bdb, 0, 255, 0);
    asdListBoxSetIntItem(work->panelJob, 4, DAT_00573bdc, 0, 120, 0);
    asdListBoxSetFloatItem(work->panelJob, 5, DAT_00573be0, 0, 1);
    asdListBoxSetFloatItem(work->panelJob, 6, DAT_00573c00, 0, 1);
}
}
