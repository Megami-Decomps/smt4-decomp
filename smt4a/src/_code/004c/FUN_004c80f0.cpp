#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SaveSlotTable.h"
#include "battle/BtlGlobals.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Shard004B.h"

static inline s32 clampVital(s32 value, s32 maximum)
{
    if (value < 0) {
        value = 0;
    }
    if (value > maximum) {
        value = maximum;
    }
    return value;
}

enum VitalKind {
    VITAL_HP = 0,
    VITAL_MP = 1
};

extern "C" {

// Adjust a member's HP or MP and mirror live battle values to its saved record.
void FUN_004c80f0(s32 id, s32 kind, s32 delta)
{
    BtlMainStateA *state = btlGetMainState();
    if (id < 109) {
        BtlUnitDataA *vitals = btlFindEntryBlockByMemberId(state, id);
        if (!vitals) {
            return;
        }
        switch (kind) {
        case VITAL_HP: {
            s32 hp = vitals->hp;
            s32 maxHp = vitals->maxHp;
            vitals->hp = clampVital(hp + delta, maxHp);
            break;
        }
        case VITAL_MP: {
            s32 mp = vitals->mp;
            s32 maxMp = vitals->maxMp;
            vitals->mp = clampVital(mp + delta, maxMp);
            break;
        }
        }
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(state, id);
        if (entry->data.record) {
            reinterpret_cast<SlotRecordA *>(entry->data.record)->hp = vitals->hp;
            reinterpret_cast<SlotRecordA *>(entry->data.record)->mp = vitals->mp;
        } else if (entry->data.secondaryRecord) {
            reinterpret_cast<SlotRecordA *>(entry->data.secondaryRecord)->hp = vitals->hp;
            reinterpret_cast<SlotRecordA *>(entry->data.secondaryRecord)->mp = vitals->mp;
        } else if (entry->data.specialRecord) {
            PartySlotA *slot = saveSlotFindSelected();
            if (!slot) {
                return;
            }
            SlotRecordA *selected = &slot->record;
            if (reinterpret_cast<SlotRecordA *>(entry->data.specialRecord) == selected) {
                reinterpret_cast<SlotRecordA *>(entry->data.specialRecord)->hp = vitals->hp;
                reinterpret_cast<SlotRecordA *>(entry->data.specialRecord)->mp = vitals->mp;
            } else {
                selected->hp = vitals->hp;
                selected->mp = vitals->mp;
            }
        }
    } else {
        SlotRecordA *record = gameGetSlotRecord(id - 109);
        switch (kind) {
        case VITAL_HP: {
            s32 current = record->hp;
            s32 maximum = recordGetScaledMaximum(record);
            record->hp = clampVital(current + delta, maximum);
            break;
        }
        case VITAL_MP:
            record->mp = clampVital((s16)record->mp + delta, (s16)record->maxMp);
            break;
        }
    }
}
}
