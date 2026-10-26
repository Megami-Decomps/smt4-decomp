/* NON_MATCHING: register allocation differs (retail keeps the source and effect arguments in their stack home slots across the calls) */
#include "battle/BtlMainAccess.h"
#include "common.h"

/* The player's pad-side record (only the fields used here). */
struct RestorePlayer {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ s16 maximum;
    /* 0x1e */ u8 unk1e[0xc];
    /* 0x2a */ s16 current;
    /* 0x2c */ u8 unk2c[0x46];
    /* 0x72 */ u16 ailments;
};

/* A party unit's record (only the fields used here). */
struct RestoreUnit {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ s16 maximum;
    /* 0x10 */ u8 unk10[0x1a];
    /* 0x2a */ s16 current;
    /* 0x2c */ u8 unk2c[0x18];
    /* 0x44 */ u16 ailments;
};

/* The effect being applied (only the type byte). */
struct RestoreEffect {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
};

extern "C" {
RestorePlayer *gameGetPlayerData(void);
RestoreUnit *gameGetUnitRecord(s32 unit);
s32 btlSourceGetMaxHp(RestorePlayer *player);
s32 btlLinkGetMaxHp(RestoreUnit *unit);
s32 flagWordTestBit(RestoreUnit *unit, u32 bit);
void objectFlagsClear(RestoreUnit *unit, u32 bits);
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
    RestorePlayer *player = NULL;
    RestoreUnit *unit = NULL;
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
            playerMaximum = player->maximum;
        } else {
            playerMaximum = btlSourceGetMaxHp(player);
        }
    }
    if (unit != NULL) {
        if (reinterpret_cast<s32>(btlGetMainState()) == 0) {
            unitMaximum = unit->maximum;
        } else {
            unitMaximum = btlLinkGetMaxHp(unit);
        }
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
                    value = player->current + 1;
                } else {
                    value = FUN_00262260(effect, (s16)playerMaximum, source) + player->current;
                }
                player->current = value;
                if (value <= 0) {
                    player->current = 1;
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
                value = unit->current + 1;
            } else {
                value = FUN_00262260(effect, (s16)unitMaximum, source) + unit->current;
            }
            unit->current = value;
            if (value <= 0) {
                unit->current = 1;
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
            s32 current = unit->current;
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
                unit->current = current + amount;
                if (unit->current <= unitMaximum) {
                    unitMaximum = unit->current;
                }
                unit->current = unitMaximum;
                return result;
            }
        }
        if (preview != 0) {
            return result;
        }
        if (unit->current <= unitMaximum) {
            unitMaximum = unit->current;
        }
        unit->current = unitMaximum;
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
        s32 current = player->current;
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
            player->current = current + amount;
            result = 0;
            if (player->current <= playerMaximum) {
                playerMaximum = player->current;
            }
            player->current = playerMaximum;
            return result;
        }
    }
    if (preview != 0) {
        return result;
    }
    if (player->current <= playerMaximum) {
        playerMaximum = player->current;
    }
    player->current = playerMaximum;
    return result;
}

} /* extern "C" */
