/* NON_MATCHING: 242 lines, the IV twin FUN_003bf1e4's shape. Retail unrolls the four party entries (the first folded to count 1) where armcc here keeps the loop, so the sums and counters get other registers and stack slots; its pool also names g_btlSkillResponseMasks+0x30 and +0x90 as DAT_ words (the global has no size in symbols.txt). The early tests, the averages, the zeroed bonus term, the formula and the table switch now follow retail. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
s32 gameProgressIsAdvanced(void);
s32 btlFindSelectionIndexByOrdinal(BtlMainStateA *battle, s32 flag);

/* Returns the chance (0-100) that the party escapes: from the agility and luck averages of the
 * party against the enemies, the earlier escape attempts and the progress table. */
s32 FUN_004c67d0(void)
{
    BtlMainStateA *battle = btlGetMainState();
    if (battle->encounter.statusFlags & 0x40000)
        return 0;
    if (battle->stateFlags64.bits & g_btlSkillResponseMasks.alwaysProc)
        return 100;
    if (gameProgressIsAdvanced() != 0)
        return 0;
    if (battle->markerMasks.bits & g_btlSkillResponseMasks.markerEscape)
        return 100;
    if (battle->markerMasks.bits & g_btlSkillResponseMasks.markerNoEscape)
        return 0;

    u8 escapes = battle->escapes.count;
    BtlCombatantEntryA *entries = battle->entries;
    s32 partyCount = 0;
    s32 partyAgility = 0;
    s32 partyLuck = 0;
    s32 enemyCount = 0;
    s32 enemyAgility = 0;
    s32 enemyLuck = 0;
    s32 bonus = 0;
    s32 surprise = 0;
    for (s32 i = 0; i < 4; i++) {
        BtlCombatantEntryA *entry = &entries[i];
        if ((entry->flags & g_btlSkillResponseMasks.present) != 0 && (entry->flags & g_btlSkillResponseMasks.outOfFight) == 0) {
            partyCount++;
            partyAgility += entry->data.agility;
            partyLuck += entry->data.luck;
        }
    }
    partyAgility /= partyCount;
    partyLuck /= partyCount;
    for (s32 i = 4; i < 54; i++) {
        BtlCombatantEntryA *entry = &entries[i];
        if ((entry->flags & g_btlSkillResponseMasks.present) != 0 && (entry->flags & g_btlSkillResponseMasks.outOfFight) == 0) {
            enemyCount++;
            enemyAgility += entry->data.agility;
            enemyLuck += entry->data.luck;
        }
    }
    enemyAgility /= enemyCount;
    enemyLuck /= enemyCount;
    s32 chance = partyAgility - enemyAgility + (partyLuck - enemyLuck) / 2;
    /* Retail performs this test and the store (movne/strne) although the bonus is already 0. */
    if (battle->stateFlags64.bits & g_btlSkillResponseMasks.noEscapeBonus) {
        bonus = 0;
    }
    if (btlFindSelectionIndexByOrdinal(battle, 1) >= 0) {
        surprise = -50;
    }
    chance = chance + bonus + escapes * 10 + surprise + 50;
    s32 table = gameDataBlocksGetTableFlag();
    if (table == 1) {
        chance = 100;
    } else if (table == 2) {
        chance /= 2;
    } else if (table == 3) {
        chance = 100;
    } else if (table == 4) {
        chance = 0;
    }
    if (chance < 0) {
        chance = 0;
    } else if (chance > 100) {
        chance = 100;
    }
    return chance;
}

} /* extern "C" */
