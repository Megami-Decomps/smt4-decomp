#include "common.h"
#include "util/AsdListBoxCreateDefault.h"

#define TALK_CTRL_ITEM_COUNT 26

/* The talk-control work: its menu owner and the 26 debug settings (observed fields). */
struct TalkCtrlWork {
    /* 0x0000 */ u8 unk0000[0x5C];
    /* 0x005C */ u32 listParent;
    /* 0x0060 */ u8 unk0060[0x2248];
    /* 0x22A8 */ u32 setting[TALK_CTRL_ITEM_COUNT];
};

/* The debug menu object (observed field). */
struct TalkCtrlMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 list;
};

extern "C" {

extern const char *DAT_00435448[];

void asdListBoxAddItems(u32 list, const char **names, s32 count);
void asdListBoxSetByteValue(u32 list, s32 value);
void jobSetText(u32 list, const char *text);
void asdListBoxSetItemMode2(u32 list, s32 item, s32 flag);
void asdListBoxSetItemMode3(u32 list, s32 item, u32 value, s32 minimum, s32 maximum, s32 step);

/* Builds the talk-control debug list: toggles for flag settings, number fields (value, 0..max) for
 * the others. */
void talkCtrlDebugMenuBuild(TalkCtrlMenu *menu, TalkCtrlWork *work)
{
    menu->list = asdListBoxCreateDefault(work->listParent, 0x73, 0, 0);
    asdListBoxAddItems(menu->list, DAT_00435448, TALK_CTRL_ITEM_COUNT);
    asdListBoxSetByteValue(menu->list, 1);
    jobSetText(menu->list, "TalkCtrl Menu");
    asdListBoxSetItemMode2(menu->list, 0, work->setting[0] != 0);
    asdListBoxSetItemMode2(menu->list, 1, work->setting[1] != 0);
    asdListBoxSetItemMode2(menu->list, 2, work->setting[2] != 0);
    asdListBoxSetItemMode3(menu->list, 3, work->setting[3], 0, 9, 0);
    asdListBoxSetItemMode3(menu->list, 4, work->setting[4], 0, 2, 0);
    asdListBoxSetItemMode2(menu->list, 5, work->setting[5] != 0);
    asdListBoxSetItemMode2(menu->list, 6, work->setting[6] != 0);
    asdListBoxSetItemMode2(menu->list, 7, work->setting[7] != 0);
    asdListBoxSetItemMode2(menu->list, 8, work->setting[8] != 0);
    asdListBoxSetItemMode3(menu->list, 9, work->setting[9], 0, 999, 0);
    asdListBoxSetItemMode3(menu->list, 10, work->setting[10], 0, 4, 0);
    asdListBoxSetItemMode3(menu->list, 11, work->setting[11], 0, 0x1F, 0);
    asdListBoxSetItemMode3(menu->list, 12, work->setting[12], 0, 2, 0);
    asdListBoxSetItemMode3(menu->list, 13, work->setting[13], 0, 7, 0);
    asdListBoxSetItemMode2(menu->list, 14, work->setting[14] != 0);
    asdListBoxSetItemMode3(menu->list, 15, work->setting[15], 0, 2, 0);
    asdListBoxSetItemMode3(menu->list, 16, work->setting[16], 0, 2, 0);
    asdListBoxSetItemMode2(menu->list, 17, work->setting[17] != 0);
    asdListBoxSetItemMode3(menu->list, 18, work->setting[18], 0, 3, 0);
    asdListBoxSetItemMode3(menu->list, 19, work->setting[19], 0, 2, 0);
    asdListBoxSetItemMode2(menu->list, 20, work->setting[20] != 0);
    asdListBoxSetItemMode2(menu->list, 21, work->setting[21] != 0);
    asdListBoxSetItemMode2(menu->list, 22, work->setting[22] != 0);
    asdListBoxSetItemMode2(menu->list, 23, work->setting[23] != 0);
    asdListBoxSetItemMode2(menu->list, 24, work->setting[24] != 0);
    asdListBoxSetItemMode3(menu->list, 25, work->setting[25], 0, 9, 0);
}

} /* extern "C" */
