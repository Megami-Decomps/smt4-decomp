/* NON_MATCHING: 134 vs 136 rows (42 diff lines); transform copy loop matches retail, leaving roster base addressing (add vs pool 0x1ed4) and scale-record exit merge (bne+mov vs beq+mov r2,r8). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "gamedata/DataTable.h"
#include "battle/BtlEntryLookup.h"

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
void FUN_004d854c(u32 *owner);
void *asdMemoryAllocTraced(u32 bytes, const char *file, s32 line);
u32 *battleModelOwnerInitialize(u32 *owner);
void btlModelCopyContentIfMissing(u32 *destination, const u32 *source);
void *dataTableFileGetTable(void *file, u32 index);
BattleVector3 FUN_00201950(u32 index);
BattleVector3 FUN_00201984(u32 index);
void callOnHandleField4B(u32 *owner, f32 x, f32 y, f32 z);
void callOnHandleField4C(u32 *owner, f32 x, f32 y, f32 z);
void callOnHandleField4D(u32 *owner, f32 x, f32 y, f32 z);

/* Find the roster record of the first marked opponent (same helper as FUN_003e9b74). */
static __inline BattleRosterRecordA *findFirstMarkedOpponent(BtlMainStateA *state)
{
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if (entry->data.marked != 0) {
            return &state->roster[entry->ids[0]];
        }
    }
    return NULL;
}

/* Find the environment scale record matching `id` (same pattern as btlDataFindRecordById). */
static __inline EnvironmentScaleRecord *findScaleRecord(void *file, u16 id)
{
    if (file == NULL) {
        return NULL;
    }
    void *table = dataTableFileGetTable(file, 0);
    EnvironmentScaleRecord *entries = (EnvironmentScaleRecord *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        EnvironmentScaleRecord *candidate = &entries[i];
        if (candidate->id == id) {
            return candidate;
        }
    }
    return NULL;
}

/* Duplicate the loaded environment model and apply each battle placement's transform. */
void btlSetupEnvironmentModelCopies(BtlMainStateA *state)
{
    EnvironmentCopyView *environment = (EnvironmentCopyView *)state;
    if (!FUN_004d87e4((void **)environment->owners[0])) {
        return;
    }
    FUN_004d854c(environment->owners[0]);
    for (s32 i = 1; i < 4; ++i) {
        u32 *owner = (u32 *)asdMemoryAllocTraced(0x24,
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 0x3649);
        if (owner != NULL) {
            owner = battleModelOwnerInitialize(owner);
        }
        environment->owners[i] = owner;
        btlModelCopyContentIfMissing(owner, environment->owners[0]);
        FUN_004d854c(environment->owners[i]);
    }
    BattleRosterRecordA *selected = findFirstMarkedOpponent(state);
    u16 id = btlFindEntryBlockByMemberId(state, selected->combatant.parameterIndex)->id;
    EnvironmentScaleRecord *record = findScaleRecord(environment->table, id);
    f32 scale = record->scale;
    for (s32 i = 0; i < 4; ++i) {
        BattleVector3 pos = FUN_00201950(i);
        battleVectorCopy(&environment->positions[i], &pos);
        callOnHandleField4B(environment->owners[i], environment->positions[i].x,
            environment->positions[i].y, environment->positions[i].z);
        BattleVector3 rot = FUN_00201984(i);
        battleVectorCopy(&environment->rotations[i], &rot);
        callOnHandleField4C(environment->owners[i], environment->rotations[i].x,
            environment->rotations[i].y, environment->rotations[i].z);
        environment->scales[i] = scale;
        callOnHandleField4D(environment->owners[i], scale, scale, scale);
        environment->enabled[i] = 1;
    }
    environment->ready = 1;
}
} /* extern "C" */
