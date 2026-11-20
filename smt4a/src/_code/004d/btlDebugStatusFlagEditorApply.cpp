/* NON_MATCHING: the item switch, the party loops and the member loops agree. In items 16 and 17 retail copies the
 * entry into r6 at its NULL test (movs), tests the two filters with one predicated chain (ldrbeq/cmpeq), computes
 * &battle->roster once before the 109-entry loop and loads the entry's flags and the editable mask in other
 * orders (ldrd/ldm); it also passes the bit number to bitsAt60Set without narrowing it (the header says u8). */
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlScript.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/X14_BtlUiClose.h"
#include "util/BitsAndBytes_Shard004B.h"
#include "util/BitsAndBytes_VariantE_Shard004B.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "StaffRoll/StaffRollMain.h"

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

extern "C" {
extern BtlUiCloseState g_btlDebugGlobals;

u32 asdListBoxGetSelectedItemId(u32 listBox);
BtlCombatantEntryA *FUN_003e83b4(BtlMainStateA *state, s32 index, s32 matches);
u32 FUN_004fdb18(s32 actor, u32 options, BattleRosterRecordA *target, u32 parameter, s32 checkStatus);
u32 FUN_004fcffc(s32 actor, u32 options, BattleRosterRecordA *target, u32 mask);
bool slotIsReservePick(SlotRecordA *demon);
}

/* Queues the screen's status flags for every member of an entry. */
static __inline void addEntryFlags(StatusFlagEditor *screen, BtlMainStateA *battle, BtlCombatantEntryA *entry)
{
    for (s32 slot = 0; slot < 50; ++slot) {
        s32 member = entry->ids[slot];
        if (member >= 0) {
            BattleRosterRecordA *target = &battle->roster[member];
            FUN_004fdb18(0, (u32)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit), target, screen->mask, 1);
        }
    }
}

/* Queues the removal of the screen's status flags for every member of an entry. */
static __inline void removeEntryFlags(StatusFlagEditor *screen, BtlMainStateA *battle, BtlCombatantEntryA *entry)
{
    for (s32 slot = 0; slot < 50; ++slot) {
        s32 member = entry->ids[slot];
        if (member >= 0) {
            BattleRosterRecordA *target = &battle->roster[member];
            FUN_004fcffc(0, (u32)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit), target, screen->mask);
        }
    }
}

/* The status-flag editor's item handler: items 0-3 pick the entry and the filters, 4-15 toggle a bit of
 * the mask, 16 adds the mask to the chosen entries (and the party) and 17 removes it. */
extern "C" void btlDebugStatusFlagEditorApply(StatusFlagEditor *screen, BtlMainStateA *battle)
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
        if (slotIsActive(0) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            for (; index < 109; ++index) {
                BtlCombatantEntryA *entry = FUN_003e83b4(battle, index, 1);
                if (entry == NULL)
                    continue;
                if (screen->onlyAllies != 0 && (g_btlDebugGlobals.editableMask & entry->flags) != 0)
                    continue;
                if (screen->onlyEnemies != 0 && (entry->flags & g_btlDebugGlobals.editableMask) == 0)
                    continue;
                addEntryFlags(screen, battle, entry);
            }
        }
        if (screen->includeParty != 0) {
            s32 count = gameGetSlotTable()->count;
            for (s32 position = 0; position < count; ++position) {
                s32 slot = gameGetSlotTable()->party[position];
                if (slot < 0)
                    continue;
                SlotRecordA *record = gameGetSlotRecord(slot);
                if (record == NULL)
                    continue;
                if (slotIsReservePick(record))
                    continue;
                for (s32 bit = 0; bit < 14; ++bit) {
                    if (screen->mask & (1 << bit))
                        bitsAt60Set(record, bit);
                }
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            BtlCombatantEntryA *entry = FUN_003e83b4(battle, screen->entryIndex, 1);
            if (entry != NULL)
                addEntryFlags(screen, battle, entry);
        }
        return;
    case 17:
        if (slotIsActive(0) == 0)
            return;
        if (screen->onlyAllies != 0 || screen->onlyEnemies != 0) {
            for (; index < 109; ++index) {
                BtlCombatantEntryA *entry = FUN_003e83b4(battle, index, 1);
                if (entry == NULL)
                    continue;
                if (screen->onlyAllies != 0 && (entry->flags & g_btlDebugGlobals.editableMask) != 0)
                    continue;
                if (screen->onlyEnemies != 0 && (g_btlDebugGlobals.editableMask & entry->flags) == 0)
                    continue;
                removeEntryFlags(screen, battle, entry);
            }
        }
        if (screen->includeParty != 0) {
            s32 count = gameGetSlotTable()->count;
            for (s32 position = 0; position < count; ++position) {
                s32 slot = gameGetSlotTable()->party[position];
                if (slot < 0)
                    continue;
                SlotRecordA *record = gameGetSlotRecord(slot);
                if (record == NULL)
                    continue;
                if (slotIsReservePick(record))
                    continue;
                bitsAt60Clear(record, screen->mask);
            }
        }
        if (screen->onlyAllies == 0 && screen->onlyEnemies == 0 && screen->entryIndex >= 0) {
            BtlCombatantEntryA *entry = FUN_003e83b4(battle, screen->entryIndex, 1);
            if (entry != NULL)
                removeEntryFlags(screen, battle, entry);
        }
        return;
    default:
        return;
    }
}
