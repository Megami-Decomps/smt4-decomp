/* NON_MATCHING: signed ownership flags and record lookup shape recovered; saved pointer roles, registration guard and owned-model reset stores differ. */
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "gamedata/Table00.h"

namespace {
struct EnemySelectionRecord {
    s32 id;
    s32 behavior;
    u32 packedUnit;
    s32 poolIndex;
};
struct EnemySelectionTablesView {
    u8 prefix[0x4A78];
    EnemySelectionRecord primary[16];
    u8 paddingA[4];
    EnemySelectionRecord secondary[16];
    u8 paddingB[4];
    EnemySelectionRecord extra[16];
};
struct BorrowedEnemyModel {
    u8 unk00;
    u8 active;
    u8 padding[6];
};
struct EnemyModelPoolView {
    u8 prefix[0x3D78];
    s32 count;
    u8 padding[0x14];
    BorrowedEnemyModel entries[1];
};
struct EnemySlotSelectionView {
    u8 active;
    u8 padding01[0x2F];
    u32 script;
    s32 state;
    u32 motion;
    u8 padding3C[0x34];
    s32 behavior;
    u32 packedUnit;
    u8 padding78[0xC4];
    u8 flag13C;
    u8 flag13D;
    u8 padding13E;
    u8 flag13F;
    u8 flag140;
    u8 padding141[0x33];
    u16 modelId;
    u8 padding176[5];
    u8 variant;
    s32 poolIndex;
    RegisteredHandle *model;
    s8 registered;
    s8 owned;
};
}
extern "C" {
extern void *g_mapEnemy;
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *registry, u32 handle);
Table00Record *dataTable00FindById(u32 id);
s32 FUN_004bb870(s32 behavior);

static __inline EnemySelectionRecord *enemySelectionRecordForKind(u32 kind, s32 index)
{
    EnemySelectionTablesView *tables = static_cast<EnemySelectionTablesView *>(g_mapEnemy);
    EnemySelectionRecord *record;
    if (kind == 1)
        record = &tables->primary[index];
    else if (kind == 2)
        record = &tables->secondary[index];
    else if (kind == 3)
        record = &tables->primary[index];
    else if (kind == 4)
        record = &tables->extra[index];
    return record;
}

// Release the previous owned or borrowed model, then bind a matching enemy selection record.
void FUN_00377acc(EnemySlotSelectionView *slot, s32 id, u32 kind)
{
    // The caller supplies one of the four supported selection kinds.
    for (s32 index = 0; index < 16; ++index) {
        EnemySelectionRecord *record = enemySelectionRecordForKind(kind, index);
        if (record->id != id)
            continue;
        if (slot->model != NULL && slot->registered != 0) {
            if (slot->owned != 0) {
                if (slot->model->id != 0)
                    ptrListRemoveClearOwner(g_handleRegistry, slot->model->id);
                slot->registered = 0;
            } else {
                struct ModelFlagView { u32 unk00; u32 flags; };
                reinterpret_cast<ModelFlagView *>(slot->model->id)->flags |= 3;
                slot->registered = 0;
                static_cast<EnemyModelPoolView *>(g_mapEnemy)->entries[slot->poolIndex].active = 0;
            }
        }
        EnemyModelPoolView *pool = static_cast<EnemyModelPoolView *>(g_mapEnemy);
        if (slot->model != NULL) {
            if (slot->owned != 0)
                delete slot->model;
            slot->model = NULL;
            slot->active = 0;
            slot->script = 0;
            slot->state = -1;
            slot->motion = 1;
            slot->flag13C = 0;
            slot->flag13D = 0;
            slot->flag13F = 0;
            slot->flag140 = 0;
            --pool->count;
        }
        slot->behavior = record->behavior;
        slot->packedUnit = record->packedUnit;
        Table00Record *unit = dataTable00FindById((u16)slot->packedUnit);
        slot->modelId = *reinterpret_cast<const u16 *>(unit->unk02) & 0x7FFF;
        s32 variant = FUN_004bb870(slot->behavior);
        if (variant != 0)
            slot->variant = variant;
        slot->poolIndex = record->poolIndex;
        return;
    }
}
}
