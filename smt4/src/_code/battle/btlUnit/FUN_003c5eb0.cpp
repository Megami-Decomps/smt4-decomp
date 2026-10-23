/* NON_MATCHING: only first coordinate-row literal and argument load scheduling differ. */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "battle/btlMain.h"

extern "C" {
extern BtlMain* g_btlMain;
extern AsdListBoxEntry DAT_00435be8[];
extern const char DAT_004004f8[];
extern f32 DAT_004342cc;
extern f32 DAT_004342d0;
u32 asdListBoxCreateDefault(u32 parent, u32 priority, u32 flags, u32 option);
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry* entries, u32 count);
void asdListBoxSetByteValue(u32 listBox, u8 value);
void jobSetText(u32 job, const char* text);
void asdListBoxSetItemMode2(u32 listBox, s32 index, u32 enabled);
void asdListBoxSetFloatItem(u32 listBox, s32 index, s32 minimum, s32 maximum, f32 value);

// Build the camera up/down menu from battle flags and camera coordinates.
void FUN_003c5eb0(BattleDebugWork* work, const BattleDebugOwnerView* owner)
{
    u32 listBox = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);
    work->listBox = listBox;
    asdListBoxAddItems(listBox, DAT_00435be8, 8);
    asdListBoxSetByteValue(work->listBox, 1);
    jobSetText(work->listBox, DAT_004004f8);
    asdListBoxSetItemMode2(work->listBox, 0, (g_btlMain->flags & 0x20) >> 5);
    asdListBoxSetItemMode2(work->listBox, 1, (g_btlMain->flags & 0x40) >> 6);
    asdListBoxSetItemMode2(work->listBox, 2, (g_btlMain->flags & 0x80) >> 7);
    asdListBoxSetFloatItem(work->listBox, 3, -10, 10, DAT_004342cc);
    asdListBoxSetFloatItem(work->listBox, 4, 0, 10, DAT_004342d0);
    asdListBoxSetFloatItem(work->listBox, 5, -999, 999, g_btlMain->cameraPosition[0]);
    asdListBoxSetFloatItem(work->listBox, 6, -999, 999, g_btlMain->cameraPosition[1]);
    asdListBoxSetFloatItem(work->listBox, 7, -999, 999, g_btlMain->cameraPosition[2]);
}
}
