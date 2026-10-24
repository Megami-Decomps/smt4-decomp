#include "AsdSDK/Source/Util/AsdListBox.h"

/* The battle manager's debug settings (observed fields): a position, then the integer settings. */
struct BattleStageSettings {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 value[5];
    /* 0x54 */ u32 limit;
    /* 0x58 */ f32 scale;
    /* 0x5C */ u32 extra[6];
    /* 0x74 */ u8 unk74[0x1C];
    /* 0x90 */ f32 position[3];
};

struct BattleStageMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 list;
};

struct BattleStageMenuOwner {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 job;
};

extern "C" {
extern BattleStageSettings *DAT_004398d4;
extern AsdListBoxEntry DAT_004351a8[];
u32 asdListBoxCreateDefault(u32 parent, u32 priority, u32 flags, u32 option);
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, u32 count);
void asdListBoxSetByteValue(u32 listBox, u8 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetItemMode3(u32 listBox, s32 index, s32 value, s32 minimum, s32 maximum, s32 option);
void asdListBoxSetFloatItem(u32 listBox, s32 index, s32 minimum, s32 maximum, f32 value);

/* Builds the stage debug menu: a position (three floats) followed by the integer settings. */
void btlDebugCreateStageMenu(BattleStageMenu *menu, BattleStageMenuOwner *owner)
{
    menu->list = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);
    asdListBoxAddItems(menu->list, DAT_004351a8, 16);
    asdListBoxSetByteValue(menu->list, 1);
    jobSetText(menu->list, "btl Stage Menu");
    const f32 *position = DAT_004398d4->position;
    asdListBoxSetFloatItem(menu->list, 0, -999, 999, position[0]);
    asdListBoxSetFloatItem(menu->list, 1, -999, 999, position[1]);
    asdListBoxSetFloatItem(menu->list, 2, -999, 999, position[2]);
    asdListBoxSetItemMode3(menu->list, 3, DAT_004398d4->value[0], 0, 2, 0);
    asdListBoxSetItemMode3(menu->list, 4, DAT_004398d4->value[1], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 5, DAT_004398d4->value[2], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 6, DAT_004398d4->value[3], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 7, DAT_004398d4->value[4], 0, 10000, 0);
    asdListBoxSetItemMode3(menu->list, 8, DAT_004398d4->limit, 0, 10000, 0);
    asdListBoxSetFloatItem(menu->list, 9, 0, 10, DAT_004398d4->scale);
    asdListBoxSetItemMode3(menu->list, 10, DAT_004398d4->extra[0], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 11, DAT_004398d4->extra[1], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 12, DAT_004398d4->extra[2], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 13, DAT_004398d4->extra[3], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 14, DAT_004398d4->extra[4], 0, 255, 0);
    asdListBoxSetItemMode3(menu->list, 15, DAT_004398d4->extra[5], 0, 255, 0);
}
}
