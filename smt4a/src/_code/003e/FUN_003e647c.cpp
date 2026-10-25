/* NON_MATCHING: state-transition stores and conditional script-start branch layout differ. */
#include "shop/ShopItemDescription.h"

extern "C" {
s32 tableGroupFindEntryIndex(u32, const char *);
s32 scrScriptProcessStartEntry(u32, s32);
u32 scrRunOpcodesStub(u32);
extern const char DAT_005332dc[];

// Run the shop description preamble followed by up to three item-specific scripts.
void FUN_003e647c(ShopItemDescription *description)
{
    switch (description->state) {
    case 0:
        description->progress.nextEntry = 0;
        description->state = 1;
        // Fall through to start the preamble immediately.
    case 1: {
        s32 entry = tableGroupFindEntryIndex(description->tableGroup, DAT_005332dc);
        if (entry >= 0)
            scrScriptProcessStartEntry(description->script, entry);
        description->state = 3;
        break;
    }
    case 2:
        for (s32 i = description->progress.nextEntry; i < 3; ++i) {
            if (description->entries[i].scriptEntry != 0) {
                scrScriptProcessStartEntry(description->script, description->entries[i].scriptEntry);
                description->state = 3;
                ++description->progress.nextEntry;
                return;
            }
        }
        description->state = 99;
        break;
    case 3:
        if (scrRunOpcodesStub(description->script) == 2) {
            if (description->progress.nextEntry >= 3)
                description->state = 99;
            else
                description->state = 2;
        }
        break;
    case 99: {
        u32 previous = description->mode;
        description->mode = 3;
        description->state = 0;
        description->previousMode = previous;
        break;
    }
}
}
}
