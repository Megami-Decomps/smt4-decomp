/* NON_MATCHING: retail evaluates the two target kinds (player, slot unit) with the combination logic inlined twice in a different order and keeps the status mask in a packed local; the result is the same. */
#include "common.h"

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

/* A target unit (a party slot record or the player): the fields that differ are given per kind. */
typedef struct SlotUnit {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2e[0x32];
    /* 0x60 */ u16 flags;               /* 0x400/0x402: cannot be healed */
} SlotUnit;

typedef struct PlayerUnit {
    /* 0x00 */ u8 unk00[0x1E];
    /* 0x1E */ s16 maxMp;
    /* 0x20 */ u8 unk20[0xA];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2e[0x30];
    /* 0x5E */ u16 flags;
} PlayerUnit;

PlayerUnit *gameGetPlayerData(void);
SlotUnit *gameGetSlotRecord(s32 index);
SlotUnit *gameGetSaveSlotData(void);
SlotUnit *btlMainGetUnk14(void);
s32 FUN_00291e14(void);
s16 FUN_002b4dcc(SlotUnit *unit);
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

    if (unit >= 0 || FUN_00291e14() != 0) {
        SlotUnit *target;

        if (unit < 0 && FUN_00291e14() != 0) {
            target = btlMainGetUnk14();
        } else if (fromSave != 0) {
            target = gameGetSaveSlotData();
        } else {
            target = gameGetSlotRecord(unit);
        }
        if (target == NULL) {
            return 3;
        }
        if ((gives & 1) != 0 && (target->flags & 0x402) == 0 && FUN_002b4dcc(target) != target->hp) {
            can = 1;
        }
        if ((gives & 2) != 0 && (target->flags & 0x402) == 0 && target->mp != target->maxMp) {
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
        mask = (u16)mask & target->flags;
        if ((u16)mask != 0) {
            can |= 4;
        }
    } else {
        PlayerUnit *player = gameGetPlayerData();

        if ((gives & 1) != 0 && (player->flags & 2) == 0 && (u32)FUN_002b4e7c() != (u16)player->hp) {
            can = 1;
        }
        if ((gives & 2) != 0 && (player->flags & 2) == 0 && player->mp != player->maxMp) {
            can |= 2;
        }
        if ((gives & 3) == 3 && (can & 3) != 0) {
            can |= 3;
        }
        if ((gives & 4) != 0) {
            mask &= 0xFFFF0000;
            FUN_003ff524(&mask, (item->flags & 4) != 0 ? 0x25 : (item->statusKind & 0x7F));
            mask = (u16)mask & player->flags;
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
