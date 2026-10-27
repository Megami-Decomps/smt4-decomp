/* NON_MATCHING: typed rewrite of the command controller target setup, the smt4a variant of FUN_003ca6c4 with 64-bit entry masks (461 vs 462 rows); register allocation of the mask halves and loop pointers differs. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

/* A skill record, as far as the category bits go. */
struct SkillCategoryView {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unknownBits : 5;
    /* 0x28 */ u32 category : 4;
    /* 0x28 */ u32 moreBits : 23;
};

/* The linked-skill record of a data table 8 entry. */
struct SkillLinkRecordA {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 linkedSkill;
};

/* The command's chosen skill: the kind of thing it is and its id. */
struct CommandSelectionA {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ s16 kind;
    /* 0x1C0 */ s16 value;
};

/* The command state the window menus keep: the ordering of the selectable targets and the windows opened for them. */
struct CommandStateA {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x24];
    /* 0x028 */ CommandSelectionA *selection;
    /* 0x02C */ u16 windowId;
    /* 0x02E */ u8 unk02e[0x0A];
    /* 0x038 */ u8 targetMarks[0x85];
    /* 0x0BD */ u8 targetOrder[0x85];
    /* 0x142 */ u8 unk142[2];
    /* 0x144 */ u32 windowHandles[133];
    /* 0x358 */ s32 windowSelections[133];
    /* 0x56C */ u8 unk56c[0x40];
    /* 0x5AC */ s32 targetIndex;
};
typedef char CommandStateALayoutCheck[
    offsetof(CommandStateA, selection) == 0x28 && offsetof(CommandStateA, targetMarks) == 0x38 &&
    offsetof(CommandStateA, targetOrder) == 0xBD && offsetof(CommandStateA, windowHandles) == 0x144 &&
    offsetof(CommandStateA, windowSelections) == 0x358 && offsetof(CommandStateA, targetIndex) == 0x5AC ? 1 : -1];

/* A position argument of the battle UI. */
struct UiPositionA {
    f32 x, y, z;
};

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlUiBlock;

SkillCategoryView *dataTable04FindById(u32 id);
SkillLinkRecordA *dataTable8FindRecord(u32 id);
void __aeabi_memset4(void *block, u32 size, s32 value);
void *rt_memclr(void *block, u32 size);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 id);
void FUN_004aa798(u32 ui, void *arg, s32 count);
u32 FUN_004aaebc(u32 ui, u32 kind, u32 parameter, u16 option, u16 variant, u16 flags, const void *label,
                 f32 x, f32 y, f32 z);

/* A mask of the module global that is not named in its declaration, by its byte offset. */
static __inline u64 actionMask(u32 offset)
{
    return *reinterpret_cast<const u64 *>(reinterpret_cast<const u8 *>(&g_btlAction) + offset);
}

#define MASK_SIDE_A 0x18   /* window flag: first side bit (10) */
#define MASK_SIDE_B 0x28   /* window flag: second side bit (10) */
#define MASK_LEADER 0x50   /* group leader */
#define MASK_MODE_A 0xE0   /* battle flag: first mode */
#define MASK_MODE_B 0xF0   /* battle flag: second mode */

/* Skills of category 2, 3 and 4 make the window's choice unavailable to the ordinary targets. */
static __inline bool skillHasSpecialCategory(const SkillCategoryView *skill)
{
    u32 category = skill->category;
    return category == 2 || category == 3 || category == 4;
}

