/* NON_MATCHING: the record's fields are read through `record` at each use; remaining: retail reloads renderFlags after each bit test before modifying it (the build reuses the tested word and predicates the first update), and keeps the state and entry pointers in r5/r6 (built r6/r5). */
#include "runtime/Stdio.h"
#include "battle/btlMain.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

struct ModelOwner;
struct BattleModelData {
    u8 unk00[0x8c];
    s16 modelId;
};
struct BattleEntryModelView {
    u8 unk000[0x404];
    const BattleModelData *data;
};
union BattleModelRecord {
    BattleEffectSetup render;
    struct {
        u8 unk00[0x48];
        u32 state;
        u8 unk4c[0x170];
        ModelOwner *owner;
    } model;
};

extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
u32 *battleModelOwnerInitialize(u32 *word);
void btlUiAddRequest(BtlUiA *ui, u16 id);
void battleEffectUpdateProjectionScale(BattleEffectSetup *render);
void FUN_004d854c(s32 *owner);
void modelOwnerLoadNamed(ModelOwner *owner, const char *name);
extern BattleEffectGlobals g_battleEffectSettings;
extern const char g_battleUnitSourceFile[]; // battle/btlUnit.cpp diagnostic filename
extern const char g_battleEnemyModelPathFormat[]; // "battle/model/en%03d.bam"

void battleUnitUpdateModelLoad(BtlMainStateA *state, BattleModelRecord *record)
{
    if (record->render.renderFlags & 1) {
        record->render.renderFlags = (record->render.renderFlags & ~1u) | 0x12;
    }
    if (record->render.renderFlags & 2) {
        if (record->render.renderFlags & 0x10) {
            if (record->model.owner == NULL) {
                const BattleEntryModelView *entry = (const BattleEntryModelView *)
                    btlMainFindEntryByListedId(state, record->render.group);
                ModelOwner *owner = (ModelOwner *)asdMemoryAllocTraced(0x24, g_battleUnitSourceFile, 0x642);
                if (owner != NULL) {
                    owner = (ModelOwner *)battleModelOwnerInitialize((u32 *)owner);
                }
                record->model.owner = owner;
                char filename[64] = {};
                if (entry->data != NULL) {
                    __2sprintf(filename, g_battleEnemyModelPathFormat, (s32)entry->data->modelId);
                    modelOwnerLoadNamed(record->model.owner, filename);
                }
            }
            record->render.renderFlags &= ~0x10u;
        }
        if (record->model.owner != NULL &&
            FUN_004d87e4((void **)record->model.owner)) {
            record->render.flags |= 0x200002;
            FUN_004d854c((s32 *)record->model.owner);
            BtlUnitDataA *data = btlFindEntryBlockByMemberId(state, record->render.group);
            btlUiAddRequest(g_btlUiBlock, data->id);
            record->render.variant = 0;
            record->render.position[0] = 0.0f;
            record->render.position[1] = 0.0f;
            record->render.position[2] = 0.0f;
            battleEffectUpdateProjectionScale(&record->render);
            u32 value = g_battleEffectSettings.defaultValue;
            record->render.value6c = value;
            record->render.value70 = value;
            record->render.opacity = 255;
            record->render.value74 = value;
            record->render.value94 = value;
            record->render.value98 = value;
            record->render.renderFlags = (record->render.renderFlags & ~2u) | 4;
        }
    }
    if ((record->render.renderFlags & 4) && !(record->render.renderFlags & 8)) {
        record->model.state = 0;
        record->render.renderFlags &= ~4u;
    }
}
}
