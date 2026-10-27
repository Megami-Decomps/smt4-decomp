#include "common.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

struct DebugState {
    u8 unk00[0x10];
    u32 listBox;            // 0x10
};

struct BattleDebugOwner {
    u8 unk00[0x80];
    u32 listBoxHandle;      // 0x80: list box allocated for the menu
    u8 unk84[0x4524];
    u64 pendingMask;        // 0x45a8
};

/* The global block whose u64 at +0x178 masks the pending bits the menu toggles. */
struct BattleDebugMasks {
    u8 unk00[0x178];
    u64 mask;               // 0x178
};

extern "C" {

extern AsdListBoxEntry DAT_00571f60[];
extern BattleDebugMasks DAT_005715f8;
extern f32 DAT_00573974;
extern u32 DAT_0057aa0c;
/* The effect settings are read as separate globals here: this is the first colour channel at 0x57aa00. */
extern u8 g_battleEffectSettings;
extern u8 DAT_0057aa01;
extern u8 DAT_0057aa02;
extern u8 DAT_0057aa03;
extern u32 DAT_0057aa14;
extern f32 DAT_0057aa18;
extern u32 DAT_0057aa1c;
extern s16 DAT_0057a664[12];

s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 arg);
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, u32 count);
void asdListBoxSetByteValue(u32 listBox, u32 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetFloatItem(u32 listBox, s32 index, f32 value, s32 minimum, s32 maximum);
void asdListBoxSetToggleItem(u32 listBox, s32 index, s32 value);
void asdListBoxSetIntItem(u32 listBox, s32 index, s32 value, s32 minimum, s32 maximum, s32 option);

// Builds the battle effect debug list box with its toggles and sliders.
void btlDebugCreateUnitMenu(DebugState* debug, BattleDebugOwner* owner)
{
    if (jobIsValid(debug->listBox) != 0) {
        FUN_003592dc(debug->listBox);
        jobStop(debug->listBox, 0);
    }
    debug->listBox = asdListBoxCreateDefaultFlags(owner->listBoxHandle, 0x75, 0, 0);
    asdListBoxAddItems(debug->listBox, DAT_00571f60, 24);
    asdListBoxSetByteValue(debug->listBox, 1);
    jobSetText(debug->listBox, "btl Unit Menu");
    asdListBoxSetFloatItem(debug->listBox, 0, DAT_00573974, -255, 255);
    asdListBoxSetToggleItem(debug->listBox, 1, (owner->pendingMask & DAT_005715f8.mask) != 0);
    asdListBoxSetIntItem(debug->listBox, 2, DAT_0057aa0c, -1, 2, 0);

    u32 color = DAT_0057aa1c;
    u32 red = color >> 0x18;
    u32 green = (color & 0xff0000) >> 0x10;
    u32 blue = (color & 0xff00) >> 8;
    asdListBoxSetIntItem(debug->listBox, 3, red, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 4, green, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 5, blue, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 6, g_battleEffectSettings, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 7, DAT_0057aa01, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 8, DAT_0057aa02, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 9, DAT_0057aa03, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 10, DAT_0057aa14, 0, 0x78, 0);
    asdListBoxSetFloatItem(debug->listBox, 11, DAT_0057aa18, 0, 1);
    asdListBoxSetIntItem(debug->listBox, 12, DAT_0057a664[0], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 13, DAT_0057a664[2], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 14, DAT_0057a664[1], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 15, DAT_0057a664[3], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 16, DAT_0057a664[4], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 17, DAT_0057a664[6], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 18, DAT_0057a664[5], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 19, DAT_0057a664[7], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 20, DAT_0057a664[8], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 21, DAT_0057a664[10], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 22, DAT_0057a664[9], -0x5dc, 0x5dc, 0);
    asdListBoxSetIntItem(debug->listBox, 23, DAT_0057a664[11], -0x5dc, 0x5dc, 0);
}

} /* extern "C" */
