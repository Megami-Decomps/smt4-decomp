/* NON_MATCHING: retail retains different search bases and reloads stored transform vectors before the handle setters. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "gamedata/DataTable.h"

namespace {
struct EnvironmentCopyView {
    u8 prefix[0x2294];
    void *table;
    u8 padding[0x24];
    u32 *owners[4];
    u8 loaded;
    u8 ready;
    u8 padding22CE[2];
    BattleVector3 positions[4];
    BattleVector3 rotations[4];
    f32 scales[4];
    u8 enabled[4];
};
struct EnvironmentScaleRecord {
    s16 id;
    u16 padding;
    f32 scale;
    u8 tail[0x30];
};
}
extern "C" {
s32 FUN_004d87e4(u32 *owner);
void FUN_004d854c(u32 *owner);
void *FUN_00178b04(u32 bytes, const char *file, s32 line);
u32 *battleModelOwnerInitialize(u32 *owner);
void btlModelCopyContentIfMissing(u32 *destination, const u32 *source);
BattleCombatantStatusKey *FUN_001568f8(BtlMainStateA *state, s32 parameterIndex);
void *dataTableFileGetTable(void *file, u32 index);
BattleVector3 FUN_00201950(u32 index);
BattleVector3 FUN_00201984(u32 index);
void callOnHandleField4B(u32 *owner, f32 x, f32 y, f32 z);
void callOnHandleField4C(u32 *owner, f32 x, f32 y, f32 z);
void callOnHandleField4D(u32 *owner, f32 x, f32 y, f32 z);

// Duplicate the loaded environment model and apply each battle placement's transform.
void FUN_003eaa9c(BtlMainStateA *state)
{
    EnvironmentCopyView *environment = reinterpret_cast<EnvironmentCopyView *>(state);
    if (!FUN_004d87e4(environment->owners[0]))
        return;
    FUN_004d854c(environment->owners[0]);
    for (s32 i = 1; i < 4; ++i) {
        u32 *owner = static_cast<u32 *>(FUN_00178b04(0x24,
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 0x3649));
        if (owner != NULL)
            owner = battleModelOwnerInitialize(owner);
        environment->owners[i] = owner;
        btlModelCopyContentIfMissing(owner, environment->owners[0]);
        FUN_004d854c(environment->owners[i]);
    }
    BattleRosterRecordA *selected = NULL;
    for (s32 i = 4; i < 0x36; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if (entry->selection.marked != 0) {
            selected = &state->roster[entry->unitIndex];
            break;
        }
    }
    u16 id = FUN_001568f8(state, selected->combatant.parameterIndex)->id;
    EnvironmentScaleRecord *record = NULL;
    if (environment->table != NULL) {
        void *table = dataTableFileGetTable(environment->table, 0);
        EnvironmentScaleRecord *entries = static_cast<EnvironmentScaleRecord *>(dataTableGetEntries(table));
        s32 count = dataTableGetCount(table);
        for (s32 i = 0; i < count; ++i) {
            EnvironmentScaleRecord *candidate = &entries[i];
            if (candidate->id == id) {
                record = candidate;
                break;
            }
        }
    }
    f32 scale = record->scale;
    for (s32 i = 0; i < 4; ++i) {
        environment->positions[i] = FUN_00201950(i);
        callOnHandleField4B(environment->owners[i], environment->positions[i].x,
            environment->positions[i].y, environment->positions[i].z);
        environment->rotations[i] = FUN_00201984(i);
        callOnHandleField4C(environment->owners[i], environment->rotations[i].x,
            environment->rotations[i].y, environment->rotations[i].z);
        environment->scales[i] = scale;
        callOnHandleField4D(environment->owners[i], scale, scale, scale);
        environment->enabled[i] = 1;
    }
    environment->ready = 1;
}
}
