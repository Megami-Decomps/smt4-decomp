/* NON_MATCHING: typed rewrite of the command controller target setup (same row count as retail); register allocation of the loop indices/ pointers and the literal-pool offset loads of the action table differ. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers_Smt4.h"
#include "battle/btlAction.h"
#include "gamedata/DataTable40.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W4_Match6_BtlEntry.h"

/* The battle UI's position argument, passed by value. */
struct UiPosition {
    f32 x, y, z;
};

/* The action record's variant byte at 0x3c. */
struct CommandActionView {
    u8 unk00[0x3c];
    s8 variant;
};

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlUiBlock;
u32 FUN_003aeaa4(u32 ui, u16 kind, u32 value, s16 first, s16 second, u16 third, UiPosition position);
void FUN_003ae850(u32 ui, void *arg, s32 count);
SkillLinkRecord *dataTable08Sub1GetRecord(s32 id);
void rt_memclr(void *block, u32 size);
void __aeabi_memset4(void *block, u32 size, s32 value);

/* Skills of category 2, 3 and 4 make the window's choice unavailable to the ordinary targets. */
static __inline bool skillHasSpecialCategory(const Table04Record *skill)
{
    u32 category = skill->itemProperties.category;
    return category == 2 || category == 3 || category == 4;
}

/* Opens the window flags for the open menu, marks the targets the window can pick and orders them by position. */
void FUN_003ca6c4(BtlMainState **block, CommandState *state)
{
    if (((*block)->battleFlags & 0x40) != 0) {
        state->flags |= 0x80;
    } else if (((*block)->battleFlags & 0x100) != 0) {
        state->flags |= 0x1000;
    }

    u32 windowFlags = (*block)->entries[state->windowId].flags;
    CommandSelection *selection = state->selection;
    bool normal = true;
    s32 value = selection->value;
    s32 kind = selection->kind;
    const Table04Record *skill = dataTable40FindById(value);
    const SkillLinkRecord *record = dataTable08Sub1GetRecord(value);
    if (kind == 2) {
        if (skill != NULL && skillHasSpecialCategory(skill))
            normal = false;
    } else if (kind == 8) {
        if (record != NULL && record->linkedSkill != 0) {
            if (dataTable40FindById(record->linkedSkill) == NULL || skillHasSpecialCategory(skill))
                normal = false;
        }
    }

    for (s32 remaining = 109, index = 0; remaining != 0; --remaining, ++index) {
        (*block)->actions[index].status &= ~4;
        (*block)->actions[index].status &= ~8;
    }
    state->targetIndex = -1;
    for (s32 index = 0; index < 109; ++index) {
        s32 combatant = (*block)->actions[index].participant.combatantIndex;
        if (combatant < 0)
            continue;
        u32 entryFlags = (*block)->entries[combatant].flags;
        if ((entryFlags & 1) == 0)
            continue;
        if ((entryFlags & 0x40) != 0)
            continue;
        if (normal) {
            if ((windowFlags & 10) != 0) {
                if ((entryFlags & 0x10) == 0)
                    continue;
            } else if ((windowFlags & 0x10) != 0) {
                if ((entryFlags & 0x10) != 0)
                    continue;
            }
        } else {
            if ((windowFlags & 10) != 0) {
                if ((entryFlags & 10) == 0)
                    continue;
            } else if ((windowFlags & 0x10) != 0) {
                if ((entryFlags & 10) != 0)
                    continue;
            }
        }
        if (state->targetIndex < 0)
            state->targetIndex = combatant;
        (*block)->actions[index].status |= 4;
    }

    __aeabi_memset4(state->windowHandles, sizeof(state->windowHandles), -1);
    __aeabi_memset4(state->windowSelections, sizeof(state->windowSelections), -1);
    s32 windowCount = 0;
    for (s32 index = 0; index < 133; ++index) {
        BtlActionRecord *action = &(*block)->actions[index];
        if ((action->status & 4) == 0 || (action->status & 0x400) == 0)
            continue;
        BtlEntry *entry = btlMainFindEntryByListedId(reinterpret_cast<SlotManager *>(*block), action->memberId);
        if ((entry->flags & 0x10) == 0)
            continue;
        if ((entry->flags & 0x100) != 0 && entry->members.ids[0] != action->memberId)
            continue;
        const CommandActionView *view = reinterpret_cast<const CommandActionView *>(action);
        state->windowHandles[windowCount] = FUN_003aeaa4(g_btlUiBlock, entry->id, view->variant, entry->maxHp, entry->maxMp, entry->groupMask,
                     *reinterpret_cast<const UiPosition *>(action->geometry.position));
        state->windowSelections[windowCount] = entry->selectionIndex;
        ++windowCount;
    }
    FUN_003ae850(g_btlUiBlock, &(*block)->arrangement.unk1E8C, 5);
    memClear(state->targetMarks, sizeof(state->targetMarks));
    rt_memclr(state->targetOrder, sizeof(state->targetOrder));
    g_btlAction.unk00 = 0xffffffff;

    for (s32 index = 0; index < 133; ++index) {
        if (((*block)->actions[index].status & 4) != 0) {
            s32 combatant = (*block)->actions[index].participant.combatantIndex;
            if (combatant >= 0)
                state->targetOrder[combatant] = combatant;
        }
    }

    // Order the targets by their position (insertion by bubbling the smallest up).
    for (s32 pass = 0; pass < 108; ++pass) {
        for (s32 slot = 108; pass < slot; --slot) {
            u8 first = state->targetOrder[slot - 1];
            BtlEntry *firstEntry = &(*block)->entries[first];
            if ((firstEntry->flags & 1) == 0 || (firstEntry->flags & 0x40) != 0 ||
                (firstEntry->flags & 0x10) == 0 || (firstEntry->flags & 0x100) != 0)
                continue;
            u8 second = state->targetOrder[slot];
            BtlEntry *secondEntry = &(*block)->entries[second];
            if ((secondEntry->flags & 1) == 0 || (secondEntry->flags & 0x40) != 0 ||
                (secondEntry->flags & 0x10) == 0 || (secondEntry->flags & 0x100) != 0)
                continue;
            const BtlActionRecord *firstAction = &(*block)->actions[firstEntry->members.ids[0]];
            const BtlActionRecord *secondAction = &(*block)->actions[secondEntry->members.ids[0]];
            if (firstAction->geometry.position[0] > secondAction->geometry.position[0]) {
                state->targetOrder[slot] = first;
                state->targetOrder[slot - 1] = second;
            }
        }
    }

    for (s32 index = 0; index < 109; ++index) {
        if (state->targetOrder[index] != 0) {
            state->targetIndex = state->targetOrder[index];
            return;
        }
    }
}
}
