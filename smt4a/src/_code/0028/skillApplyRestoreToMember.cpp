#include "battle/BtlMainAccess.h"
#include "battle/BattleContextCommandsA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SkillRestore.h"
#include "util/BitsAndBytes_Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "mapnavi/naviMain.h"
#include "code/Code0023_Smt4a.h"

struct SkillRecord;
struct BtlUnitRecordA;

enum {
    RESTORE_AILMENT_DOWN = 1,
    RESTORE_AILMENT_WEAK_HEAL = 3,
    RESTORE_AILMENT_NO_ITEMS = 10,
    RESTORE_AILMENT_DOWN_MASK = 1 << RESTORE_AILMENT_DOWN,
    RESTORE_CATEGORY_UNIT_ONLY = 7,
};
extern "C" {
s32 btlMainIsRunning(void);
u32 btlMainGetUnk14(void);
s32 btlPlayerMaxHp(BtlUnitRecordA *record);
u32 btlUnitMaxHp(u32 sourceId);
void playerClearFlagMask(u16 mask);
s32 FUN_0023e6d8(SkillRecord *skill, s32 value, s32 slot);
u32 FUN_003d2c20(const SkillDataRecordA *skill, u32 ailments);

/* Applies a restoring skill or item effect to the player (target < 0) or to the party unit `target`.
 * Revival brings a downed target back with the restored HP; other effects need a
 * living target, cures the ailments the effect covers and restores HP up to the maximum. With `preview`
 * set nothing is written: the HP that would be restored goes to `amountOut`. Ailment bit 1 is "down",
 * bit 3 limits the restored amount to 1 HP. Returns 0 when the effect does something, 1 when not. */
u32 skillApplyRestoreToMember(s32 source, s32 target, const SkillDataRecordA *effect, s32 preview, s32 *amountOut)
{
    PlayerDataA *player = NULL;
    SlotRecordA *unit = NULL;
    if (target < 0) {
        if (btlMainIsRunning() && btlIsDefeatSuppressed()) {
            unit = (SlotRecordA *)btlMainGetUnk14();
        } else {
            player = gameGetPlayerData();
        }
    } else {
        unit = gameGetSlotRecord(target);
        if (unit == NULL || bitsAt60Test(unit, RESTORE_AILMENT_NO_ITEMS)) {
            return 1;
        }
    }
    u32 result = 1;
    s32 playerMaximum = 0;
    s32 unitMaximum = 0;
    if (player != NULL) {
        if (btlGetMainState() != NULL) {
            playerMaximum = btlPlayerMaxHp((BtlUnitRecordA *)player);
        } else {
            playerMaximum = player->maxHp;
        }
    }
    if (unit != NULL) {
        if (btlGetMainState() != NULL) {
            unitMaximum = btlUnitMaxHp((u32)unit);
        } else {
            unitMaximum = recordGetScaledMaximum(unit);
        }
    }

    if (FUN_0023ad2c((Holder *)effect) != 0) {
        if (player != NULL) {
            if (effect->sort.category != RESTORE_CATEGORY_UNIT_ONLY && playerHasFlagBit(RESTORE_AILMENT_DOWN)) {
                if (preview == 0) {
                    playerClearFlagMask(RESTORE_AILMENT_DOWN_MASK);
                    if (playerHasFlagBit(RESTORE_AILMENT_WEAK_HEAL)) {
                        player->hp = player->hp + 1;
                    } else {
                        player->hp = FUN_0023e6d8((SkillRecord *)effect, (s16)playerMaximum, source) + player->hp;
                    }
                    if (player->hp <= 0) {
                        player->hp = 1;
                    }
                } else {
                    if (amountOut != NULL) {
                        if (playerHasFlagBit(RESTORE_AILMENT_WEAK_HEAL)) {
                            *amountOut = 1;
                        } else {
                            *amountOut = FUN_0023e6d8((SkillRecord *)effect, (s16)playerMaximum, source);
                        }
                    }
                }
                result = 0;
            }
        } else {
            if (bitsAt60Test(unit, RESTORE_AILMENT_DOWN)) {
                if (preview == 0) {
                    bitsAt60Clear(unit, RESTORE_AILMENT_DOWN_MASK);
                    if (bitsAt60Test(unit, RESTORE_AILMENT_WEAK_HEAL)) {
                        unit->hp = unit->hp + 1;
                    } else {
                        unit->hp = FUN_0023e6d8((SkillRecord *)effect, (s16)unitMaximum, source) + unit->hp;
                    }
                    if (unit->hp <= 0) {
                        unit->hp = 1;
                    }
                } else {
                    if (amountOut != NULL) {
                        if (bitsAt60Test(unit, RESTORE_AILMENT_WEAK_HEAL)) {
                            *amountOut = 1;
                        } else {
                            *amountOut = FUN_0023e6d8((SkillRecord *)effect, (s16)unitMaximum, source);
                        }
                    }
                }
                result = 0;
            }
        }
    } else {
        if (player != NULL) {
            if (playerHasFlagBit(RESTORE_AILMENT_DOWN)) {
                return 1;
            }
        } else {
            if (bitsAt60Test(unit, RESTORE_AILMENT_DOWN)) {
                return 1;
            }
        }
        if (player != NULL) {
            u32 cured = FUN_003d2c20(effect, player->ailments);
            if (cured != 0) {
                if (preview == 0) {
                    playerClearFlagMask((u16)cured);
                }
                result = 0;
            }
            s32 amount = FUN_0023e6d8((SkillRecord *)effect, (s16)playerMaximum, source);
            if (amount != 0) {
                if (playerHasFlagBit(RESTORE_AILMENT_WEAK_HEAL)) {
                    amount = 1;
                }
                if (player->hp < playerMaximum) {
                    if (preview != 0) {
                        if (amountOut != NULL) {
                            s32 room = playerMaximum - player->hp;
                            if (amount > room) {
                                amount = room;
                            }
                            *amountOut = amount;
                        }
                    } else {
                        player->hp = player->hp + amount;
                    }
                    result = 0;
                }
            }
            if (preview == 0) {
                player->hp = player->hp <= playerMaximum ? player->hp : playerMaximum;
            }
        } else {
            u32 cured = FUN_003d2c20(effect, unit->ailments);
            if (cured != 0) {
                if (preview == 0) {
                    bitsAt60Clear(unit, (u16)cured);
                }
                result = 0;
            }
            s32 amount = FUN_0023e6d8((SkillRecord *)effect, (s16)unitMaximum, source);
            if (amount != 0) {
                if (bitsAt60Test(unit, RESTORE_AILMENT_WEAK_HEAL)) {
                    amount = 1;
                }
                if (unit->hp < unitMaximum) {
                    if (preview != 0) {
                        if (amountOut != NULL) {
                            s32 room = unitMaximum - unit->hp;
                            if (amount > room) {
                                amount = room;
                            }
                            *amountOut = amount;
                        }
                    } else {
                        unit->hp = unit->hp + amount;
                    }
                    result = 0;
                }
            }
            if (preview == 0) {
                unit->hp = unit->hp <= unitMaximum ? unit->hp : unitMaximum;
            }
        }
    }
    return result;
}

} /* extern "C" */
