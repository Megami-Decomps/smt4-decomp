/* NON_MATCHING: the control flow, calls, constants and data accesses are retail's (171 lines by shape). What
 * differs: the frame is 8 bytes larger (retail keeps the unit's maximum HP at sp+0 and the ailment table at
 * sp+0x14 of a 44-byte frame); in the revive and plain branches retail assigns the player's maximum HP to its
 * register in each arm where the build funnels it through r0; the percentage product and the /100 constant
 * sit in each other's registers; the two MP tests compare with the operands swapped; the unit's cured mask is
 * moved to r1 with the test (movs) and its clear is a conditional call; and bitsAt60Test's u8 bit parameter
 * narrows the table entry (retail passes the u16 as loaded: the parameter is wider than the shared
 * prototype says). */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleContextCommandsA.h"
#include "mapnavi/naviMain.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "util/BitsAndBytes_Shard004B.h"
#include "util/BitsAndBytes_VariantE_Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"

struct BtlUnitRecordA;

/* Bits of PlayerDataA.ailments and SlotRecordA.ailments. */
enum {
    AILMENT_BIT_DOWN = 1,      /* 0 HP */
    AILMENT_BIT_KEPT = 2,      /* survives a full restore */
    AILMENT_BIT_WEAK_HEAL = 3, /* healing restores a single point */
    AILMENT_BIT_NO_ITEMS = 10
};

/* ConsumableRecordA.cureKind values that revive a downed member. */
enum {
    CURE_KIND_REVIVE = 1,
    CURE_KIND_REVIVE_ALL = 24
};

enum {
    ITEM_FLAG_FULL_RESTORE = 4, /* ConsumableRecordA.flags */
    ITEM_USE_SECONDARY = 2      /* ConsumableRecordA.useFlags: the item has secondary effects */
};

