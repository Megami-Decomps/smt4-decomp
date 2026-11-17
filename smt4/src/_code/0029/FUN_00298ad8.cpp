#include "common.h"
#include "camp/CampMenuEntry.h"
#include "camp/CampState.h"

extern "C" {
CampMenuEntry *FUN_00292844(u32 id);
CampMenuEntry *dataTable15Sub0GetEntries(u32 index);
u32 dataTable15Sub0GetCount(void);
u8 flagBitIsSet(u32 bit);
void gridNavigationConfigure(void *list, s32 a, s32 b, s32 c, s32 d, s32 e);
void scrollOwnerSelectIndex(void *list, s32 index);

// Pick the first unlocked, visible row of the current group and refresh the menu list.
void FUN_00298ad8(void)
{
    CampState *camp = g_camp;
    u8 anyHidden = 0;

    for (s32 id = 0; id < 53; id++) {
        CampMenuEntry *entry = FUN_00292844(id & 0xff);
        if (entry != NULL && campMenuEntryHidden(entry)) {
            anyHidden = 1;
        }
    }
    u8 picked = 0;
    s32 visible = 0;
    u32 count = dataTable15Sub0GetCount();
    for (u32 i = 0; i < count; i++) {
        CampMenuEntry *entry = dataTable15Sub0GetEntries(i);
        if (entry != NULL && entry->group == camp->menuGroup &&
            (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
            (entry->requiredDataBit == 0 || flagBitIsSet(entry->requiredDataBit) != 0)) {
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
