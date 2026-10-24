#include "common.h"

extern "C" {

/* The debug settings block (only the fields used here). */
typedef struct DebugSettings {
    /* 0x0000 */ u8 unk0000[0x80];
    /* 0x0080 */ u32 listBoxHandle;
    /* 0x0084 */ u8 unk0084[0x231F];
    /* 0x23A3 */ u8 unk23a3;
    /* 0x23A4 */ s32 talk[27];          /* one value per list item */
} DebugSettings;

/* The debug menu job (only the list handle). */
typedef struct DebugMenuJob {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 list;
} DebugMenuJob;

typedef struct DebugItemEntry {
    u32 unk[4];
} DebugItemEntry;

extern DebugItemEntry DAT_00572b20[];

s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 arg);
u32 asdListBoxCreateDefaultFlags(u32 owner, u32 kind, u32 flags, u32 extra);
void asdListBoxAddItems(u32 list, const DebugItemEntry *items, u32 count);
void asdListBoxSetByteValue(u32 list, s32 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetToggleItem(u32 list, u32 item, s32 value);
void asdListBoxSetIntItem(u32 list, u32 item, s32 value, s32 minimum, s32 maximum, s32 step);

/* Builds the talk-control debug menu: closes the previous list box job, creates a new list box
 * and fills its 27 toggle / number items from the settings. */
void talkCtrlDebugMenuBuild(DebugMenuJob *menu, DebugSettings *settings)
{
    if (jobIsValid(menu->list) != 0) {
        FUN_003592dc(menu->list);
        jobStop(menu->list, 0);
    }
    menu->list = asdListBoxCreateDefaultFlags(settings->listBoxHandle, 0x75, 0, 0);
    asdListBoxAddItems(menu->list, DAT_00572b20, 27);
    asdListBoxSetByteValue(menu->list, 1);
    jobSetText(menu->list, "TalkCtrl Menu");
    asdListBoxSetToggleItem(menu->list, 0, settings->talk[0] != 0);
    asdListBoxSetToggleItem(menu->list, 1, settings->talk[1] != 0);
    asdListBoxSetToggleItem(menu->list, 2, settings->talk[2] != 0);
    asdListBoxSetIntItem(menu->list, 3, settings->talk[3], 0, 9, 0);
    asdListBoxSetIntItem(menu->list, 4, settings->talk[4], 0, 2, 0);
    asdListBoxSetToggleItem(menu->list, 5, settings->talk[5] != 0);
    asdListBoxSetToggleItem(menu->list, 6, settings->talk[6] != 0);
    asdListBoxSetToggleItem(menu->list, 7, settings->talk[7] != 0);
    asdListBoxSetIntItem(menu->list, 8, settings->talk[8], 0, 999, 0);
    asdListBoxSetIntItem(menu->list, 9, settings->talk[9], 0, 4, 0);
    asdListBoxSetIntItem(menu->list, 10, settings->talk[10], 0, 0x3F, 0);
    asdListBoxSetIntItem(menu->list, 11, settings->talk[11], 0, 2, 0);
    asdListBoxSetIntItem(menu->list, 12, settings->talk[12], 0, 8, 0);
    asdListBoxSetToggleItem(menu->list, 13, settings->talk[13] != 0);
    asdListBoxSetToggleItem(menu->list, 14, settings->talk[14] != 0);
    asdListBoxSetIntItem(menu->list, 15, settings->talk[15], 0, 2, 0);
    asdListBoxSetIntItem(menu->list, 16, settings->talk[16], 0, 2, 0);
    asdListBoxSetToggleItem(menu->list, 17, settings->talk[17] != 0);
    asdListBoxSetIntItem(menu->list, 18, settings->talk[18], 0, 3, 0);
    asdListBoxSetIntItem(menu->list, 19, settings->talk[19], 0, 2, 0);
    asdListBoxSetToggleItem(menu->list, 20, settings->talk[20] != 0);
    asdListBoxSetToggleItem(menu->list, 21, settings->talk[21] != 0);
    asdListBoxSetToggleItem(menu->list, 22, settings->talk[22] != 0);
    asdListBoxSetToggleItem(menu->list, 23, settings->talk[23] != 0);
    asdListBoxSetToggleItem(menu->list, 24, settings->talk[24] != 0);
    asdListBoxSetIntItem(menu->list, 25, settings->talk[25], 0, 9, 0);
    asdListBoxSetIntItem(menu->list, 26, settings->talk[26], 0, 2, 0);
}

}
