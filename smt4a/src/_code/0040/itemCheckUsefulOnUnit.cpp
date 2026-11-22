#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

SlotRecordA *btlMainGetUnk14(void);
s32 btlIsDefeatSuppressed(void);
s32 FUN_002b4dcc(SlotRecordA *record);
s32 FUN_002b4e7c(PlayerDataA *record);
void FUN_003ff524(u16 *flags, s32 kind);

/* Evens out what the item gives (bit 1 hp, bit 2 mp, bit 4 status) against what the unit can
 * use: returns 3 when they differ, so the item would be wasted, else 0. `unit` is the slot index
 * (negative: the player, or the battle unit), `fromSave` selects the save slot data; the hp and mp
 * restores only count when `checkRestores` is set. */
u32 itemCheckUsefulOnUnit(s32 unit, s32 fromSave, const ConsumableRecordA *item, u32 checkRestores)
{
    u32 result = 0;
    u32 gives = 0;
    u32 can = 0;
    if (checkRestores != 0) {
        if (item->hpAmount != 0) {
            gives = 1;
        }
        if (item->hpPercent != 0) {
            gives |= 1;
        }
        if (item->mpAmount != 0) {
            gives |= 2;
        }
        if (item->mpPercent != 0) {
            gives |= 2;
        }
        if ((item->cureKind & 0x7F) != 0) {
            gives |= 4;
        }
    }
    /* A reviving item gives everything: hp, mp and status. */
    if ((item->flags & 4) != 0) {
        gives |= 1;
        gives |= 2;
        gives |= 4;
    }
    if ((item->cureKind & 0x7F) == 1) {
        gives |= 4;
    }
    if (unit < 0 && btlIsDefeatSuppressed() == 0) {
        PlayerDataA *player = gameGetPlayerData();
        if ((gives & 1) != 0 && (player->ailments & 2) == 0 && FUN_002b4e7c(player) != player->hp) {
            can = 1;
        }
        if ((gives & 2) != 0 && (player->ailments & 2) == 0 && player->mp != player->maxMp) {
            can |= 2;
        }
        if ((gives & 1) != 0 && (gives & 2) != 0) {
            if ((can & 1) != 0 && (can & 2) == 0) {
                can |= 2;
            }
            if ((can & 1) == 0 && (can & 2) != 0) {
                can |= 1;
            }
        }
        if ((gives & 4) != 0) {
            if ((item->flags & 4) != 0) {
                u16 curable = 0;
                FUN_003ff524(&curable, 0x25);
                if ((curable & player->ailments) != 0) {
                    can |= 4;
                }
            } else {
                u16 curable = 0;
                FUN_003ff524(&curable, item->cureKind & 0x7F);
                if ((curable & player->ailments) != 0) {
                    can |= 4;
                }
            }
        }
    } else {
        SlotRecordA *member;
        if (unit < 0 && btlIsDefeatSuppressed() != 0) {
            member = btlMainGetUnk14();
        } else if (fromSave == 0) {
            member = gameGetSlotRecord(unit);
        } else {
            member = gameGetSaveSlotData(unit);
        }
        if (member == NULL) {
            return 3;
        }
        if ((gives & 1) != 0 && (member->ailments & 0x402) == 0 && FUN_002b4dcc(member) != member->hp) {
            can = 1;
        }
        if ((gives & 2) != 0 && (member->ailments & 0x402) == 0 && member->mp != member->maxMp) {
            can |= 2;
        }
        if ((gives & 1) != 0 && (gives & 2) != 0) {
            if ((can & 1) != 0 && (can & 2) == 0) {
                can |= 2;
            }
            if ((can & 1) == 0 && (can & 2) != 0) {
                can |= 1;
            }
        }
        if ((gives & 4) != 0) {
            if ((item->flags & 4) != 0) {
                u16 curable = 0;
                FUN_003ff524(&curable, 0x25);
                if ((curable & member->ailments) != 0) {
                    can |= 4;
                }
            } else {
                u16 curable = 0;
                FUN_003ff524(&curable, item->cureKind & 0x7F);
                if ((curable & member->ailments) != 0) {
                    can |= 4;
                }
            }
        }
    }
    if ((item->flags & 4) != 0 && (can & 7) != 0) {
        can |= 1;
        can |= 2;
        can |= 4;
    }
    if (gives != can) {
        result = 3;
    }
    return result;
}

}
