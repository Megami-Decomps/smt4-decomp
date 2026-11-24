/* NON_MATCHING: only the zero constants differ: retail gives emptySlot its own mov r6, #0 and starts the slot search from it, the build shares the slot-clearing zero. */
#include "camp/Unite/UniteWork.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
s32 scrollOwnerSetValue(void *cursor, s32 value);
s32 gridNavigationGetItemCount(void *cursor);
s32 uiListGetVisibleCount(const void *cursor);
s32 flaggedEntrySetValueA(void *cursor, s32 value);
void skillHelpUpdateAttributeAndTarget(s32 id);

// Take the last freed slot back: clear it, park both cursors on the first empty slot and on the
// skill's candidate entry (scrolled into view), then refresh the skill help for that skill.
void FUN_00359a08(UniteWorkA *work)
{
    work->inheritanceA.freedCount--;
    s32 freed = work->inheritanceA.freedSlots[work->inheritanceA.freedCount];
    u16 skill = work->inheritanceA.slots[freed];
    work->inheritanceA.slots[freed] = 0;
    work->inheritanceA.freedSlots[work->inheritanceA.freedCount] = -1;

    s32 emptySlot = 0;
    for (s32 i = 0; i < 8; i++) {
        if (work->inheritanceA.slots[i] == 0) {
            emptySlot = i;
            break;
        }
    }
    if (emptySlot < gridNavigationGetItemCount(&work->inheritanceA.slotList)) {
        scrollOwnerSetValue(&work->inheritanceA.slotList, 0);
        scrollListSetSelectionTracked(&work->inheritanceA.slotList, emptySlot);
    } else {
        scrollOwnerSetValue(&work->inheritanceA.slotList, 0);
        scrollListSetSelectionTracked(&work->inheritanceA.slotList, 0);
    }

    s32 index = 0;
    for (s32 i = 0; i < 0x60; i++) {
        if (work->inheritanceA.skills[i] == skill) {
            index = i;
            break;
        }
    }
    s32 limit = uiListGetVisibleCount(&work->inheritanceA.skillList) - 2;
    s32 last = gridNavigationGetItemCount(&work->inheritanceA.skillList) - 2;
    s32 scroll = 0;
    if (index > limit) {
        scroll = index - limit;
    }
    s32 offset = index - scroll;
    if (index >= limit && index < last) {
        scroll++;
        offset--;
    }
    scrollOwnerSetValue(&work->inheritanceA.skillList, scroll);
    flaggedEntrySetValueA(&work->inheritanceA.skillList, offset);
    skillHelpUpdateAttributeAndTarget(skill);
}

} /* extern "C" */
