/* NON_MATCHING: register allocation only: retail keeps two separate zeros (r2 for the slot clear, r6 for the search starts), builds the candidate cursor pointer in r0 before uiSearchPrimary, so the closing tail call to FUN_00359b6c (the nop at +0x160) is not at the retail offset. */
#include "skill/SkillSlotScreen.h"

extern "C" {
s32 FUN_002a48e0(void *cursor, s32 value);
s32 FUN_002a4964(void *cursor, s32 value);
s32 objectApplyIfUnblocked(void *cursor);
s32 uiSearchPrimary(void);
s32 flaggedEntrySetValueA(void *cursor, s32 value);
void FUN_00359b6c(s32 id);

// Take the last freed slot back: clear it, park both cursors on the first empty slot and on the
// skill's candidate entry (scrolled into view), then refresh the skill help for that skill.
void FUN_00359a08(SkillSlotScreen *screen)
{
    s32 emptySlot = 0;
    screen->freedCount--;
    u16 skill = screen->slots[screen->freedSlots[screen->freedCount]];
    screen->slots[screen->freedSlots[screen->freedCount]] = 0;
    screen->freedSlots[screen->freedCount] = -1;

    for (s32 i = 0; i < 8; i++) {
        if (screen->slots[i] == 0) {
            emptySlot = i;
            break;
        }
    }
    if (emptySlot < objectApplyIfUnblocked(screen->slotCursor)) {
        FUN_002a48e0(screen->slotCursor, 0);
        FUN_002a4964(screen->slotCursor, emptySlot);
    } else {
        FUN_002a48e0(screen->slotCursor, 0);
        FUN_002a4964(screen->slotCursor, 0);
    }

    s32 index = 0;
    for (s32 i = 0; i < 0x60; i++) {
        if (screen->candidates[i] == skill) {
            index = i;
            break;
        }
    }
    u8 *cursor = screen->candidateCursor;
    s32 limit = uiSearchPrimary() - 2;
    s32 last = objectApplyIfUnblocked(cursor) - 2;
    s32 scroll = 0;
    if (index > limit) {
        scroll = index - limit;
    }
    s32 offset = index - scroll;
    if (index >= limit && index < last) {
        scroll++;
        offset--;
    }
    FUN_002a48e0(cursor, scroll);
    flaggedEntrySetValueA(cursor, offset);
    FUN_00359b6c(skill);
}

} /* extern "C" */
