/* NON_MATCHING: 212 raw / 142 shape. The 64-bit mask tests are written in one order throughout
 * (entry->flags & mask); retail pairs the words differently per test (a per-test choice of `flags & mask` or
 * `mask & flags`, found by scoring all 1024 combinations, gave 36 lines and was rejected in review as an operand
 * order picked per site by score). In the last loop retail loads the two masks before the loop (`ldrd r2, [r8, #16]`,
 * `ldm r8, {r6, ip}`) and reads the entry's flags as two `ldr`. */
#include "battle/BtlGlobals.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {

void btlActionClassifyTargetSide(BtlMainStateA **owner, BtlCombatantEntryA *entry, u32 skillId, s32 *side, s32 *scope);

enum {
    SKILL_CATEGORY_CURE = 11,
    SKILL_EFFECT_RAISE_STATS = -5,
    SKILL_EFFECT_LOWER_STATS = -6,
    BTL_PARTY_ENTRIES = 4,
    BTL_ENEMY_ENTRIES = 50
};

/* Whether the AI has a use for cure-category skill `skill` now: some live target on the side it works on has what
 * the skill removes (raised or lowered stats, the property behind usability bits 3 and 4, or the ailment it
 * cures). Skills that also restore something, and four fixed ids, are never chosen this way. */
u32 btlAiCureSkillHasTarget(BtlMainStateA **owner, BtlUnitA *unit, SkillDataRecordA *skill)
{
    if ((skill->properties & 0x1f) != SKILL_CATEGORY_CURE) {
        return 0;
    }
    if ((skill->usability.healing & 0x1000) != 0 || skill->usabilityTail.raisesMaximum != 0) {
        return 0;
    }
    if (skill->recovery.amount42 > 0 || skill->recovery.amount40 > 0) {
        return 0;
    }
    if ((skill->usability.flags & 0x60) != 0) {
        return 0;
    }
    if ((skill->flags & 0x300000) != 0) {
        return 0;
    }
    u32 id = skill->identity.id;
    if (id == 0x6f) {
        return 0;
    }
    if (id == 0x73 || id == 0x127 || id == 0x185) {
        return 0;
    }

    s32 side = 0;
    s32 scope = 0;
    btlActionClassifyTargetSide(owner, unit->entry, id, &side, &scope);
    if (side == 1) {
        side = 0;
    } else {
        side = 1;
    }
    if (scope == 2) {
        return 0;
    }
    s32 first;
    s32 count;
    if (side == 0) {
        first = 0;
        count = BTL_PARTY_ENTRIES;
    } else {
        first = BTL_PARTY_ENTRIES;
        count = BTL_ENEMY_ENTRIES;
    }

    if (skill->effectList.effects[0] == SKILL_EFFECT_RAISE_STATS) {
        for (s32 i = first; i < first + count; i++) {
            BtlCombatantEntryA *entry = &(*owner)->entries[i];
            if ((entry->flags & g_btlAction.targetableMask) != 0 &&
                (entry->flags & g_btlAction.interaction.excludedMask) == 0) {
                if (btlFindEntryValue(entry->selectionIndex, 7) > 0 || btlFindEntryValue(entry->selectionIndex, 8) > 0 ||
                    btlFindEntryValue(entry->selectionIndex, 10) > 0 || btlFindEntryValue(entry->selectionIndex, 9) > 0) {
                    return 1;
                }
            }
        }
    } else if (skill->effectList.effects[0] == SKILL_EFFECT_LOWER_STATS) {
        for (s32 i = first; i < first + count; i++) {
            BtlCombatantEntryA *entry = &(*owner)->entries[i];
            if ((entry->flags & g_btlAction.targetableMask) != 0 &&
                (entry->flags & g_btlAction.interaction.excludedMask) == 0) {
                if (btlFindEntryValue(entry->selectionIndex, 7) < 0 || btlFindEntryValue(entry->selectionIndex, 8) < 0 ||
                    btlFindEntryValue(entry->selectionIndex, 10) < 0 || btlFindEntryValue(entry->selectionIndex, 9) < 0) {
                    return 1;
                }
            }
        }
    } else if ((skill->usability.flags & 8) != 0) {
        for (s32 i = first; i < first + count; i++) {
            BtlCombatantEntryA *entry = &(*owner)->entries[i];
            if ((entry->flags & g_btlAction.targetableMask) != 0 &&
                (entry->flags & g_btlAction.interaction.excludedMask) == 0 &&
                btlFindEntryValue(entry->selectionIndex, 20) > 0) {
                return 1;
            }
        }
    } else if ((skill->usability.flags & 0x10) != 0) {
        for (s32 i = first; i < first + count; i++) {
            BtlCombatantEntryA *entry = &(*owner)->entries[i];
            if ((entry->flags & g_btlAction.targetableMask) != 0 &&
                (entry->flags & g_btlAction.interaction.excludedMask) == 0 &&
                btlFindEntryValue(entry->selectionIndex, 21) > 0) {
                return 1;
            }
        }
    } else {
        if ((skill->flags & 0x7f) == 0) {
            return 1;
        }
        for (s32 i = first; i < first + count; i++) {
            BtlCombatantEntryA *entry = &(*owner)->entries[i];
            if ((entry->flags & g_btlAction.targetableMask) != 0 &&
                (entry->flags & g_btlAction.interaction.excludedMask) == 0) {
                if ((skill->flags & 0x7f) != 4) {
                    return 0;
                }
                if ((entry->data.statusFlags & 0x10) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
