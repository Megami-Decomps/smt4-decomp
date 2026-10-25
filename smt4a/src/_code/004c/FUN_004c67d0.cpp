/* NON_MATCHING: readable rebuild of the escape-chance calculation (the draft's lost result of FUN_003eebf4 restored as the sign test the asm makes); retail unrolls the four party slots and keeps the per-unit stat sums in registers, which armcc here emits from a helper over the unit pair. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern u64 DAT_005713f0;       /* a unit is present */
extern u64 DAT_00571420;       /* a unit is out of the fight */
extern u64 DAT_00571498;       /* the battle always lets the party escape */
extern u64 DAT_005714c8;       /* the second state always lets the party escape */
extern u64 DAT_005714d0;       /* the second state never lets the party escape */

s32 gameProgressIsAdvanced(void);
s32 gameDataBlocksGetTableFlag(void);
s32 FUN_003eebf4(BtlMainStateA *battle, s32 flag);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Whether a unit slot is an active fighter. */
static __inline bool isFighting(const BtlCombatantEntryA *unit)
{
    return (unit->flags & DAT_005713f0) != 0 && (unit->flags & DAT_00571420) == 0;
}

/* Returns the chance (0-100) that the party escapes: from the level and agility averages of the
 * party against the enemies, the earlier escape attempts and the progress table. */
s32 FUN_004c67d0(void)
{
    BtlMainStateA *battle = btlGetMainState();
    if (battle->encounter.statusFlags & 0x40000)
        return 0;
    if (battle->stateFlags64.bits & DAT_00571498)
        return 100;
    if (gameProgressIsAdvanced() != 0)
        return 0;
    if (battle->markerMasks.bits & DAT_005714c8)
        return 100;
    if (battle->markerMasks.bits & DAT_005714d0)
        return 0;
    u8 escapes = battle->escapes.count;
    BtlCombatantEntryA *units = battle->entries;
    s32 partyLevel = 0;
    s32 partyAgility = 0;
    s32 partyCount = 0;
    for (s32 i = 0; i < 4; i++) {
        if (isFighting(&units[i])) {
            partyCount++;
            partyLevel += units[i].levelStats.level;
            partyAgility += units[i].levelStats.agility;
        }
    }
    partyLevel = __aeabi_idivmod(partyLevel, partyCount);
    partyAgility = __aeabi_idivmod(partyAgility, partyCount);
    s32 enemyLevel = 0;
    s32 enemyAgility = 0;
    s32 enemyCount = 0;
    for (s32 i = 4; i < 0x36; i++) {
        if (isFighting(&units[i])) {
            enemyCount++;
            enemyLevel += units[i].levelStats.level;
            enemyAgility += units[i].levelStats.agility;
        }
    }
    enemyLevel = __aeabi_idivmod(enemyLevel, enemyCount);
    enemyAgility = __aeabi_idivmod(enemyAgility, enemyCount);
    s32 bias = 0;
    if (FUN_003eebf4(battle, 1) >= 0)
        bias = -50;
    s32 chance = bias + (partyLevel - enemyLevel) + (partyAgility - enemyAgility) / 2 + escapes * 10 + 50;
    s32 table = gameDataBlocksGetTableFlag();
    if (table == 1 || table == 3)
        return 100;
    if (table == 4)
        return 0;
    if (table == 2)
        chance /= 2;
    if (chance < 0)
        return 0;
    return chance < 101 ? chance : 100;
}

} /* extern "C" */
