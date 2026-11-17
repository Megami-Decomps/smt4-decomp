/* NON_MATCHING: retail evaluates the two target kinds (player, slot unit) with the combination logic inlined twice in a different order and keeps the status mask in a packed local; the result is the same. */
#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

/* The item record (only the fields read here). */
typedef struct UseItem {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 hpAmount;
    /* 0x36 */ u16 mpAmount;
    /* 0x38 */ u8 hpPercent;
    /* 0x39 */ u8 mpPercent;
    /* 0x3A */ u8 statusKind;           /* low 7 bits: the status cured */
    /* 0x3B */ u8 unk3b[0x2D];
    /* 0x68 */ u32 flags;               /* 4: revives (everything) */
} UseItem;

SlotRecordA *btlMainGetUnk14(void);
s32 btlIsDefeatSuppressed(void);
s16 FUN_002b4dcc(SlotRecordA *unit);
s16 FUN_002b4e7c(void);
void FUN_003ff524(u32 *mask, s32 kind);

/* Evens out what the item gives (bit 1 hp, bit 2 mp, bit 4 status) against what the unit can
 * use: returns 3 when they differ, so the item would be wasted, else 0. `unit` is the slot index
 * (negative: the player, or the battle unit), `fromSave` selects the save slot data. */
u32 FUN_00400284(s32 unit, s32 fromSave, UseItem *item, u32 statusMask)
{
    u32 gives = 0;
    u32 can = 0;

    if (statusMask != 0) {
        gives = item->hpPercent != 0 || item->hpAmount != 0;
        if (item->mpAmount != 0) {
            gives |= 2;
        }
        if (item->mpPercent != 0) {
            gives |= 2;
        }
        if ((item->statusKind & 0x7F) != 0) {
            gives |= 4;
        }
    }
    if ((item->flags & 4) != 0) {
        gives = 7;
    }
    if ((item->statusKind & 0x7F) == 1) {
        gives |= 4;
    }
    u32 mask = statusMask;

    if (unit >= 0 || btlIsDefeatSuppressed() != 0) {
        SlotRecordA *target;

        if (unit < 0 && btlIsDefeatSuppressed() != 0) {
            target = btlMainGetUnk14();
        } else if (fromSave != 0) {
            target = gameGetSaveSlotData(unit);
        } else {
            target = gameGetSlotRecord(unit);
        }
        if (target == NULL) {
            return 3;
        }
        if ((gives & 1) != 0 && (target->ailments & 0x402) == 0 && FUN_002b4dcc(target) != target->hp) {
            can = 1;
        }
        if ((gives & 2) != 0 && (target->ailments & 0x402) == 0 && target->mp != target->maxMp) {
            can |= 2;
        }
        if ((gives & 3) == 3 && (can & 3) != 0) {
            can |= 3;
        }
        if ((gives & 4) == 0) {
            if ((item->flags & 4) != 0 && can != 0) {
                can = 7;
            }
            return gives != can ? 3 : 0;
        }
        mask &= 0xFFFF0000;
        FUN_003ff524(&mask, (item->flags & 4) != 0 ? 0x25 : (item->statusKind & 0x7F));
        mask = (u16)mask & target->ailments;
        if ((u16)mask != 0) {
            can |= 4;
        }
    } else {
        PlayerDataA *player = gameGetPlayerData();

        if ((gives & 1) != 0 && (player->ailments & 2) == 0 && (u32)FUN_002b4e7c() != (u16)player->hp) {
            can = 1;
        }
        if ((gives & 2) != 0 && (player->ailments & 2) == 0 && player->mp != player->maxMp) {
            can |= 2;
        }
        if ((gives & 3) == 3 && (can & 3) != 0) {
            can |= 3;
        }
        if ((gives & 4) != 0) {
            mask &= 0xFFFF0000;
            FUN_003ff524(&mask, (item->flags & 4) != 0 ? 0x25 : (item->statusKind & 0x7F));
            mask = (u16)mask & player->ailments;
            if ((u16)mask != 0) {
                can |= 4;
            }
        }
    }
    if ((item->flags & 4) != 0 && can != 0) {
        can = 7;
    }
    return gives != can ? 3 : 0;
}

}
