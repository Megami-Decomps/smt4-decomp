/* NON_MATCHING: 106 lines (20 by shape). The item switch, the party loops and the member loops (written in place:
 * retail copies the entry into r6 at its NULL test and computes &battle->actions once before the 109-entry loop)
 * agree. What differs: in items 13 and 14 retail tests the two filters with one predicated chain (ldrbeq/cmpeq)
 * where this build branches, one instruction more each, which shifts every later address; and the single-entry
 * loop of item 13 computes the action's address through r2/r1 where this build uses r1/r2. */
#include "battle/BtlMainAccess.h"
#include "battle/BattleUnitSlot.h"
#include "battle/btlAction.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"

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
s32 slotIsActive(s32 mode);
void FUN_00246e24(s32 a, BtlUnit *unit, BtlActionRecord *action, u32 mask, s32 b);
void FUN_00246d38(s32 a, BtlUnit *unit, BtlActionRecord *action, u32 mask);
s32 slotUnitIsInActiveParty(void *record);
void objectFlagSetBit(void *record, s32 bit);
void objectFlagsClear(void *record, u32 flags);

/* The status-flag editor's item handler (Apocalypse's btlDebugStatusFlagEditorApply): items 0-3 pick the entry
 * and the filters, 4-12 toggle a bit of the mask, 13 adds the mask to the chosen entries (and the party) and
 * 14 removes it. */
void btlDebugStatusFlagEditorApply(StatusFlagEditor *screen, BtlMainState *battle)
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
        if (slotIsActive(0) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            for (; index < 109; ++index) {
                BtlEntry *entry = FUN_002561d8(battle, index, 1);
                if (entry == NULL)
                    continue;
                if (screen->onlyAllies != 0 && (entry->flags & 0x10) != 0)
                    continue;
                if (screen->onlyEnemies != 0 && (entry->flags & 0x10) == 0)
                    continue;
                /* Adds the flag mask to every action of the entry. */
                for (s32 slot = 0; slot < 50; ++slot) {
                    s32 action = entry->ids[slot];
                    if (action >= 0) {
                        BtlActionRecord *target = &battle->actions[action];
                        FUN_00246e24(0, btlUnitGet(g_btlScriptUnit), target, screen->mask, 1);
                    }
                }
            }
        }
        if (screen->includeParty != 0) {
            u8 count = gameGetSlotTable()->stockCount;
            for (s32 slot = 0; slot < count; ++slot) {
                s8 unit = gameGetSlotTable()->stock[slot];
                if (unit >= 0) {
                    void *record = gameGetUnitRecord(unit);
                    if (record != NULL && slotUnitIsInActiveParty(record) == 0) {
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
            if (entry != NULL) {
                for (s32 slot = 0; slot < 50; ++slot) {
                    s32 action = entry->ids[slot];
                    if (action >= 0) {
                        BtlActionRecord *target = &battle->actions[action];
                        FUN_00246e24(0, btlUnitGet(g_btlScriptUnit), target, screen->mask, 1);
                    }
                }
            }
        }
        return;
    case 14:
        if (slotIsActive(0) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            for (; index < 109; ++index) {
                BtlEntry *entry = FUN_002561d8(battle, index, 1);
                if (entry == NULL)
                    continue;
                if (screen->onlyAllies != 0 && (entry->flags & 0x10) != 0)
                    continue;
                if (screen->onlyEnemies != 0 && (entry->flags & 0x10) == 0)
                    continue;
                /* Removes the flag mask from every action of the entry. */
                for (s32 slot = 0; slot < 50; ++slot) {
                    s32 action = entry->ids[slot];
                    if (action >= 0) {
                        BtlActionRecord *target = &battle->actions[action];
                        FUN_00246d38(0, btlUnitGet(g_btlScriptUnit), target, screen->mask);
                    }
                }
            }
        }
        if (screen->includeParty != 0) {
            u8 count = gameGetSlotTable()->stockCount;
            for (s32 slot = 0; slot < count; ++slot) {
                s8 unit = gameGetSlotTable()->stock[slot];
                if (unit >= 0) {
                    void *record = gameGetUnitRecord(unit);
                    if (record != NULL && slotUnitIsInActiveParty(record) == 0)
                        objectFlagsClear(record, screen->mask & 0xffff);
                }
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            BtlEntry *entry = FUN_002561d8(battle, screen->entryIndex, 1);
            if (entry != NULL) {
                for (s32 slot = 0; slot < 50; ++slot) {
                    s32 action = entry->ids[slot];
                    if (action >= 0) {
                        BtlActionRecord *target = &battle->actions[action];
                        FUN_00246d38(0, btlUnitGet(g_btlScriptUnit), target, screen->mask);
                    }
                }
            }
        }
        return;
    default:
        return;
    }
}
}
