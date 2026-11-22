/* NON_MATCHING: about 80 of retail's 265 rows differ. Retail keeps the cleared flags in r8:r9 (the build r4:r9, so stm for
 * strd) and zeroes r4 before the conditions test, sharing it with the race loop's index, then sets the chance's zero again
 * in r8 before the party loop; it adds 50 before the chance (the build after), tests the two ailment bits as tst/tsteq
 * (nested ifs give that, a ternary max gives its vcmpe operand order, but either moves the whole mask block to other
 * registers), compares the partial-flee chance as cmp chance, roll, and gives the flee-blocked store its own epilogue
 * where the build shares it. btlEscapeChanceBonus is the call armlink replaced by `mov r0, #0` (its inlined.txt row). */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/BattleFlagMasks.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "util/Random.h"

extern "C" {

/* A constant 0 in the retail build: armlink put its `mov r0, #0` in place of the call. */
s32 btlEscapeChanceBonus(void);

/* Decides whether the enemies try to flee this turn and sets the flee masks if they do. */
void btlDecideEnemyFlee(BattleFlagsState *battle, s32 forced)
{
    battle->blockFlags &= ~g_btlMain.fleeMask;
    battle->blockFlags &= ~g_btlMain.disableMask;
    if ((battle->forceFlags & g_btlMain.stopMaskB) != 0) {
        return;
    }
    if ((battle->forceFlags & g_btlMain.stopMaskA) != 0) {
        return;
    }
    if ((battle->forceFlags & g_btlMain.forceFleeMask) != 0) {
        battle->blockFlags |= g_btlMain.fleeMask;
        battle->blockFlags |= g_btlMain.disableMask;
        return;
    }
    if ((battle->blockFlags & g_btlMain.holdMask) != 0) {
        return;
    }
    s32 chance = 0;
    if ((battle->conditions & 0x10000) != 0) {
        battle->blockFlags |= g_btlMain.fleeMask;
        battle->blockFlags |= g_btlMain.disableMask;
        return;
    }
    if ((battle->conditions & 0x20000) != 0) {
        return;
    }
    if (forced != 0) {
        s32 roll = lcgRandomRange(99);
        if (roll < 90) {
            return;
        }
        battle->blockFlags |= g_btlMain.fleeMask;
        battle->blockFlags |= g_btlMain.disableMask;
        return;
    }
    if (battle->fleeBehavior == 1) {
        bool found = false;
        for (s32 i = 0; i < 6; i++) {
            if (battle->enemies[i] != 0) {
                NkmBaseRecordA *record = nkmBaseGetRecord(battle->enemies[i] & 0xffff);
                if (record != NULL && record->race == 39) {
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            battle->blockFlags |= g_btlMain.fleeBlockedMask;
            return;
        }
    } else if (battle->fleeBehavior == 2) {
        battle->blockFlags |= g_btlMain.fleeMask;
        battle->blockFlags |= g_btlMain.disableMask;
        if (battle->partialFleeChance > lcgRandomRange(100)) {
            battle->blockFlags |= g_btlMain.partialFleeMask;
        }
        return;
    } else if (battle->fleeBehavior == 3) {
        return;
    }

    f32 partyPower = 0.0f;
    f32 enemyPower = 0.0f;
    if ((gameGetPlayerData()->ailments & 2) == 0) {
        partyPower = (f32)(gameGetPlayerData()->stats[3] + gameGetPlayerData()->stats[4]);
    }
    for (s32 i = 0; i < 3; i++) {
        if (gameGetSlotTable()->reserve[i] >= 0) {
            SlotRecordA *record = gameGetSaveSlotData(i);
            if ((record->ailments & 2) == 0 && (record->ailments & 0x400) == 0) {
                s32 power = record->baseStats[3] + record->baseStats[4];
                if ((f32)power > partyPower) {
                    partyPower = (f32)power;
                }
            }
        }
    }
    for (s32 i = 0; i < 6; i++) {
        if (battle->enemies[i] != 0) {
            NkmEnemyRecordA *record = nkmEnemyFindById(battle->enemies[i] & 0xffff);
            if (record != NULL) {
                u32 power = record->stats[3] + record->stats[4];
                if ((f32)power > enemyPower) {
                    enemyPower = (f32)power;
                }
            }
        }
    }
    chance += (s32)((partyPower - enemyPower) * 0.2f) + 50;
    if (gameDataBlocksGetTableFlag() == 0) {
        if (chance < 30) {
            chance = 30;
        } else if (chance > 70) {
            chance = 70;
        }
    } else if (gameDataBlocksGetTableFlag() == 1 || gameDataBlocksGetTableFlag() == 3) {
        chance = 1000;
    } else if (gameDataBlocksGetTableFlag() == 2) {
        chance = chance / 2;
        if (chance > 70) {
            chance = 70;
        }
    } else if (gameDataBlocksGetTableFlag() == 4) {
        chance = (s32)((f32)chance * 0.1f);
        if (chance > 70) {
            chance = 70;
        }
    }
    chance += btlEscapeChanceBonus();
    if ((s32)lcgRandomRange(100) <= chance) {
        return;
    }
    battle->blockFlags |= g_btlMain.fleeMask;
    battle->blockFlags |= g_btlMain.disableMask;
}

} /* extern "C" */