extern "C" {
s32 btlMainIsRunning(void);
u32 btlMainGetUnk14(void);
u32 btlUnitMaxHp(u32 sourceId);
s32 btlPlayerMaxHp(BtlUnitRecordA *record);
void playerSyncPair2A(void);
void playerClearFlagMask(u16 mask);
s32 unitRecordResetCurrentValues(SlotRecordA *record);
u8 FUN_003b7430(s32 slot, ConsumableRecordA *item, s32 preview);
u16 itemCuredAilments(const ConsumableRecordA *item, u16 ailments);
s32 playerGetMaxMp(void);
u32 itemApplySecondaryEffects(s32 target, ConsumableRecordA *effect, s32 check, s32 preview);

/* The player's maximum HP: the battle's value while one runs. */
static __inline s32 itemPlayerMaxHp(PlayerDataA *player)
{
    s32 maxHp;
    if (player == NULL) {
        maxHp = 0;
    } else if (btlGetMainState() == NULL) {
        maxHp = player->maxHp;
    } else {
        maxHp = btlPlayerMaxHp((BtlUnitRecordA *)player);
    }
    return maxHp;
}

/* A unit's maximum HP: the battle's value while one runs. */
static __inline s32 itemUnitMaxHp(SlotRecordA *unit)
{
    s32 maxHp;
    if (unit == NULL) {
        maxHp = 0;
    } else if (btlGetMainState() != NULL) {
        maxHp = btlUnitMaxHp((u32)unit);
    } else {
        maxHp = recordGetScaledMaximum(unit);
    }
    return maxHp;
}

/* The HP an item restores: its fixed amount, else its percentage of the maximum (at least 1). */
static __inline s32 itemHpRestoreAmount(const ConsumableRecordA *item, s32 maxHp)
{
    s32 amount;
    if (item->hpAmount != 0) {
        return item->hpAmount;
    }
    if (item->hpPercent == 0) {
        return 0;
    }
    amount = item->hpPercent * maxHp / 100;
    if (amount == 0) {
        amount = 1;
    }
    return amount;
}

/* The MP an item restores, likewise. */
static __inline s32 itemMpRestoreAmount(const ConsumableRecordA *item, s32 maxMp)
{
    s32 amount;
    if (item->mpAmount != 0) {
        return item->mpAmount;
    }
    if (item->mpPercent == 0) {
        return 0;
    }
    amount = item->mpPercent * maxMp / 100;
    if (amount == 0) {
        amount = 1;
    }
    return amount;
}

/* Uses `item` on the player (slot < 0; in a battle with defeat suppressed, on the fixed party's leader) or
 * on the unit of a slot. With `preview` set nothing is written and the HP and MP it would restore go to
 * `hpOut` and `mpOut`. Returns 0 when the item has (or would have) an effect, 1 otherwise. */
s32 itemApplyToMember(s32 slot, ConsumableRecordA *item, s32 preview, u32 *hpOut, u32 *mpOut)
{
    PlayerDataA *player;
    SlotRecordA *unit;
    s32 result;
    s32 playerMaxHp;
    s32 unitMaxHp;
    s32 amount;
    s32 i;

    if (item->skillId != 0) {
        return 1;
    }
    player = NULL;
    unit = NULL;
    if (slot < 0) {
        if (btlMainIsRunning() != 0 && btlIsDefeatSuppressed() != 0) {
            unit = (SlotRecordA *)btlMainGetUnk14();
        } else {
            player = gameGetPlayerData();
        }
    } else {
        unit = gameGetSlotRecord(slot);
        if (unit == NULL) {
            return 1;
        }
        if (bitsAt60Test(unit, AILMENT_BIT_NO_ITEMS)) {
            return 1;
        }
    }
    result = 1;
    if (item != NULL &&
        ((item->cureKind & 0x7f) == CURE_KIND_REVIVE_ALL || (item->cureKind & 0x7f) == CURE_KIND_REVIVE)) {
        playerMaxHp = itemPlayerMaxHp(player);
        unitMaxHp = itemUnitMaxHp(unit);
        if (player != NULL) {
            if (playerHasFlagBit(AILMENT_BIT_DOWN)) {
                if (preview != 0) {
                    if (hpOut != NULL) {
                        if (playerHasFlagBit(AILMENT_BIT_WEAK_HEAL)) {
                            *hpOut = 1;
                        } else {
                            *hpOut = itemHpRestoreAmount(item, (s16)playerMaxHp);
                        }
                    }
                } else {
                    playerClearFlagMask(AILMENT_BIT_KEPT);
                    if (playerHasFlagBit(AILMENT_BIT_WEAK_HEAL)) {
                        player->hp = player->hp + 1;
                    } else {
                        player->hp = itemHpRestoreAmount(item, (s16)playerMaxHp) + player->hp;
                    }
                    if (player->hp <= 0) {
                        player->hp = 1;
                    }
                }
                result = 0;
            }
        } else {
            if (bitsAt60Test(unit, AILMENT_BIT_DOWN)) {
                if (preview != 0) {
                    if (hpOut != NULL) {
                        if (bitsAt60Test(unit, AILMENT_BIT_WEAK_HEAL)) {
                            *hpOut = 1;
                        } else {
                            *hpOut = itemHpRestoreAmount(item, (s16)unitMaxHp);
                        }
                    }
                } else {
                    bitsAt60Clear(unit, AILMENT_BIT_KEPT);
                    if (bitsAt60Test(unit, AILMENT_BIT_WEAK_HEAL)) {
                        unit->hp = unit->hp + 1;
                    } else {
                        unit->hp = itemHpRestoreAmount(item, (s16)unitMaxHp) + unit->hp;
                    }
                    if (unit->hp <= 0) {
                        unit->hp = 1;
                    }
                }
                result = 0;
            }
        }
    } else if (item->flags & ITEM_FLAG_FULL_RESTORE) {
        /* The ailment bits a full restore clears. */
        u16 ailmentBits[10] = {1, 5, 6, 7, 8, 9, 11, 12, 13};
        bool needed;

        playerMaxHp = itemPlayerMaxHp(player);
        unitMaxHp = itemUnitMaxHp(unit);
        needed = false;
        if (player != NULL) {
            for (i = 0; i < 10; i++) {
                if (playerHasFlagBit(ailmentBits[i])) {
                    result = 0;
                    needed = true;
                    break;
                }
            }
            if (player->hp < playerMaxHp) {
                result = 0;
                needed = true;
            }
            if (playerGetMaxMp() > player->mp) {
                result = 0;
                needed = true;
            }
            if (preview != 0) {
                if (hpOut != NULL) {
                    *hpOut = playerMaxHp - player->hp;
                }
                if (mpOut != NULL) {
                    *mpOut = playerGetMaxMp() - player->mp;
                }
            } else if (needed) {
                playerSyncPair2A();
            }
        } else {
            for (i = 0; i < 10; i++) {
                if (bitsAt60Test(unit, ailmentBits[i])) {
                    result = 0;
                    needed = true;
                    break;
                }
            }
            if (unit->hp < unitMaxHp) {
                result = 0;
                needed = true;
            }
            if (unit->mp < unit->maxMp) {
                result = 0;
                needed = true;
            }
            if (preview != 0) {
                if (hpOut != NULL) {
                    *hpOut = unitMaxHp - unit->hp;
                }
                if (mpOut != NULL) {
                    *mpOut = unit->maxMp - unit->mp;
                }
            } else if (needed) {
                if (bitsAt60Test(unit, AILMENT_BIT_KEPT)) {
                    unitRecordResetCurrentValues(unit);
                    bitsAt60Set(unit, AILMENT_BIT_KEPT);
                } else {
                    unitRecordResetCurrentValues(unit);
                }
            }
        }
    } else {
        u16 cured;
        s32 current;
        s32 missing;

        if (player != NULL) {
            if (playerHasFlagBit(AILMENT_BIT_DOWN)) {
                return 1;
            }
        } else {
            if (bitsAt60Test(unit, AILMENT_BIT_DOWN)) {
                return 1;
            }
        }
        if (item->useFlags & ITEM_USE_SECONDARY) {
            result = FUN_003b7430(slot, item, preview);
        }
        playerMaxHp = itemPlayerMaxHp(player);
        unitMaxHp = itemUnitMaxHp(unit);
        if (player != NULL) {
            cured = itemCuredAilments(item, player->ailments);
            if (cured != 0) {
                if (preview == 0) {
                    playerClearFlagMask(cured);
                }
                result = 0;
            }
            amount = itemHpRestoreAmount(item, (s16)playerMaxHp);
            if (amount != 0) {
                if (playerHasFlagBit(AILMENT_BIT_WEAK_HEAL) && amount > 1) {
                    amount = 1;
                }
                current = player->hp;
                if (current < playerMaxHp) {
                    if (preview == 0) {
                        player->hp = current + amount;
                    } else if (hpOut != NULL) {
                        missing = playerMaxHp - current;
                        if (amount > missing) {
                            amount = missing;
                        }
                        *hpOut = amount;
                    }
                    result = 0;
                }
            }
            amount = itemMpRestoreAmount(item, player->maxMp);
            if (amount != 0) {
                if (playerHasFlagBit(AILMENT_BIT_WEAK_HEAL) && amount > 1) {
                    amount = 1;
                }
                current = player->mp;
                if (current < player->maxMp) {
                    if (preview == 0) {
                        player->mp = current + amount;
                    } else if (mpOut != NULL) {
                        missing = player->maxMp - current;
                        if (amount > missing) {
                            amount = missing;
                        }
                        *mpOut = amount;
                    }
                    result = 0;
                }
            }
            player->hp = (player->hp <= playerMaxHp) ? player->hp : playerMaxHp;
            player->mp = (player->mp <= player->maxMp) ? player->mp : player->maxMp;
        } else {
            cured = itemCuredAilments(item, unit->ailments);
            if (cured != 0) {
                if (preview == 0) {
                    bitsAt60Clear(unit, cured);
                }
                result = 0;
            }
            amount = itemHpRestoreAmount(item, (s16)unitMaxHp);
            if (amount != 0) {
                if (bitsAt60Test(unit, AILMENT_BIT_WEAK_HEAL) && amount > 1) {
                    amount = 1;
                }
                current = unit->hp;
                if (current < unitMaxHp) {
                    if (preview == 0) {
                        unit->hp = current + amount;
                    } else if (hpOut != NULL) {
                        missing = unitMaxHp - current;
                        if (amount > missing) {
                            amount = missing;
                        }
                        *hpOut = amount;
                    }
                    result = 0;
                }
            }
            amount = itemMpRestoreAmount(item, unit->maxMp);
            if (amount != 0) {
                if (bitsAt60Test(unit, AILMENT_BIT_WEAK_HEAL) && amount > 1) {
                    amount = 1;
                }
                current = unit->mp;
                if (current < unit->maxMp) {
                    if (preview == 0) {
                        unit->mp = current + amount;
                    } else if (mpOut != NULL) {
                        missing = unit->maxMp - current;
                        if (amount > missing) {
                            amount = missing;
                        }
                        *mpOut = amount;
                    }
                    result = 0;
                }
            }
            unit->hp = (unit->hp > unitMaxHp) ? unitMaxHp : unit->hp;
            unit->mp = (unit->mp > unit->maxMp) ? unit->maxMp : unit->mp;
        }
    }
    if (item->useFlags & ITEM_USE_SECONDARY) {
        result = itemApplySecondaryEffects(slot, item, result, preview);
    }
    return result;
}
}
