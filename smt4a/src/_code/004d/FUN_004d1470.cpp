/* NON_MATCHING: typed rewrite of the status-flag editor item handler, the smt4a variant of FUN_003c33c8 (426 vs 418 rows); retail tests the two filters with ldrbeq/cmpeq, hoists &battle->actions into r8 and reads the 64-bit group mask with ldrd/ldr in another order. */
#include "common.h"
#include "battle/BtlMainAccess.h"

/* The status-flag editor screen: its list box, the filters and the flag mask being edited. */
struct StatusFlagEditor {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 onlyAllies;        /* the filter of the entries to change: allies */
    /* 0x15 */ u8 onlyEnemies;       /* enemies */
    /* 0x16 */ u8 includeParty;      /* also change the party roster */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u32 mask;
    /* 0x1C */ s32 entryIndex;       /* the single entry to change when no filter is on */
};

/* An entry of the battle: its group mask and the actions that belong to it. */
struct StatusFlagEntry {
    /* 0x00 */ u64 groupMask;
    /* 0x08 */ s16 actions[50];
};

/* An action record, as far as its size goes. */
struct StatusFlagAction {
    u8 unk00[0x1d0];
};

/* The battle state, as far as the editor touches it. */
struct StatusFlagBattle {
    /* 0x0000 */ u8 unk0000[0x1ed4];
    /* 0x1ED4 */ StatusFlagAction *actions;
};

extern "C" {
extern u32 g_btlScriptUnit;
extern u64 DAT_00571618;

s32 listBoxItemHasOwner(u32 listBox, u32 item);
u32 asdListBoxGetSelectedItemId(u32 listBox);
u32 *asdListBoxGetIntValuePtr(u32 listBox, u32 item);
s32 slotIsActive(s32 a, u32 b);
StatusFlagEntry *FUN_003e83b4(StatusFlagBattle *battle, s32 index, u32 mode);
void *btlUnitGet(u32 reference);
void FUN_004fdb18(s32 a, void *unit, StatusFlagAction *action, u32 mask, s32 b);
void FUN_004fcffc(s32 a, void *unit, StatusFlagAction *action, u32 mask);
u8 *gameGetSlotTable(void);
void *gameGetSlotRecord(s32 slot);
s32 FUN_004bd0d8(void *record);
void bitsAt60Set(void *record, s32 bit);
void bitsAt60Clear(void *record, u32 flags);

/* Adds the flag mask to every action of an entry. */
static void addEntryFlags(StatusFlagBattle *battle, StatusFlagEntry *entry, u32 mask)
{
    for (s32 slot = 0; slot < 50; ++slot) {
        s32 action = entry->actions[slot];
        if (action >= 0)
            FUN_004fdb18(0, btlUnitGet(g_btlScriptUnit), &battle->actions[action], mask, 1);
    }
}

/* Removes the flag mask from every action of an entry. */
static void removeEntryFlags(StatusFlagBattle *battle, StatusFlagEntry *entry, u32 mask)
{
    for (s32 slot = 0; slot < 50; ++slot) {
        s32 action = entry->actions[slot];
        if (action >= 0)
            FUN_004fcffc(0, btlUnitGet(g_btlScriptUnit), &battle->actions[action], mask);
    }
}

void FUN_004d1470(StatusFlagEditor *screen, StatusFlagBattle *battle)
{
    u32 item = asdListBoxGetSelectedItemId(screen->listBox);
    s32 index = 0;
    switch (item) {
    case 0:
        screen->entryIndex = *asdListBoxGetIntValuePtr(screen->listBox, item);
        return;
    case 1:
        screen->onlyAllies = listBoxItemHasOwner(screen->listBox, item);
        return;
    case 2:
        screen->onlyEnemies = listBoxItemHasOwner(screen->listBox, item);
        return;
    case 3:
        screen->includeParty = listBoxItemHasOwner(screen->listBox, item);
        return;
    case 4:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x10;
        else
            screen->mask &= ~0x10u;
        return;
    case 5:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x2;
        else
            screen->mask &= ~0x2u;
        return;
    case 6:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x20;
        else
            screen->mask &= ~0x20u;
        return;
    case 7:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x40;
        else
            screen->mask &= ~0x40u;
        return;
    case 8:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x80;
        else
            screen->mask &= ~0x80u;
        return;
    case 9:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x100;
        else
            screen->mask &= ~0x100u;
        return;
    case 10:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x200;
        else
            screen->mask &= ~0x200u;
        return;
    case 11:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x400;
        else
            screen->mask &= ~0x400u;
        return;
    case 12:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x8;
        else
            screen->mask &= ~0x8u;
        return;
    case 13:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x800;
        else
            screen->mask &= ~0x800u;
        return;
    case 14:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x1000;
        else
            screen->mask &= ~0x1000u;
        return;
    case 15:
        if (listBoxItemHasOwner(screen->listBox, item) != 0)
            screen->mask |= 0x2000;
        else
            screen->mask &= ~0x2000u;
        return;
    case 16:
        if (slotIsActive(0, item) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            do {
                StatusFlagEntry *entry = FUN_003e83b4(battle, index, 1);
                if (entry != NULL && (screen->onlyAllies == 0 || (DAT_00571618 & entry->groupMask) == 0) &&
                    (screen->onlyEnemies == 0 || (DAT_00571618 & entry->groupMask) != 0))
                    addEntryFlags(battle, entry, screen->mask);
                ++index;
            } while (index < 109);
        }
        if (screen->includeParty != 0) {
            u8 count = *(gameGetSlotTable() + 0x1ca3);
            for (s32 slot = 0; slot < count; ++slot) {
                s8 unit = reinterpret_cast<s8 *>(gameGetSlotTable())[slot + 0x1c88];
                if (unit >= 0) {
                    void *record = gameGetSlotRecord(unit);
                    if (record != NULL && FUN_004bd0d8(record) == 0) {
                        for (s32 bit = 0; bit < 14; ++bit) {
                            if ((screen->mask & (1 << bit)) != 0)
                                bitsAt60Set(record, bit);
                        }
                    }
                }
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            StatusFlagEntry *entry = FUN_003e83b4(battle, screen->entryIndex, 1);
            if (entry != NULL)
                addEntryFlags(battle, entry, screen->mask);
        }
        return;
    case 17:
        if (slotIsActive(0, item) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            do {
                StatusFlagEntry *entry = FUN_003e83b4(battle, index, 1);
                if (entry != NULL && (screen->onlyAllies == 0 || (DAT_00571618 & entry->groupMask) == 0) &&
                    (screen->onlyEnemies == 0 || (DAT_00571618 & entry->groupMask) != 0))
                    removeEntryFlags(battle, entry, screen->mask);
                ++index;
            } while (index < 109);
        }
        if (screen->includeParty != 0) {
            u8 count = *(gameGetSlotTable() + 0x1ca3);
            for (s32 slot = 0; slot < count; ++slot) {
                s8 unit = reinterpret_cast<s8 *>(gameGetSlotTable())[slot + 0x1c88];
                if (unit >= 0) {
                    void *record = gameGetSlotRecord(unit);
                    if (record != NULL && FUN_004bd0d8(record) == 0)
                        bitsAt60Clear(record, screen->mask & 0xffff);
                }
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            StatusFlagEntry *entry = FUN_003e83b4(battle, screen->entryIndex, 1);
            if (entry != NULL)
                removeEntryFlags(battle, entry, screen->mask);
        }
        return;
    default:
        return;
    }
}
}
