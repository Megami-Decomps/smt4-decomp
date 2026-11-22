/* NON_MATCHING: 282 lines, rewritten from the raw draft on the slot table types: same calls, loops and
 * tests as retail (the healer comparison in place: a single-use helper for it scored 5 lines better, no evidence). What remains: retail keeps the not-found index -1 in fp from before the first pick, shares one
 * clamp-to-zero tail between the two charges, places the player's skill scan after both picks and gives the candidate
 * count, the best unit and the skill id other registers; the player's skill scan is not unrolled here. */
#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "addon/LookupRecord.h"
#include "code/Code003d_Smt4a.h"
#include "code/Code004b_Smt4a.h"
#include "camp/Unite/UniteWork.h"
#include "shard/W6_W6Match1_PositionedStream.h"

#define RECOVERY_SKILL 0x8C
#define SLOT_ENTRY_COUNT 24

extern "C" {
s32 playerCanAffordRecoverySkill(void);
s32 gameSlotTableFindFree(void);
}

/* The demon's index in the slot table, or -1 (as slotIsReservePick's file has it). */
static s32 slotTableIndexOf(SlotRecordA *demon)
{
    if (demon == NULL) {
        return -1;
    }
    SlotRecordA *entry = gameGetSlotTable()->entries;
    s32 i;
    for (i = 0; i < SLOT_ENTRY_COUNT; i++, entry++) {
        if (entry == demon || entry->tableIndex == demon->tableIndex) {
            return i;
        }
    }
    return -1;
}

/* Whether the demon is one of the three reserve picks (the body of slotIsReservePick). */
static __inline bool isReservePick(SlotRecordA *demon)
{
    s32 index = slotTableIndexOf(demon);

    s8 *reserve = gameGetSlotTable()->reserve;
    if (reserve[0] >= 0 && reserve[0] == index) {
        return true;
    }
    if (reserve[1] >= 0 && reserve[1] == index) {
        return true;
    }
    if (reserve[2] >= 0 && reserve[2] == index) {
        return true;
    }
    return false;
}

/* Whether a unit (or the player) has `skill` among its eight skills. */
static __inline bool knowsSkill(const SlotRecordA *unit, u16 skill)
{
    for (s32 i = 0; i < 8; i++) {
        if (unit->skills[i] == skill) {
            return true;
        }
    }
    return false;
}

static __inline bool knowsSkill(const PlayerDataA *player, u16 skill)
{
    for (s32 i = 0; i < 8; i++) {
        if (player->skills[i] == skill) {
            return true;
        }
    }
    return false;
}

/* The candidate (slot table entry indices) that heals best among the reserve or the other ones, or NULL. */
static __inline SlotRecordA *pickHealer(const s8 *candidates, s32 count, bool reserved)
{
    SlotRecordA *best = NULL;
    for (s32 i = 0; i < count; i++) {
        SlotRecordA *unit = gameGetSlotRecord(candidates[i]);
        if (isReservePick(unit) != reserved) {
            continue;
        }
        /* More MP, then a higher level, then a lower table value. */
        bool better;
        if (best == NULL || best->mp < unit->mp) {
            better = true;
        } else if (best->mp != unit->mp) {
            better = false;
        } else if (best->level < unit->level) {
            better = true;
        } else if (best->level != unit->level) {
            better = false;
        } else {
            better = dataTableGetEntry0102Value(best->id) > dataTableGetEntry0102Value(unit->id);
        }
        if (better) {
            best = unit;
        }
    }
    return best;
}

/* Spends the recovery skill's MP from `unit`. */
static __inline void chargeRecoverySkill(SlotRecordA *unit, u32 skill)
{
    FUN_002b5c88();
    s16 balance = unit->mp - skillGetAdjustedCost(unit, skill);
    unit->mp = balance;
    if (balance < 0) {
        unit->mp = 0;
    }
}

/* Finds who casts the field recovery skill (0x8C): the party demon that knows it and can pay for it with the most MP
 * (then the highest level, then the lowest table value), outside the reserve first; else the player. Charges its MP
 * and returns the caster's name record, or NULL when nobody can cast it. */
extern "C" const void *fieldPickRecoveryCaster(void)
{
    if (playerCanAffordRecoverySkill() == 0) {
        return NULL;
    }
    u32 skill = RECOVERY_SKILL;
    s8 candidates[132];
    s32 count = 0;
    s32 partyCount = gameSlotTableFindFree();
    const s8 *party = gameGetSlotTable()->party;
    for (s32 i = 0; i < partyCount; i++) {
        if (party[i] < 0) {
            continue;
        }
        SlotRecordA *unit = gameGetSlotRecord(party[i]);
        if (unit == NULL) {
            continue;
        }
        if (knowsSkill(unit, skill) && skillGetAdjustedCost(unit, skill) < unit->mp) {
            candidates[count++] = party[i];
        }
    }
    SlotRecordA *best = pickHealer(candidates, count, false);
    if (best != NULL) {
        chargeRecoverySkill(best, skill);
        return dataTable01GetRecordWithAocOverride(best->id);
    }
    best = pickHealer(candidates, count, true);
    if (best != NULL) {
        chargeRecoverySkill(best, skill);
        return dataTable01GetRecordWithAocOverride(best->id);
    }
    if (knowsSkill(gameGetPlayerData(), skill)) {
        PlayerDataA *player = gameGetPlayerData();
        if (skillGetCostWithRankReduction(skill, 1) < player->mp) {
            FUN_002b5c88();
            s16 balance = player->mp - skillGetCostWithRankReduction(skill, 1);
            player->mp = balance;
            if (balance < 0) {
                player->mp = 0;
            }
            return gameGetPlayerData()->name;
        }
    }
    return NULL;
}
