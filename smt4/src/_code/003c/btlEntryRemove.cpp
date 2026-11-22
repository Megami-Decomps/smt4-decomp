/* NON_MATCHING: 227 lines (181 with branch targets blanked), same blocks and calls as retail. Retail keeps -1 in sl from the first flag update on and stores it into the action's combatant and slots, the party position and the entry (the build materialises it at each store and keeps the loop's 0x60 offset in fp instead), which renumbers removeLinked (fp), the zero (r9) and the action stores (two str where the build merges 0xF4/0xF8 into one stm); retail also indexes the active positions as (table + index - 1)[0x9108] where the build folds the -1 into the offset, and does not predicate the status-bit clear. */
#include <string.h>
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/BtlUiGlobal.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/FlagBitTests.h"
#include "AsdSDK/AsdMemUtil.h"

/* BtlEntry.flagMask bits the removal reads. */
enum {
    BTL_ENTRY_FLAG_DOWNED = 0x02,       /* kept through the removal, with bit 2 */
    BTL_ENTRY_FLAG_PARTY = 0x08,        /* the entry is an active party position */
    BTL_ENTRY_FLAG_GUEST = 0x20,
    BTL_ENTRY_FLAG_ACTIONS_CLEARED = 0x80,
    BTL_ENTRY_FLAG_REMOVING = 0x200000, /* the selected action's cleanup removes it instead */
    BTL_ENTRY_FLAG_RESERVED = 0x800000  /* kept as bits 0 and 4 */
};

