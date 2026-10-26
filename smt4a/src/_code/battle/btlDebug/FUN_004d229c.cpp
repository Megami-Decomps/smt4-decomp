/* NON_MATCHING: readable rewrite compiles (217 vs 139 rows); retail issues the twelve position sliders as separate unrolled calls, this version loops over an index table */
#include "common.h"

// Battle effect tuning values shown by the debug list.
struct BattleEffectSettings {
    u8 channel[4];          // 0x00
    u8 unk04[8];
    u32 mode;               // 0x0c
    u8 unk10[4];
    u32 duration;           // 0x14
    u8 unk18[4];
    u32 color;              // 0x1c: packed RGBA
};

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

extern "C" {

extern BattleEffectSettings g_battleEffectSettings;
extern s16 DAT_0057a664[12];
extern u64 DAT_00571770;

s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 arg);
void asdListBoxCreateDefaultFlags(u32 box, s32 width, s32 arg);
void asdListBoxAddItems(void);
void asdListBoxSetByteValue(u32 box, s32 value);
void jobSetText(u32 box, const char* text);
void asdListBoxSetFloatItem(u32 box, s32 index, u32 value, s32 arg);
void asdListBoxSetToggleItem(u32 box, s32 index, s32 value);
void asdListBoxSetIntItem(u32 box, s32 index, s32 value, s32 min, s32 max, s32 step);


// Builds the battle effect debug list box with its toggles and sliders.
void FUN_004d229c(DebugState* debug, BattleDebugOwner* owner)
{
    if (jobIsValid(debug->listBox) != 0) {
        FUN_003592dc(debug->listBox);
        jobStop(debug->listBox, 0);
    }
    u32 box = owner->listBoxHandle;
    asdListBoxCreateDefaultFlags(box, 0x75, 0);
    debug->listBox = box;
    asdListBoxAddItems();
    asdListBoxSetByteValue(debug->listBox, 1);
    jobSetText(debug->listBox, "btl Unit Menu");
    asdListBoxSetFloatItem(debug->listBox, 0, 0xffffff01, 0xff);
    asdListBoxSetToggleItem(debug->listBox, 1, (owner->pendingMask & DAT_00571770) != 0);
    asdListBoxSetIntItem(debug->listBox, 2, g_battleEffectSettings.mode, -1, 2, 0);

    u32 color = g_battleEffectSettings.color;
    asdListBoxSetIntItem(debug->listBox, 3, color >> 0x18, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 4, (color & 0xff0000) >> 0x10, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 5, (color & 0xff00) >> 8, 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 6, g_battleEffectSettings.channel[0], 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 7, g_battleEffectSettings.channel[1], 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 8, g_battleEffectSettings.channel[2], 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 9, g_battleEffectSettings.channel[3], 0, 0xff, 0);
    asdListBoxSetIntItem(debug->listBox, 10, g_battleEffectSettings.duration, 0, 0x78, 0);
    asdListBoxSetFloatItem(debug->listBox, 0xb, 0, 1);

    static const u8 slot[12] = { 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11 };
    for (s32 i = 0; i < 12; i++) {
        asdListBoxSetIntItem(debug->listBox, 0xc + i, DAT_0057a664[slot[i]], -0x5dc, 0x5dc, 0);
    }
}

} /* extern "C" */
