/* NON_MATCHING: mask test and branch layout differ (retail loads each u64 mask pair with ldm/ldrd from the g_btlMain base and tests the halves separately) */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/BattleFlagMasks.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GamePlayerData.h"

/* The battle state (only the fields this decision reads and writes). */
struct EscapeBattle {
    /* 0x0000 */ u8 unk0000[0xf4];
    /* 0x00f4 */ u32 enemies[6];           /* enemy ids, 0 = empty slot */
    /* 0x010c */ u32 conditions;           /* bit 16: always flees, bit 17: never flees */
    /* 0x0110 */ u8 unk0110[0x42];
    /* 0x0152 */ u16 fleeChance;           /* percent the enemies flee when behavior is 2 */
    /* 0x0154 */ u8 unk0154[0x34];
    /* 0x0188 */ s8 behavior;              /* 1: flee when a marked enemy is present, 2: percentage */
    /* 0x0189 */ u8 unk0189[0x4417];
    /* 0x45a0 */ u64 mask;
    /* 0x45a8 */ u64 blockMask;
};

/* A party member's save record (only the levels and flags). */
struct EscapeSaveSlot {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s16 levelA;
    /* 0x1a */ s16 levelB;
    /* 0x1c */ u8 unk1c[0x44];
    /* 0x60 */ u16 flags;
};

struct EscapeSlotTable {
    /* 0x0000 */ u8 unk0000[0x1ca0];
    /* 0x1ca0 */ s8 party[3];
};

extern "C" {
s32 lcgRandomRange(s32 range);
EscapeSlotTable *gameGetSlotTable(void);
s32 gameDataBlocksGetTableFlag(void);
EscapeSaveSlot *gameGetSaveSlotData(s32 slot);

/* Decides whether the enemies try to flee this turn and sets the flee masks if they do. */
void FUN_003ef1e4(EscapeBattle *battle, s32 forced)
{
    u64 base = battle->mask & ~g_btlMain.fleeMask & ~g_btlMain.disableMask;
    battle->mask = base;
    if ((battle->blockMask & g_btlMain.stopMaskB) != 0) {
        return;
    }
    if ((battle->blockMask & g_btlMain.stopMaskA) != 0) {
        return;
    }
    if ((battle->blockMask & g_btlMain.forceFleeMask) != 0) {
        battle->mask = base | g_btlMain.fleeMask | g_btlMain.disableMask;
        return;
    }
    if ((base & g_btlMain.holdMask) != 0) {
        return;
    }
    s32 roll = 0;
    if ((battle->conditions & 0x10000) != 0) {
        battle->mask = base | g_btlMain.fleeMask | g_btlMain.disableMask;
        return;
    }
    if ((battle->conditions & 0x20000) != 0) {
        return;
    }
    if (forced != 0) {
        roll = lcgRandomRange(99);
        if (roll < 90) {
            return;
        }
        battle->mask |= g_btlMain.fleeMask | g_btlMain.disableMask;
        return;
    }
    if (battle->behavior != 1) {
        if (battle->behavior == 2) {
            battle->mask = base | g_btlMain.fleeMask | g_btlMain.disableMask;
            if (lcgRandomRange(100) >= battle->fleeChance) {
                return;
            }
            battle->mask |= g_btlMain.partialFleeMask;
            return;
        }
        if (battle->behavior == 3) {
            return;
        }
    } else {
        for (s32 i = 0;; i++) {
            u32 id = battle->enemies[i];
            if (id != 0) {
                NkmBaseRecordA *model = nkmBaseGetRecord(id & 0xffff);
                if (model != NULL && model->race == 39) {
                    break;
                }
            }
            if (i + 1 >= 6) {
                battle->mask |= g_btlMain.fleeBlockedMask;
                return;
            }
        }
    }

    f32 partyPower = 0.0f;
    f32 enemyPower = 0.0f;
    if ((gameGetPlayerData()->ailments & 2) == 0) {
        partyPower = (f32)(s32)(gameGetPlayerData()->stats[4] + gameGetPlayerData()->stats[3]);
    }
    for (s32 i = 0; i < 3; i++) {
        if (gameGetSlotTable()->party[i] >= 0) {
            EscapeSaveSlot *slot = gameGetSaveSlotData(i);
            if ((slot->flags & 2) == 0 && (slot->flags & 0x400) == 0) {
                f32 power = (f32)(s32)(slot->levelB + slot->levelA);
                if (power > partyPower) {
                    partyPower = power;
                }
            }
        }
    }
    for (s32 i = 0; i < 6; i++) {
        if (battle->enemies[i] != 0) {
            NkmEnemyRecordA *record = nkmEnemyFindById(battle->enemies[i] & 0xffff);
            if (record != NULL) {
                f32 power = (f32)(u32)(record->stats[4] + record->stats[3]);
                if (power > enemyPower) {
                    enemyPower = power;
                }
            }
        }
    }
    s32 difference = (s32)((partyPower - enemyPower) * 0.2f);
    s32 chance = difference + 50;
    if (gameDataBlocksGetTableFlag() != 0) {
        if (gameDataBlocksGetTableFlag() != 1 && gameDataBlocksGetTableFlag() != 3) {
            if (gameDataBlocksGetTableFlag() != 2) {
                if (gameDataBlocksGetTableFlag() == 4) {
                    chance = (s32)((f32)chance * 0.1f);
                    if (chance >= 71) {
                        chance = 70;
                    }
                }
            } else {
                chance = chance / 2;
                if (chance >= 71) {
                    chance = 70;
                }
            }
        } else {
            chance = 1000;
        }
    } else {
        if (chance < 30) {
            chance = 30;
        } else if (chance > 70) {
            chance = 70;
        }
    }
    if (lcgRandomRange(100) <= chance) {
        return;
    }
    battle->mask |= g_btlMain.fleeMask | g_btlMain.disableMask;
}

} /* extern "C" */
