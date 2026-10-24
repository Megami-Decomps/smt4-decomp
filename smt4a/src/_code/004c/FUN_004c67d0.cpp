/* NON_MATCHING: readable rebuild of the escape-chance calculation (the draft's lost result of FUN_003eebf4 restored as the sign test the asm makes); retail unrolls the four party slots and keeps the per-unit stat sums in registers, which armcc here emits from a helper over the unit pair. */
#include "common.h"

/* A battle unit slot (0x408 bytes; only the fields read here). */
struct BattleUnitSlot {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x266];
    /* 0x26E */ s16 level;
    /* 0x270 */ s16 agility;
    /* 0x272 */ u8 unk272[0x196];
};

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x10C];
    /* 0x010C */ u32 rules;
    /* 0x0110 */ u8 unk0110[0x1EEC];
    /* 0x1FFC */ BattleUnitSlot *units;
    /* 0x2000 */ u8 unk2000[0x25A0];
    /* 0x45A0 */ u64 flags;
    /* 0x45A8 */ u64 moreFlags;
    /* 0x45B0 */ u8 unk45B0[0xA];
    /* 0x45BA */ u8 escapeCount;
};

extern "C" {
extern u64 DAT_005713f0;       /* a unit is present */
extern u64 DAT_00571420;       /* a unit is out of the fight */
extern u64 DAT_00571498;       /* the battle always lets the party escape */
extern u64 DAT_005714c8;       /* the second state always lets the party escape */
extern u64 DAT_005714d0;       /* the second state never lets the party escape */

BattleState *btlGetMainState(void);
s32 gameProgressIsAdvanced(void);
s32 gameDataBlocksGetTableFlag(void);
s32 FUN_003eebf4(BattleState *battle, s32 flag);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Whether a unit slot is an active fighter. */
static __inline bool isFighting(const BattleUnitSlot *unit)
{
    return (unit->flags & DAT_005713f0) != 0 && (unit->flags & DAT_00571420) == 0;
}

/* Returns the chance (0-100) that the party escapes: from the level and agility averages of the
 * party against the enemies, the earlier escape attempts and the progress table. */
s32 FUN_004c67d0(void)
{
    BattleState *battle = btlGetMainState();
    if (battle->rules & 0x40000)
        return 0;
    if (battle->flags & DAT_00571498)
        return 100;
    if (gameProgressIsAdvanced() != 0)
        return 0;
    if (battle->moreFlags & DAT_005714c8)
        return 100;
    if (battle->moreFlags & DAT_005714d0)
        return 0;
    u8 escapes = battle->escapeCount;
    BattleUnitSlot *units = battle->units;
    s32 partyLevel = 0;
    s32 partyAgility = 0;
    s32 partyCount = 0;
    for (s32 i = 0; i < 4; i++) {
        if (isFighting(&units[i])) {
            partyCount++;
            partyLevel += units[i].level;
            partyAgility += units[i].agility;
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
            enemyLevel += units[i].level;
            enemyAgility += units[i].agility;
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
