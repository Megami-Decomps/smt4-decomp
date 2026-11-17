/* NON_MATCHING: instructions and schedule match retail; only the saved-register numbering differs (retail: id r6, kind r7, delta r5). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/Shard004B.h"
#include "gamedata/SaveSlotTable.h"
#include "battle/BtlGlobals.h"

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
ScaledRecordValues *gameGetSlotRecord(s32 slot);
s32 recordGetScaledMaximum(const ScaledRecordValues *record);

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
            reinterpret_cast<ScaledRecordValues *>(entry->data.record)->current = vitals->hp;
            reinterpret_cast<ScaledRecordValues *>(entry->data.record)->secondaryCurrent = vitals->mp;
        } else if (entry->data.secondaryRecord) {
            reinterpret_cast<ScaledRecordValues *>(entry->data.secondaryRecord)->current = vitals->hp;
            reinterpret_cast<ScaledRecordValues *>(entry->data.secondaryRecord)->secondaryCurrent = vitals->mp;
        } else if (entry->data.specialRecord) {
            ScaledRecordValues *selected = reinterpret_cast<ScaledRecordValues *>(saveSlotFindSelected());
            if (!selected) {
                return;
            }
            if (reinterpret_cast<ScaledRecordValues *>(entry->data.specialRecord) == selected) {
                reinterpret_cast<ScaledRecordValues *>(entry->data.specialRecord)->current = vitals->hp;
                reinterpret_cast<ScaledRecordValues *>(entry->data.specialRecord)->secondaryCurrent = vitals->mp;
            } else {
                selected->current = vitals->hp;
                selected->secondaryCurrent = vitals->mp;
            }
        }
    } else {
        ScaledRecordValues *record = gameGetSlotRecord(id - 109);
        if (kind == 0) {
            s32 current = record->current;
            s32 maximum = recordGetScaledMaximum(record);
            record->current = clampVital(delta + current, maximum);
        } else if (kind == 1) {
            record->secondaryCurrent = clampVital((s16)record->secondaryCurrent + delta,
                                                   (s16)record->secondaryMaximum);
        }
    }
}
}
