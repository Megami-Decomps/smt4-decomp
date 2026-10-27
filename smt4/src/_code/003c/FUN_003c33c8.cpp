/* NON_MATCHING: typed rewrite of the status-flag editor item handler (405 vs 397 rows); retail copies the screen into r5 and keeps the battle state spilled while armcc copies both at entry, and the per-entry loops compile with different register numbering. */
#include "battle/BtlMainAccess.h"
#include "battle/BattleUnitSlot.h"
#include "battle/btlAction.h"
#include "gamedata/SaveSlotTable.h"

/* The status-flag editor screen: its list box, the filters and the flag mask being edited. */
struct StatusFlagEditor {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 onlyAllies;        /* the filter of the entries to change: allies */
    /* 0x15 */ u8 onlyEnemies;       /* enemies */
    /* 0x16 */ u8 includeParty;      /* also change the party roster */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u32 mask;
    /* 0x1c */ s32 entryIndex;       /* the single entry to change when no filter is on */
};

extern "C" {
extern BtlMainState *const *g_btlScriptUnit;

s32 listBoxItemHasOwner(u32 listBox, u32 item);
u32 asdListBoxGetSelectedItemId(u32 listBox);
u32 *asdListBoxGetItemValuePtr(u32 listBox, u32 item);
BtlEntry *FUN_002561d8(BtlMainState *state, s32 index, u32 mode);
s32 FUN_002c15fc(s32 mode);
void FUN_00246e24(s32 a, BattleActionUnit *unit, BtlActionRecord *action, u32 mask, s32 b);
void FUN_00246d38(s32 a, BattleActionUnit *unit, BtlActionRecord *action, u32 mask);
SaveSlotTable *gameGetSlotTable(void);
void *gameGetUnitRecord(s32 slot);
s32 FUN_00295d7c(void *record);
void objectFlagSetBit(void *record, s32 bit);
void objectFlagsClear(void *record, u32 flags);

/* Adds the flag mask to every action of an entry. */
static __inline void addEntryFlags(BtlMainState *battle, BtlEntry *entry, u32 mask)
{
    for (s32 slot = 0; slot < 50; ++slot) {
        s32 action = entry->members.ids[slot];
        if (action >= 0)
            FUN_00246e24(0, btlUnitGet(g_btlScriptUnit), &battle->actions[action], mask, 1);
    }
}

/* Removes the flag mask from every action of an entry. */
static __inline void removeEntryFlags(BtlMainState *battle, BtlEntry *entry, u32 mask)
{
    for (s32 slot = 0; slot < 50; ++slot) {
        s32 action = entry->members.ids[slot];
        if (action >= 0)
            FUN_00246d38(0, btlUnitGet(g_btlScriptUnit), &battle->actions[action], mask);
    }
}

void FUN_003c33c8(StatusFlagEditor *screen, BtlMainState *battle)
{
    u32 item = asdListBoxGetSelectedItemId(screen->listBox);
    s32 index = 0;
    switch (item) {
    case 0:
        screen->entryIndex = *asdListBoxGetItemValuePtr(screen->listBox, item);
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
        if (FUN_002c15fc(0) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            do {
                BtlEntry *entry = FUN_002561d8(battle, index, 1);
                if (entry != NULL && (screen->onlyAllies == 0 || (entry->flags & 0x10) == 0) &&
                    (screen->onlyEnemies == 0 || (entry->flags & 0x10) != 0))
                    addEntryFlags(battle, entry, screen->mask);
                ++index;
            } while (index < 109);
        }
        if (screen->includeParty != 0) {
            u8 count = *(reinterpret_cast<u8 *>(gameGetSlotTable()) + 0x910b);
            for (s32 slot = 0; slot < count; ++slot) {
                s8 unit = reinterpret_cast<s8 *>(gameGetSlotTable())[slot + 0x90f0];
                if (unit >= 0) {
                    void *record = gameGetUnitRecord(unit);
                    if (record != NULL && FUN_00295d7c(record) == 0) {
                        for (s32 bit = 0; bit < 11; ++bit) {
                            if ((screen->mask & (1 << bit)) != 0)
                                objectFlagSetBit(record, bit);
                        }
                    }
                }
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            BtlEntry *entry = FUN_002561d8(battle, screen->entryIndex, 1);
            if (entry != NULL)
                addEntryFlags(battle, entry, screen->mask);
        }
        return;
    case 14:
        if (FUN_002c15fc(0) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            do {
                BtlEntry *entry = FUN_002561d8(battle, index, 1);
                if (entry != NULL && (screen->onlyAllies == 0 || (entry->flags & 0x10) == 0) &&
                    (screen->onlyEnemies == 0 || (entry->flags & 0x10) != 0))
                    removeEntryFlags(battle, entry, screen->mask);
                ++index;
            } while (index < 109);
        }
        if (screen->includeParty != 0) {
            u8 count = *(reinterpret_cast<u8 *>(gameGetSlotTable()) + 0x910b);
            for (s32 slot = 0; slot < count; ++slot) {
                s8 unit = reinterpret_cast<s8 *>(gameGetSlotTable())[slot + 0x90f0];
                if (unit >= 0) {
                    void *record = gameGetUnitRecord(unit);
                    if (record != NULL && FUN_00295d7c(record) == 0)
                        objectFlagsClear(record, screen->mask & 0xffff);
                }
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            BtlEntry *entry = FUN_002561d8(battle, screen->entryIndex, 1);
            if (entry != NULL)
                removeEntryFlags(battle, entry, screen->mask);
        }
        return;
    default:
        return;
    }
}
}
