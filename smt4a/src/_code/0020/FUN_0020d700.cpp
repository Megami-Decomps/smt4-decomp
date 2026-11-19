#include "camp/CampStateA.h"
#include "camp/CampMenuEntry.h"
#include "camp/UIFade/UIFade.h"


extern "C" {
u32 dataTable15Sub0GetCount(void);
s32 gameDataFlagTestBit(u32 bit);
void gridNavigationConfigure(void *list, s32 a, s32 b, s32 c, s32 d, s32 e);
void scrollOwnerSelectIndex(void *list, s32 index);


// Pick the first unlocked, visible row of the current group and refresh the menu list.
void FUN_0020d700(void)
{
    CampStateA *camp = g_camp;
    u8 anyHidden = 0;

    for (s32 id = 0; id < 79; id++) {
        CampComRecord *entry = FUN_002e26c4(id & 0xff);
        if (entry != NULL && campMenuEntryHidden(entry)) {
            anyHidden = 1;
        }
    }
    u8 picked = 0;
    s32 visible = 0;
    u32 count = dataTable15Sub0GetCount();
    for (u32 i = 0; i < count; i++) {
        CampComRecord *entry = dataTable15GetEntry(i);
        if (entry != NULL && entry->group == camp->menuGroup &&
            (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
            (entry->requiredDataBit == 0 || gameDataFlagTestBit(entry->requiredDataBit) != 0)) {
            visible++;
            if ((anyHidden & ~picked) && !campMenuEntryHidden(entry)) {
                camp->menuSelection[camp->menuGroup] = visible - 1;
                picked = 1;
            }
        }
    }
    gridNavigationConfigure(&camp->menuGrid, visible, 1, visible, 1, 1);
    scrollOwnerSelectIndex(&camp->menuGrid, camp->menuSelection[camp->menuGroup]);
}

}
