/* NON_MATCHING: zero-value lifetimes and candidate-cursor address scheduling differ; the search receives its cursor argument. */
#include "skill/SkillSlotScreen.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
s32 scrollOwnerSetValue(void *cursor, s32 value);
s32 objectApplyIfUnblocked(void *cursor);
s32 uiSearchPrimary(const void *cursor);
s32 flaggedEntrySetValueA(void *cursor, s32 value);
void skillHelpUpdateAttributeAndTarget(s32 id);

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
        scrollOwnerSetValue(screen->slotCursor, 0);
        FUN_002a4964(reinterpret_cast<ScrollSelection *>(screen->slotCursor), emptySlot);
    } else {
        scrollOwnerSetValue(screen->slotCursor, 0);
        FUN_002a4964(reinterpret_cast<ScrollSelection *>(screen->slotCursor), 0);
    }

    s32 index = 0;
    for (s32 i = 0; i < 0x60; i++) {
        if (screen->candidates[i] == skill) {
            index = i;
            break;
        }
    }
    u8 *cursor = screen->candidateCursor;
    s32 limit = uiSearchPrimary(cursor) - 2;
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
    scrollOwnerSetValue(cursor, scroll);
    flaggedEntrySetValueA(cursor, offset);
    skillHelpUpdateAttributeAndTarget(skill);
}

} /* extern "C" */
