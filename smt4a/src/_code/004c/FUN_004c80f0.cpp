/* NON_MATCHING: unaligned embedded status-view paired loads and saved-register allocation differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/Shard004B.h"

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
BtlMainStateA *btlGetMainState();
BattleCombatantStatusKey *FUN_001568f8(BtlMainStateA *state, s32 id);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 id);
ScaledRecordValues *gameGetSlotRecord(s32 slot);
ScaledRecordValues *saveSlotFindSelected();
s32 recordGetScaledMaximum(const ScaledRecordValues *record);

void FUN_004c80f0(s32 id, s32 kind, s32 delta)
{
    BtlMainStateA *state = btlGetMainState();
    if (id < 109) {
        // Vital values extend beyond the shared embedded identity-key prefix.
        struct VitalsView {
            u8 unk000[0xf4];
            s32 hp, maxHp, mp, maxMp;
        };
        typedef char VitalsOffsets[offsetof(VitalsView, hp) == 0xf4 &&
            offsetof(VitalsView, maxHp) == 0xf8 && offsetof(VitalsView, mp) == 0xfc &&
            offsetof(VitalsView, maxMp) == 0x100 ? 1 : -1];
        VitalsView *vitals = reinterpret_cast<VitalsView *>(FUN_001568f8(state, id));
        if (!vitals) {
            return;
        }
        if (kind == 0) {
            vitals->hp = clampVital(vitals->hp + delta, vitals->maxHp);
        } else if (kind == 1) {
            vitals->mp = clampVital(vitals->mp + delta, vitals->maxMp);
        }
        BtlCombatantEntryA *entry = FUN_003f0e20(state, id);
        if (entry->record) {
            reinterpret_cast<ScaledRecordValues *>(entry->record)->current = vitals->hp;
            reinterpret_cast<ScaledRecordValues *>(entry->record)->secondaryCurrent = vitals->mp;
        } else if (entry->secondaryRecord) {
            reinterpret_cast<ScaledRecordValues *>(entry->secondaryRecord)->current = vitals->hp;
            reinterpret_cast<ScaledRecordValues *>(entry->secondaryRecord)->secondaryCurrent = vitals->mp;
        } else if (entry->specialMaximum.record) {
            ScaledRecordValues *selected = saveSlotFindSelected();
            if (!selected) {
                return;
            }
            if (reinterpret_cast<ScaledRecordValues *>(entry->specialMaximum.record) == selected) {
                reinterpret_cast<ScaledRecordValues *>(entry->specialMaximum.record)->current = vitals->hp;
                reinterpret_cast<ScaledRecordValues *>(entry->specialMaximum.record)->secondaryCurrent = vitals->mp;
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
            record->current = clampVital(current + delta, maximum);
        } else if (kind == 1) {
            record->secondaryCurrent = clampVital((s16)record->secondaryCurrent + delta,
                                                   (s16)record->secondaryMaximum);
        }
    }
}
}
