#include "common.h"
#include "camp/CampMenuEntry.h"
#include "camp/UIFade/UIFade.h"

struct CampMenuState {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 list[0x64];
    /* 0xA4 */ s8 group;
    /* 0xA5 */ u8 unkA5[2];
    /* 0xA7 */ s8 selection[1];    /* selected row per group */
};

extern "C" {
CampMenuEntry *FUN_002e26c4(u32 id);
CampMenuEntry *dataTable15GetEntry(u32 index);
u32 FUN_002e26ac(void);
s32 gameDataFlagTestBit(u32 bit);
void FUN_00203b40(void *list, s32 a, s32 b, s32 c, s32 d, s32 e);
void scrollOwnerSelectIndex(void *list, s32 index);

extern CampMenuState *g_camp;

// Pick the first unlocked, visible row of the current group and refresh the menu list.
void FUN_0020d700(void)
{
    CampMenuState *camp = g_camp;
    u8 anyHidden = 0;

    for (s32 id = 0; id < 79; id++) {
        CampMenuEntry *entry = FUN_002e26c4(id & 0xff);
        if (entry != NULL && campMenuEntryHidden(entry)) {
            anyHidden = 1;
        }
    }
    u8 picked = 0;
    s32 visible = 0;
    u32 count = FUN_002e26ac();
    for (u32 i = 0; i < count; i++) {
        CampMenuEntry *entry = dataTable15GetEntry(i);
        if (entry != NULL && entry->group == camp->group &&
            (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
            (entry->requiredDataBit == 0 || gameDataFlagTestBit(entry->requiredDataBit) != 0)) {
            visible++;
            if ((anyHidden & ~picked) && !campMenuEntryHidden(entry)) {
                camp->selection[camp->group] = visible - 1;
                picked = 1;
            }
        }
    }
    FUN_00203b40(camp->list, visible, 1, visible, 1, 1);
    scrollOwnerSelectIndex(camp->list, camp->selection[camp->group]);
}

}
