/* NON_MATCHING: the color-channel splits and the short-table loads are scheduled differently from retail; the rows set are the same. */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {
extern AsdListBoxEntry DAT_00434a88[];
extern u32 DAT_00439ce8;
extern u32 DAT_00439cf8;
extern u8 DAT_00439ce0;
extern u8 DAT_00439ce1;
extern u8 DAT_00439ce2;
extern u8 DAT_00439ce3;
extern u32 DAT_00439cf0;
extern f32 DAT_00439cf4;
extern s16 DAT_00439a50[12];

void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, u32 count);
void asdListBoxSetByteValue(u32 listBox, u8 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetItemMode3(u32 listBox, s32 index, s32 value, s32 minimum, s32 maximum, s32 option);
void asdListBoxSetFloatItem(u32 listBox, s32 index, s32 minimum, s32 maximum, f32 value);

/* Builds the 22-row battle unit debug menu from the current settings: a mode, the four color
 * channels, four flags, a count, a scale and twelve signed offsets. */
void FUN_003c3da4(BattleDebugWork *work, const BattleDebugOwnerView *owner)
{
    u32 listBox = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);

    work->listBox = listBox;
    asdListBoxAddItems(listBox, DAT_00434a88, 22);
    asdListBoxSetByteValue(work->listBox, 1);
    jobSetText(work->listBox, "btl Unit Menu");
    asdListBoxSetItemMode3(work->listBox, 0, DAT_00439ce8, -1, 2, 0);
    u32 color = DAT_00439cf8;
    asdListBoxSetItemMode3(work->listBox, 1, color >> 24, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 2, (color & 0xFF0000) >> 16, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 3, (color & 0xFF00) >> 8, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 4, DAT_00439ce0, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 5, DAT_00439ce1, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 6, DAT_00439ce2, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 7, DAT_00439ce3, 0, 255, 0);
    asdListBoxSetItemMode3(work->listBox, 8, DAT_00439cf0, 0, 120, 0);
    asdListBoxSetFloatItem(work->listBox, 9, 0, 1, DAT_00439cf4);
    asdListBoxSetItemMode3(work->listBox, 10, DAT_00439a50[0], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 11, DAT_00439a50[2], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 12, DAT_00439a50[1], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 13, DAT_00439a50[3], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 14, DAT_00439a50[4], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 15, DAT_00439a50[6], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 16, DAT_00439a50[5], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 17, DAT_00439a50[7], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 18, DAT_00439a50[8], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 19, DAT_00439a50[10], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 20, DAT_00439a50[9], -1500, 1500, 0);
    asdListBoxSetItemMode3(work->listBox, 21, DAT_00439a50[11], -1500, 1500, 0);
}

}
