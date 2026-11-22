#include "battle/BtlMainAccess.h"
#include "common.h"
#include "code/Code001a_Smt4.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/UnitRecordAccess.h"
#include "shard/W6_W6Match6_CecMessageBox.h"

extern "C" {
s32 btlLinkGetMaxHp(StatBlock *unit);
void objectFlagsClear(StatBlock *unit, u16 mask);
void padClearBits(u16 mask);
u32 FUN_00262260(const SkillDataRecord *skill, u32 baseValue, s32 unitIndex);
u32 effectFilterChannelsByCategory(const void *effect, u32 enabled);

/* Applies a restoring skill or item effect to the player (target < 0) or to the party unit `target`.
 * A revival (FUN_001ad4c0) brings a downed target back with the restored HP; any other effect needs a
 * living target, cures the ailments the effect covers and restores HP up to the maximum. With `preview`
 * set nothing is written: the HP that would be restored goes to `amountOut`. Ailment bit 1 is "down",
 * bit 3 limits the restored amount to 1 HP. Returns 0 when the effect does something, 1 when not. */
u32 skillApplyRestoreToMember(s32 source, s32 target, const SkillDataRecord *effect, s32 preview, s32 *amountOut)
{
    PlayerDataIV *player = NULL;
    StatBlock *unit = NULL;
    if (target < 0) {
        player = gameGetPlayerData();
    } else {
        unit = gameGetUnitRecord(target);
        if (unit == NULL || flagWordTestBit(unit, 10) || flagWordTestBit(unit, 2)) {
            return 1;
        }
    }
    u32 result = 1;
    s32 playerMaximum = 0;
    s32 unitMaximum = 0;
    if (player != NULL) {
        if (btlGetMainState() == NULL) {
            playerMaximum = player->maxHp;
        } else {
            playerMaximum = btlSourceGetMaxHp((const BtlUnitSource *)player);
        }
    }
    if (unit != NULL) {
        if (btlGetMainState() == NULL) {
            unitMaximum = unit->maxHp;
        } else {
            unitMaximum = btlLinkGetMaxHp(unit);
        }
    }

    if (FUN_001ad4c0((Obj *)effect) != 0) {
        if (player != NULL) {
            if (effect->sort.category != 7 && playerPadTestBit(1)) {
                if (preview == 0) {
                    padClearBits(2);
                    if (playerPadTestBit(3)) {
                        player->hp = player->hp + 1;
                    } else {
                        player->hp = FUN_00262260(effect, (s16)playerMaximum, source) + player->hp;
                    }
                    if (player->hp <= 0) {
                        player->hp = 1;
                    }
                } else {
                    if (amountOut != NULL) {
                        if (playerPadTestBit(3)) {
                            *amountOut = 1;
                        } else {
                            *amountOut = FUN_00262260(effect, (s16)playerMaximum, source);
                        }
                    }
                }
                result = 0;
            }
        } else {
            if (flagWordTestBit(unit, 1)) {
                if (preview == 0) {
                    objectFlagsClear(unit, 2);
                    if (flagWordTestBit(unit, 3)) {
                        unit->hp = unit->hp + 1;
                    } else {
                        unit->hp = FUN_00262260(effect, (s16)unitMaximum, source) + unit->hp;
                    }
                    if (unit->hp <= 0) {
                        unit->hp = 1;
                    }
                } else {
                    if (amountOut != NULL) {
                        if (flagWordTestBit(unit, 3)) {
                            *amountOut = 1;
                        } else {
                            *amountOut = FUN_00262260(effect, (s16)unitMaximum, source);
                        }
                    }
                }
                result = 0;
            }
        }
    } else {
        if (player != NULL) {
            if (playerPadTestBit(1)) {
                return 1;
            }
        } else {
            if (flagWordTestBit(unit, 1)) {
                return 1;
            }
        }
        if (player != NULL) {
            u32 cured = effectFilterChannelsByCategory(effect, player->ailments);
            if (cured != 0) {
                if (preview == 0) {
                    padClearBits((u16)cured);
                }
                result = 0;
            }
            s32 amount = FUN_00262260(effect, (s16)playerMaximum, source);
            if (amount != 0) {
                if (playerPadTestBit(3)) {
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
            u32 cured = effectFilterChannelsByCategory(effect, unit->ailments);
            if (cured != 0) {
                if (preview == 0) {
                    objectFlagsClear(unit, (u16)cured);
                }
                result = 0;
            }
            s32 amount = FUN_00262260(effect, (s16)unitMaximum, source);
            if (amount != 0) {
                if (flagWordTestBit(unit, 3)) {
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
