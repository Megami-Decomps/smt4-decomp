#include "camp/Unite/UniteWork.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
s32 scrollOwnerSetValue(void *cursor, s32 value);
s32 gridNavigationGetItemCount(void *cursor);
s32 uiListGetVisibleCount(const void *cursor);
s32 flaggedEntrySetValueA(void *cursor, s32 value);
void skillHelpUpdateAttributeAndTarget(s32 id);

/* Undo the last inheritance-slot assignment, refocus the slot and candidate lists, and refresh skill help. */
void uniteInheritanceUndoLastAssignedSkill(UniteWorkA *work)
{
    work->inheritanceA.freedCount--;
    s32 freed = work->inheritanceA.freedSlots[work->inheritanceA.freedCount];
    u16 skill = work->inheritanceA.slots[freed];
    work->inheritanceA.slots[freed] = 0;
    work->inheritanceA.freedSlots[work->inheritanceA.freedCount] = -1;

    enum {
        SLOT_COUNT = sizeof(work->inheritanceA.slots) / sizeof(work->inheritanceA.slots[0]),
        SKILL_COUNT = sizeof(work->inheritanceA.skills) / sizeof(work->inheritanceA.skills[0])
    };
    s32 emptySlot;
    for (s32 i = emptySlot = 0; i < SLOT_COUNT; i++) {
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

    s32 index;
    for (s32 i = index = 0; i < SKILL_COUNT; i++) {
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
