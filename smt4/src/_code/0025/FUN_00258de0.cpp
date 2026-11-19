/* NON_MATCHING: register allocation differs (retail keeps the source and effect arguments in their stack home slots across the calls) */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

/* The effect being applied (only the type byte). */
struct RestoreEffect {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
};

extern "C" {
s32 btlSourceGetMaxHp(PlayerDataIV *player);
s32 btlLinkGetMaxHp(StatBlock *unit);
s32 flagWordTestBit(StatBlock *unit, u32 bit);
void objectFlagsClear(StatBlock *unit, u32 bits);
s32 playerPadTestBit(u32 bit);
void padClearBits(u32 bits);
s32 FUN_001ad4c0(RestoreEffect *effect);
s32 FUN_00262260(RestoreEffect *effect, s32 maximum, u32 source);
u32 effectFilterChannelsByCategory(RestoreEffect *effect, u16 ailments);

/* Applies a restore effect to the player (target < 0) or to a party unit. With `preview` set
   nothing is written: the amount that would be restored goes to `amountOut`. Returns 0 when the
   effect did something, 1 when the target is not affected. */
u32 FUN_00258de0(u32 source, s32 target, RestoreEffect *effect, s32 preview, s32 *amountOut)
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
        if (reinterpret_cast<s32>(btlGetMainState()) == 0) {
            playerMaximum = player->maxHp;
        } else {
            playerMaximum = btlSourceGetMaxHp(player);
        }
    }
    if (unit != NULL) {
        unitMaximum = reinterpret_cast<s32>(btlGetMainState()) == 0
            ? unit->maxHp
            : btlLinkGetMaxHp(unit);
    }

    if (FUN_001ad4c0(effect) != 0) {
        if (player != NULL) {
            if (effect->kind == 7 || !playerPadTestBit(1)) {
                return 1;
            }
            if (preview == 0) {
                padClearBits(2);
                s16 value;
                if (playerPadTestBit(3)) {
                    value = player->hp + 1;
                } else {
                    value = FUN_00262260(effect, (s16)playerMaximum, source) + player->hp;
                }
                player->hp = value;
                if (value <= 0) {
                    player->hp = 1;
                }
                return 0;
            }
            if (amountOut == NULL) {
                return 0;
            }
            if (!playerPadTestBit(3)) {
                *amountOut = FUN_00262260(effect, (s16)playerMaximum, source);
                return 0;
            }
            *amountOut = 1;
            return 0;
        }
        if (!flagWordTestBit(unit, 1)) {
            return 1;
        }
        if (preview == 0) {
            objectFlagsClear(unit, 2);
            s16 value;
            if (flagWordTestBit(unit, 3)) {
                value = unit->hp + 1;
            } else {
                value = FUN_00262260(effect, (s16)unitMaximum, source) + unit->hp;
            }
            unit->hp = value;
            if (value <= 0) {
                unit->hp = 1;
            }
            return 0;
        }
        if (amountOut == NULL) {
            return 0;
        }
        if (!flagWordTestBit(unit, 3)) {
            *amountOut = FUN_00262260(effect, (s16)unitMaximum, source);
            return 0;
        }
        *amountOut = 1;
        return 0;
    }

    if (player == NULL) {
        if (flagWordTestBit(unit, 1)) {
            return 1;
        }
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
            s32 current = unit->hp;
            if (current < unitMaximum) {
                if (preview != 0) {
                    if (amountOut == NULL) {
                        return 0;
                    }
                    s32 room = unitMaximum - current;
                    if (amount > room) {
                        amount = room;
                    }
                    *amountOut = amount;
                    return 0;
                }
                result = 0;
                unit->hp = current + amount;
                if (unit->hp <= unitMaximum) {
                    unitMaximum = unit->hp;
                }
                unit->hp = unitMaximum;
                return result;
            }
        }
        if (preview != 0) {
            return result;
        }
        if (unit->hp <= unitMaximum) {
            unitMaximum = unit->hp;
        }
        unit->hp = unitMaximum;
        return result;
    }

    if (playerPadTestBit(1)) {
        return 1;
    }
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
        s32 current = player->hp;
        if (current < playerMaximum) {
            if (preview != 0) {
                if (amountOut == NULL) {
                    return 0;
                }
                s32 room = playerMaximum - current;
                if (amount > room) {
                    amount = room;
                }
                *amountOut = amount;
                return 0;
            }
            player->hp = current + amount;
            result = 0;
            if (player->hp <= playerMaximum) {
                playerMaximum = player->hp;
            }
            player->hp = playerMaximum;
            return result;
        }
    }
    if (preview != 0) {
        return result;
    }
    if (player->hp <= playerMaximum) {
        playerMaximum = player->hp;
    }
    player->hp = playerMaximum;
    return result;
}

} /* extern "C" */