/* Opens the window flags for the open menu, marks the targets the window can pick and orders them by position. */
void FUN_004dd0c4(BtlMainStateA **block, CommandStateA *state)
{
    if ((actionMask(MASK_MODE_A) & (*block)->stateFlags64.bits) != 0) {
        state->flags |= 0x80;
    } else if (((*block)->stateFlags64.bits & actionMask(MASK_MODE_B)) != 0) {
        state->flags |= 0x1000;
    }

    u32 windowFlags = (u32)(*block)->entries[state->windowId].flags;
    CommandSelectionA *selection = state->selection;
    bool normal = true;
    s32 value = selection->value;
    s32 kind = selection->kind;
    const SkillCategoryView *skill = dataTable04FindById(value);
    const SkillLinkRecordA *record = dataTable8FindRecord(value);
    if (kind == 2) {
        if (skill != NULL && skillHasSpecialCategory(skill))
            normal = false;
    } else if (kind == 8) {
        if (record != NULL && record->linkedSkill != 0) {
            if (dataTable04FindById(record->linkedSkill) == NULL || skillHasSpecialCategory(skill))
                normal = false;
        }
    }

    for (s32 remaining = 109, index = 0; remaining != 0; --remaining, ++index) {
        (*block)->roster[index].liveFlags.unk50 &= ~4;
        (*block)->roster[index].liveFlags.unk50 &= ~8;
    }
    state->targetIndex = -1;
    {
        u64 aliveMask = g_btlAction.targetableMask;
        u64 sideAMask = actionMask(MASK_SIDE_A);
        u64 sideBMask = actionMask(MASK_SIDE_B);
        u64 enemyMask = g_btlAction.interaction.requiredMask;
        u64 hiddenMask = g_btlAction.interaction.excludedMask;
        for (s32 index = 0; index < 109; ++index) {
            s32 combatant = (*block)->roster[index].combatant.combatantIndex;
            if (combatant < 0)
                continue;
            u64 entryFlags = (*block)->entries[combatant].flags;
            if ((entryFlags & aliveMask) == 0)
                continue;
            if ((entryFlags & hiddenMask) != 0)
                continue;
            if (normal) {
                if ((windowFlags & (u32)sideAMask) != 0 || (windowFlags & (u32)sideBMask) != 0) {
                    if ((entryFlags & enemyMask) == 0)
                        continue;
                } else if ((windowFlags & (u32)enemyMask) != 0) {
                    if ((entryFlags & enemyMask) != 0)
                        continue;
                }
            } else {
                if ((windowFlags & (u32)sideAMask) != 0 || (windowFlags & (u32)sideBMask) != 0) {
                    if ((entryFlags & sideAMask) == 0 && (entryFlags & sideBMask) == 0)
                        continue;
                } else if ((windowFlags & (u32)enemyMask) != 0) {
                    if ((entryFlags & sideAMask) != 0 || (entryFlags & sideBMask) != 0)
                        continue;
                }
            }
            if (state->targetIndex < 0)
                state->targetIndex = combatant;
            (*block)->roster[index].liveFlags.unk50 |= 4;
        }
    }

    __aeabi_memset4(state->windowHandles, sizeof(state->windowHandles), -1);
    __aeabi_memset4(state->windowSelections, sizeof(state->windowSelections), -1);
    s32 windowCount = 0;
    for (s32 index = 0; index < 133; ++index) {
        BattleRosterRecordA *action = &(*block)->roster[index];
        if ((action->liveFlags.unk50 & 4) == 0 || (action->liveFlags.unk50 & 0x400) == 0)
            continue;
        BtlCombatantEntryA *entry = FUN_003f0e20(*block, action->combatant.parameterIndex);
        if ((entry->flags & g_btlAction.interaction.requiredMask) == 0)
            continue;
        if ((entry->flags & actionMask(MASK_LEADER)) != 0 && entry->unitIndex != action->combatant.parameterIndex)
            continue;
        const UiPositionA *position = reinterpret_cast<const UiPositionA *>(&action->initialPositionX);
        state->windowHandles[windowCount] = FUN_004aaebc(g_btlUiBlock, entry->id, action->marker.group, entry->maxHp, entry->maxMp,
                                                         entry->statusFlags, NULL, position->x, position->y, position->z);
        state->windowSelections[windowCount] = entry->indexView.selectionIndex;
        ++windowCount;
    }
    FUN_004aa798(g_btlUiBlock, reinterpret_cast<u8 *>(*block) + 0x1EC8, 5);
    sysMemClear(state->targetMarks, sizeof(state->targetMarks));
    rt_memclr(state->targetOrder, sizeof(state->targetOrder));
    g_btlAction.unk00 = 0xffffffff;

    for (s32 index = 0; index < 133; ++index) {
        if (((*block)->roster[index].liveFlags.unk50 & 4) != 0) {
            s32 combatant = (*block)->roster[index].combatant.combatantIndex;
            if (combatant >= 0)
                state->targetOrder[combatant] = combatant;
        }
    }

    // Order the targets by their position (insertion by bubbling the smallest up).
    {
        u64 aliveMask = g_btlAction.targetableMask;
        u64 hiddenMask = g_btlAction.interaction.excludedMask;
        u64 enemyMask = g_btlAction.interaction.requiredMask;
        u64 leaderMask = actionMask(MASK_LEADER);
        for (s32 pass = 0; pass < 108; ++pass) {
            for (s32 slot = 108; pass < slot; --slot) {
                u8 first = state->targetOrder[slot - 1];
                BtlCombatantEntryA *firstEntry = &(*block)->entries[first];
                if ((firstEntry->flags & aliveMask) == 0 || (firstEntry->flags & hiddenMask) != 0 ||
                    (firstEntry->flags & enemyMask) == 0 || (firstEntry->flags & leaderMask) != 0)
                    continue;
                u8 second = state->targetOrder[slot];
                BtlCombatantEntryA *secondEntry = &(*block)->entries[second];
                if ((secondEntry->flags & aliveMask) == 0 || (secondEntry->flags & hiddenMask) != 0 ||
                    (secondEntry->flags & enemyMask) == 0 || (secondEntry->flags & leaderMask) != 0)
                    continue;
                const BattleRosterRecordA *firstAction = &(*block)->roster[firstEntry->unitIndex];
                const BattleRosterRecordA *secondAction = &(*block)->roster[secondEntry->unitIndex];
                if (firstAction->initialPositionX > secondAction->initialPositionX) {
                    state->targetOrder[slot] = first;
                    state->targetOrder[slot - 1] = second;
                }
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
