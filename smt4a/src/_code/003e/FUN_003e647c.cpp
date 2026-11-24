/* NON_MATCHING: state-transition stores and conditional script-start branch layout differ (64 lines; the mode
 * switch goes through npcShopChangeDescriptionMode as in npcShopUpdateItemDescription, 54 lines open-coded). */
#include "shop/ShopItemDescription.h"

extern "C" {
s32 tableGroupFindEntryIndex(u32, const char *);
s32 scrScriptProcessStartEntry(u32, s32);
u32 scrRunOpcodesStub(u32);
extern const char DAT_005332dc[];

// Run the shop description preamble followed by up to three item-specific scripts.
void FUN_003e647c(ShopItemDescription *description)
{
    switch (description->selectionState.state) {
    case 0:
        description->progress.nextEntry = 0;
        description->selectionState.state = 1;
        // Fall through to start the preamble immediately.
    case 1: {
        s32 entry = tableGroupFindEntryIndex(description->tableGroup, DAT_005332dc);
        if (entry >= 0)
            scrScriptProcessStartEntry(description->script, entry);
        description->selectionState.state = 3;
        break;
    }
    case 2:
        for (s32 i = description->progress.nextEntry; i < 3; ++i) {
            if (description->entries[i].scriptEntry != 0) {
                scrScriptProcessStartEntry(description->script, description->entries[i].scriptEntry);
                description->selectionState.state = 3;
                ++description->progress.nextEntry;
                return;
            }
        }
        description->selectionState.state = 99;
        break;
    case 3:
        if (scrRunOpcodesStub(description->script) == 2) {
            if (description->progress.nextEntry >= 3)
                description->selectionState.state = 99;
            else
                description->selectionState.state = 2;
        }
        break;
    case 99:
        npcShopChangeDescriptionMode(description, 3);
        break;
}
}
}
