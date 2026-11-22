/* NON_MATCHING: 8 lines; same instructions, frame and row count (332) as retail. The HP and the MP "not at
 * maximum" tests load the same halfwords but compare them the other way round (retail `cmp r2, r1` with the
 * current value in r2), and the zero for the cure mask (`mov sl, #0`) is set after the NEED_RESERVE test where
 * retail sets it before the NEED_CURE one. Reading HP and maximum HP into two single-use locals gives retail's
 * HP compare (4 lines left); that is not a form this source keeps. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"
#include "battle/BattleHelpers_BtlUnits.h"
#include "battle/BtlEntry.h"
#include "battle/SkillUseNeeds.h"
#include "gamedata/SkillDataRecord.h"
#include "shard/W6_W6Match3_BattleQueue.h"

extern "C" {

struct BtlStatOwner; /* FUN_0033f8ec's view of a battle entry (its id) */
u8 FUN_0033f8ec(BtlStatOwner *owner, s32 first, s32 second, s32 third, s32 strict);

/* Whether using the skill on the battle entry would do anything: gathers what the skill needs of its target and
 * what the entry meets. Returns 0 when it meets every need, otherwise 3. `checkStats` also asks for room in
 * the stats a stat-raising skill changes. */
u32 btlSkillCheckApplicable(BtlEntry *entry, const SkillDataRecord *skill, s32 checkStats)
{
    u32 result = 0;
    u32 needs = 0;
    u32 met = 0;

    if (skill->use.healAmount != 0) {
        needs = NEED_HEAL;
    }
    if (skill->use.cureEvent != 0 && !skill->use.curesNothing) {
        needs |= NEED_CURE;
    }
    if (skill->use.statChanges[0] != 0 || skill->use.statChanges[1] != 0 || skill->use.statChanges[2] != 0 ||
        skill->use.strictStats) {
        needs |= NEED_STAT_CHANGE;
    }
    if (checkStats != 0 && skill->use.needsStatRoom) {
        needs |= NEED_STAT_ROOM;
    }
    if (skill->use.needsEffect13Off) {
        needs |= NEED_EFFECT13_OFF;
    }
    if (skill->use.needsEffect18Off) {
        needs |= NEED_EFFECT18_OFF;
    }
    if (skill->use.needsEffect19Off) {
        needs |= NEED_EFFECT19_OFF;
    }
    if ((skill->use.needsEffectOn & 1) != 0) {
        needs |= NEED_EFFECT18_ON;
    }
    if ((skill->use.needsEffectOn & 2) != 0) {
        needs |= NEED_EFFECT19_ON;
    }
    if (skill->use.needsEffect20Off) {
        needs |= NEED_EFFECT20_OFF;
    }
    if (skill->use.needsEffect14Off) {
        needs |= NEED_EFFECT14_OFF;
    }
    if (skill->use.needsEffect15Off) {
        needs |= NEED_EFFECT15_OFF;
    }
    if (skill->use.needsEffect16Off) {
        needs |= NEED_EFFECT16_OFF;
    }
    if (skill->use.needsEffect17Off) {
        needs |= NEED_EFFECT17_OFF;
    }
    if (skill->use.needsBattleFlag10Clear) {
        needs |= NEED_BATTLE_FLAG10_CLEAR;
    }
    if (skill->needsBaseMaxHp != 0) {
        needs |= NEED_BASE_MAX_HP;
    }
    if (skill->use.needsEscape) {
        needs |= NEED_ESCAPE;
    }
    if (skill->use.revives) {
        needs |= NEED_REVIVE;
    } else if (skill->sort.category == 7 || skill->sort.category == 9) {
        needs |= NEED_RESERVE;
    }
    if (skill->use.target == 4) {
        needs |= NEED_DEAD;
    }
    if (skill->needsMenuRoom != 0) {
        needs |= NEED_MENU_ROOM;
    }

    if ((needs & NEED_HEAL) != 0) {
        if ((needs & NEED_RESERVE) != 0) {
            met = NEED_HEAL;
        } else if ((entry->data.statusFlags & 2) == 0 && entry->data.maxHp != entry->data.hp) {
            met = NEED_HEAL;
        }
    }
    if ((needs & NEED_MP) != 0 && entry->data.maxMp != entry->data.mp) {
        met |= NEED_MP;
    }
    if ((needs & NEED_CURE) != 0) {
        if ((needs & NEED_RESERVE) != 0) {
            met |= NEED_CURE;
        } else {
            if ((cureMask(skill->use.cureEvent) & entry->data.statusFlags) != 0) {
                met |= NEED_CURE;
            }
            if ((met & NEED_CURE) != 0) {
                if ((needs & NEED_HEAL) != 0) {
                    met |= NEED_HEAL;
                }
            } else if ((met & NEED_HEAL) != 0) {
                if ((cureMask(skill->use.cureEvent) & 2) == 0) {
                    met |= NEED_CURE;
                }
                if ((met & NEED_HEAL) != 0 && skill->use.cureEvent == 0x11) {
                    met |= NEED_CURE;
                }
            }
        }
    }
    if ((needs & NEED_EFFECT13_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 13) <= 0) {
        met |= NEED_EFFECT13_OFF;
    }
    if ((needs & NEED_EFFECT18_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 18) <= 0) {
        met |= NEED_EFFECT18_OFF;
    }
    if ((needs & NEED_EFFECT19_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 19) <= 0) {
        met |= NEED_EFFECT19_OFF;
    }
    if ((needs & NEED_EFFECT18_ON) != 0 && battleGetEntryHalfword(entry->ids[0], 18) > 0) {
        met |= NEED_EFFECT18_ON;
    }
    if ((needs & NEED_EFFECT19_ON) != 0 && battleGetEntryHalfword(entry->ids[0], 19) > 0) {
        met |= NEED_EFFECT19_ON;
    }
    if ((needs & NEED_EFFECT20_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 20) <= 0) {
        met |= NEED_EFFECT20_OFF;
    }
    if ((needs & NEED_EFFECT14_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 14) <= 0) {
        met |= NEED_EFFECT14_OFF;
    }
    if ((needs & NEED_EFFECT15_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 15) <= 0) {
        met |= NEED_EFFECT15_OFF;
    }
    if ((needs & NEED_EFFECT16_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 16) <= 0) {
        met |= NEED_EFFECT16_OFF;
    }
    if ((needs & NEED_EFFECT17_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 17) <= 0) {
        met |= NEED_EFFECT17_OFF;
    }
    if ((needs & NEED_BATTLE_FLAG10_CLEAR) != 0 && (btlGetMainState()->battleFlags & 0x400) == 0) {
        met |= NEED_BATTLE_FLAG10_CLEAR;
    }
    if ((needs & NEED_BASE_MAX_HP) != 0) {
        if ((entry->flags & 2) != 0) {
            if (entry->data.maxHp <= entry->data.source->maxHp) {
                met |= NEED_BASE_MAX_HP;
            }
        } else if ((entry->flags & 8) == 0 || entry->data.link->maxHp >= entry->data.maxHp) {
            met |= NEED_BASE_MAX_HP;
        }
    }
    if ((needs & NEED_EFFECT27_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 27) <= 0) {
        met |= NEED_EFFECT27_OFF;
    }
    if ((needs & NEED_EFFECT28_OFF) != 0 && battleGetEntryHalfword(entry->ids[0], 28) <= 0) {
        met |= NEED_EFFECT28_OFF;
    }
    if ((needs & NEED_ESCAPE) != 0) {
        BtlMainState *state = btlGetMainState();
        if ((state->battleFlags & 0x40000) != 0 || (state->encounter.flags & 0x40000) == 0) {
            met |= NEED_ESCAPE;
        }
    }
    if ((needs & NEED_RESERVE) != 0 && btlHasReserveReplacement(entry) != 0) {
        met |= NEED_RESERVE;
    }
    if ((needs & NEED_REVIVE) != 0 && FUN_0033fc50() != 0) {
        met |= NEED_REVIVE;
    }
    if ((needs & NEED_DEAD) != 0 && entry->data.statusFlags == 0) {
        met |= NEED_DEAD;
    }
    if ((needs & NEED_MENU_ROOM) != 0) {
        BtlMainState *state = btlGetMainState();
        s16 cursorX = state->menuCursor.x;
        s16 cursorY = state->menuCursor.y;
        if ((cursorY > cursorX ? cursorY : cursorX) < 8) {
            met |= NEED_MENU_ROOM;
        }
    }
    if ((needs & NEED_STAT_CHANGE) != 0) {
        if (FUN_0033f8ec((BtlStatOwner *)entry, skill->use.statChanges[0], skill->use.statChanges[1],
                         skill->use.statChanges[2], skill->use.strictStats) == 0) {
            met |= NEED_STAT_CHANGE;
        }
        if ((met & NEED_STAT_CHANGE) != 0 && (needs & ~met & NEED_HEAL) != 0) {
            met |= NEED_HEAL;
        }
        if ((met & NEED_STAT_CHANGE) == 0 && (needs & met & NEED_HEAL) != 0) {
            met |= NEED_STAT_CHANGE;
        }
    }
    if ((needs & NEED_STAT_ROOM) != 0) {
        if ((s16)battleGetEntryHalfword(entry->ids[0], 11) != (s16)btlQueueParamLimitForKind(11) &&
            (s16)battleGetEntryHalfword(entry->ids[0], 10) != (s16)btlQueueParamLimitForKind(10) &&
            (s16)battleGetEntryHalfword(entry->ids[0], 7) != (s16)btlQueueParamLimitForKind(7)) {
            met |= NEED_STAT_ROOM;
        }
    }
    if (needs != met) {
        result = 3;
    }
    return result;
}

} /* extern "C" */
