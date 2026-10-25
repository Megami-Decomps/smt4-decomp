#include "battle/BtlMainAccess.h"
#include "shard/btlResolveEntryChoice.h"

extern "C" {

#define BTL_NO_SELECTED_ENTRY 0xff

/* Resolves a menu choice: 1-4 pick directly; 0 and -1 mark the active entry present or absent
 * and return the selected entry (1 when there is none); anything else returns 1. */
s32 btlResolveEntryChoice(s32 choice)
{
    if (choice >= 1 && choice <= 4) {
        btlGetMainState()->unk4cd1 = 0;
        return choice;
    }
    if (choice == -1) {
        btlGetMainState()->unk4cd1 = 0;
        if (btlGetMainState()->selectedEntry.index == BTL_NO_SELECTED_ENTRY) {
            return 1;
        }
    } else if (choice == 0) {
        btlGetMainState()->unk4cd1 = 1;
        if (btlGetMainState()->selectedEntry.index == BTL_NO_SELECTED_ENTRY) {
            return 1;
        }
    } else {
        return 1;
    }
    return btlGetMainState()->selectedEntry.index;
}

} /* extern "C" */