extern "C" {

void FUN_00337a34(BtlMainState *state);
void FUN_003390dc(BtlMainState *state, BtlActionRecord *action, s32 category);
void objectTotalAdd(BtlMainState *state, s32 amount);
void keyedAccumulatorAdd(BtlMainState *state, u32 key, s32 amount);
s32 recordClampCurrentCount(BtlUnitLink *record, s32 value);
void objectFlagsClear(BtlUnitLink *object, u16 mask);
void FUN_003ae2d0(BtlUi *ui, s32 slot, s32 partySlot, s32 immediate);
void btlQueueKeyedScalarReflectAction(s32 a, s32 b, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
void __aeabi_memset4(void *block, u32 size, s32 value);
void rt_memclr(void *block, u32 size);

/* Removes entry `index` from the battle: clears the action records that name it, hands back or retires
 * the unit it stands for (`removeLinked`: the unit is lost; `keepLink`: an active party member keeps its
 * position) and resets the entry, keeping only its downed and reserved marks. */
void btlEntryRemove(s32 index, s32 unused, s32 removeLinked, s32 keepLink)
{
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = &state->entries[index];

    if (entry->flagMask & BTL_ENTRY_FLAG_REMOVING) {
        FUN_00337a34(state);
        return;
    }
    if (!(entry->flagMask & BTL_ENTRY_FLAG_ACTIVE)) {
        return;
    }

    entry->flagMask &= ~(u64)BTL_ENTRY_FLAG_ACTIVE;
    bool reserved = (entry->flagMask & BTL_ENTRY_FLAG_RESERVED) != 0;
    bool downed = (entry->flagMask & BTL_ENTRY_FLAG_DOWNED) != 0;
    if (!((BTL_ENTRY_FLAG_RESERVED | BTL_ENTRY_FLAG_ACTIONS_CLEARED) & entry->flagMask)) {
        for (s32 i = 0; i < BTL_ENTRY_COUNT; i++) {
            if (state->actions[i].participant.combatantIndex == entry->selectionIndex) {
                BtlActionRecord *action = &state->actions[i];
                action->status = 0;
                action->flags = 0;
                action->presentationFlags = 0;
                action->task = 0;
                if (!downed) {
                    action->participant.combatantIndex = -1;
                }
                action->pendingValue = 0;
                for (s32 k = 0; k < 13; k++) {
                    action->work[k] = 0;
                }
                action->placement.slot = -1;
                action->stateFlags = 0;
                action->placement.nextSlot = -1;
                for (s32 k = 0; k < 6; k++) {
                    action->groupWork[k] = 0;
                }
                FUN_003390dc(state, action, entry->ids[0]);
            }
        }
        entry->flagMask |= BTL_ENTRY_FLAG_ACTIONS_CLEARED;
    }

    if (entry->flagMask & BTL_ENTRY_FLAG_PRESENT) {
        if (removeLinked != 0 && entry->data.devil != NULL) {
            /* The demon's totals go back to the battle's accumulators. */
            if (entry->data.total > 0) {
                objectTotalAdd(state, entry->data.total);
            }
            s32 slot = entry->data.cursor;
            do {
                if (entry->data.history[slot] != 0) {
                    keyedAccumulatorAdd(state, entry->data.history[slot], 1);
                    entry->data.history[slot] = 0;
                }
                slot--;
                if (slot < 0) {
                    slot = 5;
                }
            } while (entry->data.cursor != slot);
            entry->data.devil = NULL;
            entry->data.total = 0;
            entry->data.cursor = 0;
        }
        state->emergencyAction.gate--;
    } else if (entry->flagMask & BTL_ENTRY_FLAG_GUEST) {
        if (entry->data.guest != NULL && removeLinked != 0) {
            entry->data.guest->state = 2;
            entry->data.guest->hp = 0;
        }
        state->supportTurn = 0;
    } else {
        if (entry->flagMask & BTL_ENTRY_FLAG_PARTY) {
            if (keepLink == 0) {
                SaveSlotTableIV *table = gameGetSlotTable();
                if (table->active[index - 1] >= 0) {
                    table->active[index - 1] = -1;
                    if (removeLinked == 0) {
                        FUN_003ae2d0(g_btlUiBlock, index, -1, 1);
                        btlQueueKeyedScalarReflectAction(0, 0, 0x1000172, 0, 0, 0, 0);
                    }
                    if (entry->data.link != NULL) {
                        entry->data.link->state &= ~0x10;
                        if (entry->data.hp > 0) {
                            recordClampCurrentCount(entry->data.link, entry->data.hp);
                        }
                    }
                }
            } else {
                if (entry->data.link != NULL) {
                    entry->data.link->state &= ~0x10;
                    if (entry->data.hp > 0) {
                        recordClampCurrentCount(entry->data.link, entry->data.hp);
                    }
                    entry->data.link = NULL;
                }
            }
        }
        if (removeLinked != 0) {
            if (entry->data.source != NULL) {
                entry->data.source->state = 2;
                entry->data.source->hp = 0;
                entry->data.statusFlags = 2;
                entry->data.hp = 0;
                entry->data.maxHp = entry->data.source->maxHp;
                FUN_00394b0c();
            }
            if (entry->data.link != NULL) {
                entry->data.link->state = 2;
                entry->data.link->hp = 0;
            }
        } else if (entry->data.link != NULL) {
            if (flagWordTestBit(entry->data.link, 10)) {
                objectFlagsClear(entry->data.link, 0x10);
                objectFlagsClear(entry->data.link, 0x20);
                objectFlagsClear(entry->data.link, 0x40);
                objectFlagsClear(entry->data.link, 0x80);
                objectFlagsClear(entry->data.link, 0x100);
                objectFlagsClear(entry->data.link, 0x200);
                objectFlagsClear(entry->data.link, 8);
            }
            if (entry->data.statusFlags & 0x400) {
                entry->data.statusFlags &= ~0x3F8;
            }
            if (entry->data.hp > 0 && entry->data.link->id == entry->data.id) {
                recordClampCurrentCount(entry->data.link, entry->data.hp);
            }
        }
        state->eventCount--;
    }

    entry->flagMask = 0;
    if (downed) {
        entry->flagMask = BTL_ENTRY_FLAG_DOWNED | 4;
    }
    if (reserved) {
        entry->flagMask |= BTL_ENTRY_FLAG_PRESENT | BTL_ENTRY_FLAG_ACTIVE;
    }
    if (!reserved && !downed) {
        __aeabi_memset4(entry->ids, sizeof(entry->ids), -1);
        entry->ids[0] = 0;
        memClear(&entry->data, offsetof(BtlUnitData, history));
    }
    entry->listedSlot = -1;
    rt_memclr(entry->stat, offsetof(BtlEntry, modifiers) - offsetof(BtlEntry, stat));
    memset(entry->modifiers, 0, sizeof(entry->modifiers));
    for (s32 k = 0; k < 6; k++) {
        entry->data.history[k] = 0;
    }
    entry->modifierFlags = 0;
    entry->data.cursor = 0;
    entry->data.total = 0;
    entry->data.model = -1;
}

} /* extern "C" */
