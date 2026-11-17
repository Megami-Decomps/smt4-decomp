/* NON_MATCHING: instructions and schedule match retail; only the saved-register numbering differs (retail: id r6, kind r7, delta r5). */
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

extern "C" {

void FUN_004c80f0(s32 id, s32 kind, s32 delta)
{
    BtlMainStateA *state = btlGetMainState();
    if (id < 109) {
        BtlUnitDataA *vitals = btlFindEntryBlockByMemberId(state, id);
        if (!vitals) {
            return;
        }
        if (kind == 0) {
            s32 hp = vitals->hp;
            s32 maxHp = vitals->maxHp;
            vitals->hp = clampVital(hp + delta, maxHp);
        } else if (kind == 1) {
            s32 mp = vitals->mp;
            s32 maxMp = vitals->maxMp;
            vitals->mp = clampVital(mp + delta, maxMp);
        }
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(state, id);
        if (entry->data.record) {
            reinterpret_cast<SlotRecordA *>(entry->data.record)->hp = vitals->hp;
            reinterpret_cast<SlotRecordA *>(entry->data.record)->mp = vitals->mp;
        } else if (entry->data.secondaryRecord) {
            reinterpret_cast<SlotRecordA *>(entry->data.secondaryRecord)->hp = vitals->hp;
            reinterpret_cast<SlotRecordA *>(entry->data.secondaryRecord)->mp = vitals->mp;
        } else if (entry->data.specialRecord) {
            SlotRecordA *selected = &saveSlotFindSelected()->record;
            if (!selected) {
                return;
            }
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
        if (kind == 0) {
            s32 current = record->hp;
            s32 maximum = recordGetScaledMaximum(record);
            record->hp = clampVital(delta + current, maximum);
        } else if (kind == 1) {
            record->mp = clampVital((s16)record->mp + delta,
                                                   (s16)record->maxMp);
        }
    }
}
}
