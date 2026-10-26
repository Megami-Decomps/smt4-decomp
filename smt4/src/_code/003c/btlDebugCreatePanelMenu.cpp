#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {
extern AsdListBoxEntry DAT_00434d48[];
extern const char DAT_0040051c[];
extern u8 DAT_00435e00;
extern u8 DAT_00435e01;
extern u8 DAT_00435e02;
extern u8 DAT_00435e03;
extern u32 DAT_00435e04;
extern f32 DAT_00435e08;
extern f32 DAT_00435e20;
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry* entries, u32 count);
void asdListBoxSetByteValue(u32 listBox, u8 value);
void jobSetText(u32 job, const char* text);
void asdListBoxSetItemMode3(u32 listBox, s32 index, s32 value, s32 minimum, s32 maximum, s32 option);
void asdListBoxSetFloatItem(u32 listBox, s32 index, s32 minimum, s32 maximum, f32 value);

// Build the seven-row battle panel debug menu from the current settings.
void btlDebugCreatePanelMenu(BattleDebugWork* work, const BattleDebugOwnerView* owner)
{
    u32 listBox = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);
    work->listBox = listBox;
    asdListBoxAddItems(listBox, DAT_00434d48, 7);
    asdListBoxSetByteValue(work->listBox, 1);
    jobSetText(work->listBox, DAT_0040051c);
    asdListBoxSetItemMode3(work->listBox, 0, DAT_00435e00, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 1, DAT_00435e01, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 2, DAT_00435e02, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 3, DAT_00435e03, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 4, DAT_00435e04, 0, 120, 0);
    asdListBoxSetFloatItem(work->listBox, 5, 0, 1, DAT_00435e08);
    asdListBoxSetFloatItem(work->listBox, 6, 0, 1, DAT_00435e20);
}
}
