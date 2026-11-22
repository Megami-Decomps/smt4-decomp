/* NON_MATCHING: 460 lines (348 by shape), a port of IV's btlEntryRemove with the same blocks and calls as retail. Retail
 * keeps the entry in r5 and the roster record in r4 (r4/r5 here, which renumbers most rows) and the state at sp+24;
 * it does not predicate the status-bit clear (as in IV) and builds the reserved entry's flags from separate word
 * loads. One pool word reads g_battleEffectSettings+0x58 where retail's target names DAT_0057aa58 (the global has no
 * size in symbols.txt). */
#include <string.h>
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryA.h"
#include "battle/BtlUiGlobal.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/BattleUnitSkills.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "util/BitsAndBytes_Shard004B.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern BattleEffectGlobals g_battleEffectSettings;

void battleReleaseRetiredUnitResources(BtlMainStateA *state);
void **objectRefRelease(void **holder);
void FUN_0041a7dc(void *workState);
void FUN_003ef978(BtlMainStateA *state, BattleRosterRecordA *record, s32 category);
void FUN_003e8794(BtlMainStateA *state, s32 amount);
void keyedAccumulatorAdd(BtlMainStateA *state, u32 key, s32 amount);
void countersAddSaturating(s32 index, u32 value);
void btlSelectMode4D74(BtlMainStateA *state);
s32 recordSetClampedCurrent(SlotRecordA *record, s32 value);
void FUN_004a9c24(BtlUiA *ui, s32 slot, s32 partySlot, s32 immediate);
void btlQueueActionMessage(s32 actor, u32 options, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
void FUN_0047f288(void);
void __aeabi_memset4(void *block, u32 size, s32 value);

/* Removes entry `index` from the battle: resets the roster records that name it, hands back or retires the unit
 * it stands for (`removeLinked`: the unit is lost; `keepLink`: an active party member keeps its position) and
 * resets the entry, keeping only its downed, reserved and kept-position marks. */
void btlEntryRemove(s32 index, s32 unused, s32 removeLinked, s32 keepLink)
{
    BtlMainStateA *state = btlGetMainState();
    BtlCombatantEntryA *entry = &state->entries[index];

    if (entry->flags & g_battleEffectSettings.entryFlags.removing) {
        battleReleaseRetiredUnitResources(state);
        return;
    }
    if (!(entry->flags & g_battleEffectSettings.entryFlags.active)) {
        return;
    }

    entry->flags &= ~g_battleEffectSettings.entryFlags.active;
    bool downed = (entry->flags & g_battleEffectSettings.entryFlags.downed) != 0;
    bool reserved = (entry->flags & g_battleEffectSettings.entryFlags.reserved) != 0;
    s8 retained = entry->data.retained;
    bool keepPosition = false;
    bool wasBit4 = false; /* the unit's status bit 4, carried over to its record */
    if (!(entry->flags & g_battleEffectSettings.entryFlags.actionsCleared) &&
        !(entry->flags & g_battleEffectSettings.entryFlags.reserved)) {
        for (s32 i = 0; i < 109; i++) {
            if (state->roster[i].removal.combatantIndex == entry->selectionIndex) {
                BattleRosterRecordA *record = &state->roster[i];
                if ((record->removal.status & 0x200000) != 0 && record->removal.holder != NULL) {
                    asdOperatorDelete(objectRefRelease(record->removal.holder));
                    record->removal.holder = NULL;
                }
                record->removal.status = 0;
                record->removal.flags = 0;
                record->removal.labelFlags = 0;
                record->removal.task = 0;
                if ((!(entry->flags & g_battleEffectSettings.entryFlags.party) || retained != 0) && !downed) {
                    record->removal.combatantIndex = -1;
                }
                record->removal.pendingValue = 0;
                for (s32 k = 0; k < 12; k++) {
                    record->removal.work[k] = 0;
                }
                record->removal.slot = -1;
                record->removal.stateFlags = 0;
                record->removal.nextSlot = -1;
                for (s32 k = 0; k < 7; k++) {
                    record->removal.groupWork[k] = 0;
                }
                FUN_0041a7dc(record->removal.workState);
                record->removal.shown = 0;
                FUN_003ef978(state, record, entry->ids[0]);
            }
        }
        entry->flags |= g_battleEffectSettings.entryFlags.actionsCleared;
    }

    if (entry->flags & g_battleEffectSettings.entryFlags.present) {
        if (removeLinked != 0 && entry->data.candidate != NULL) {
            /* The demon's totals go back to the battle's accumulators, and the defeat is counted. */
            if (entry->data.total > 0) {
                FUN_003e8794(state, entry->data.total);
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
            countersAddSaturating(1, 1);
            NkmBaseRecordA *demon = nkmBaseGetRecord(entry->data.candidate->id);
            if (demon != NULL && demon->race == 0x27) {
                countersAddSaturating(2, 1);
            }
            entry->data.candidate = NULL;
            entry->data.total = 0;
            entry->data.cursor = 0;
        }
        state->entryCounts.present--;
    } else if (entry->flags & g_battleEffectSettings.entryFlags.guest) {
        if (entry->data.specialRecord != NULL && removeLinked != 0) {
            ((SlotRecordA *)entry->data.specialRecord)->ailments = 2;
            ((SlotRecordA *)entry->data.specialRecord)->hp = 0;
            btlSelectMode4D74(state);
        }
        state->unk4cd0 = 0;
    } else {
        if (entry->flags & g_battleEffectSettings.entryFlags.party) {
            if (keepLink == 0) {
                SaveSlotTableA *table = gameGetSlotTable();
                s32 position = index - 1;
                if (position >= 0) {
                    s8 slot = table->reserve[position];
                    if (slot >= 0) {
                        table->reserve[position] = -1;
                        if (removeLinked == 0) {
                            FUN_004a9c24(g_btlUiBlock, index, -1, 1);
                            btlQueueActionMessage(0, 0, 0x1000213, 0, 0, 0, 0);
                        } else if (entry->data.retained == 0) {
                            /* A unit that is not retained keeps its place in the party. */
                            keepPosition = true;
                            table->reserve[position] = slot;
                        }
                    }
                } else if (entry->data.retained == 0) {
                    keepPosition = true;
                }
                if (entry->data.secondaryRecord != NULL) {
                    ((SlotRecordA *)entry->data.secondaryRecord)->ailments &= ~0x10;
                    if (entry->data.hp > 0) {
                        recordSetClampedCurrent((SlotRecordA *)entry->data.secondaryRecord, (s16)entry->data.hp);
                    }
                }
            } else {
                if (entry->data.secondaryRecord != NULL) {
                    ((SlotRecordA *)entry->data.secondaryRecord)->ailments &= ~0x10;
                    if (entry->data.hp > 0) {
                        recordSetClampedCurrent((SlotRecordA *)entry->data.secondaryRecord, (s16)entry->data.hp);
                    }
                    entry->data.secondaryRecord = NULL;
                }
            }
        }
        if (removeLinked != 0) {
            if (entry->data.record != NULL) {
                ((SlotRecordA *)entry->data.record)->stateFlags = 2;
                ((SlotRecordA *)entry->data.record)->hp = 0;
                entry->data.statusFlags = 2;
                entry->data.hp = 0;
                entry->data.maxHp = entry->data.record->maximum.maxHp;
                FUN_0047f288();
            }
            if (entry->data.secondaryRecord != NULL) {
                if (entry->data.statusFlags & 4) {
                    wasBit4 = true;
                }
                ((SlotRecordA *)entry->data.secondaryRecord)->ailments = 2;
                ((SlotRecordA *)entry->data.secondaryRecord)->hp = 0;
                if (keepPosition) {
                    entry->data.statusFlags = 2;
                }
                if (wasBit4) {
                    ((SlotRecordA *)entry->data.secondaryRecord)->ailments |= 4;
                }
            }
        } else if (entry->data.secondaryRecord != NULL) {
            if (bitsAt60Test((SlotRecordA *)entry->data.secondaryRecord, 10)) {
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x10);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x20);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x40);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x80);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x100);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x200);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 8);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x800);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x1000);
                bitsAt60Clear((SlotRecordA *)entry->data.secondaryRecord, 0x2000);
            }
            if (entry->data.statusFlags & 0x400) {
                entry->data.statusFlags &= ~0x3BF8;
            }
            if (entry->data.hp > 0 && ((SlotRecordA *)entry->data.secondaryRecord)->id == entry->data.id) {
                recordSetClampedCurrent((SlotRecordA *)entry->data.secondaryRecord, (s16)entry->data.hp);
            }
        }
        state->entryCounts.units--;
    }

    entry->flags = 0;
    if (downed) {
        entry->flags = g_battleEffectSettings.entryFlags.downed;
    }
    if (reserved) {
        entry->flags |= g_battleEffectSettings.entryFlags.present | g_battleEffectSettings.entryFlags.active;
    }
    if (keepPosition) {
        entry->flags |= g_battleEffectSettings.entryFlags.party;
    }
    if (!reserved && !downed && !keepPosition) {
        __aeabi_memset4(entry->ids, sizeof(entry->ids), -1);
        entry->ids[0] = 0;
        sysMemClear(&entry->data, offsetof(BtlUnitDataA, history));
    }
    entry->listedSlot = -1;
    sysMemClear(entry->properties, 100);
    sysMemClear(entry->modifiers, sizeof(entry->modifiers));
    entry->data.retained = retained;
    entry->modifierFlags = 0;
    entry->data.cursor = 0;
    entry->data.total = 0;
    for (s32 k = 0; k < 6; k++) {
        entry->data.history[k] = 0;
    }
    if (!keepPosition) {
        entry->data.lookupKey = -1;
    }
}

} /* extern "C" */
