/* NON_MATCHING: backward-scroll guards are predicated instead of separately branched; total/previousTotal stores merge, and icon-loop registers pair with strd instead of retail's stm sequence. */
#include "ui/SdCardMenu.h"
#include "shard/flaggedEntryGetValueA.h"

extern "C" {
s32 FUN_002bedac(u32 id);
s32 FUN_00228b04(MenuList *list, s32 mode);
s32 resourceRunOperationIfUnblocked(MenuList *list);
s32 objectApplyIfUnblocked(MenuList *list);
void scrollOwnerSetValue(MenuList *list, s32 position);
void flaggedEntrySetValueA(MenuList *list, s32 value);
void FUN_002f0384(s32 value);

/* Updates the menu list's scroll position and refreshes the entry icons. */
void FUN_0041e7c0(SdCardMenu *menu)
{
    if (FUN_002bedac(5) != 0 || FUN_002bedac(6) != 0 || FUN_002bedac(4) != 0 || FUN_002bedac(3) != 0 ||
        FUN_002bedac(0xC) != 0 || FUN_002bedac(0xD) != 0 || FUN_002bedac(0xE) != 0 || FUN_002bedac(0xF) != 0)
        menu->valid = 0;
    if (FUN_00228b04(&menu->list, 1) != 0) {
        s32 position = resourceRunOperationIfUnblocked(&menu->list);
        s32 value = flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(&menu->list));
        s32 span = objectApplyIfUnblocked(&menu->list);
        s32 offset = menu->offset;
        s32 total = position + value + offset;
        menu->total = total;
        if (value <= 0) {
            if (offset + 1 <= total && menu->previousTotal < total) {
                scrollOwnerSetValue(&menu->list, position - 1);
                flaggedEntrySetValueA(&menu->list, 1);
            }
        } else if (value >= 1) {
            const u32 lastVisibleIndex = span - 1;
            if (offset + lastVisibleIndex > total && menu->previousTotal > total) {
                scrollOwnerSetValue(&menu->list, position + 1);
                flaggedEntrySetValueA(&menu->list, 0);
            }
        }
        menu->listPosition = resourceRunOperationIfUnblocked(&menu->list);
        s32 listValue = flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(&menu->list));
        menu->listValue = listValue;
        menu->previousTotal = menu->total;
        menu->total = listValue + menu->listPosition + menu->offset;
        menu->valid = 1;
        FUN_002f0384(0);
        menu->busy = 0;
        for (s32 i = 0; i < menu->entryCount; i++) {
            bool scrolled = sdCardMenuEntryScrolled(menu, i);
            MenuEntry *entry = &menu->entries[i];
            if (scrolled) {
                entry->iconOn = 0x86;
                entry->iconOff = 0x98;
            } else {
                entry->iconOn = 0x85;
                entry->iconOff = 0x97;
            }
        }
    }
}
}
