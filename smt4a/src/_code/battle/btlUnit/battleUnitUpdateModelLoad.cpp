/* NON_MATCHING: -O2 candidate; retail reloads render flags and retains different state/entry registers and float-store scheduling. */
#include "battle/btlMain.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleEffects.h"

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
void textFormatBuffer(char *buffer, const char *format, ...);
void *FUN_00178b04(u32 size, const char *file, s32 line);
u32 *battleModelOwnerInitialize(u32 *word);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 group);
BtlUnitDataA *FUN_001568f8(BtlMainStateA *state, s32 group);
void FUN_004ac0d4(void *ui, u16 id);
void FUN_004cb9d0(BattleEffectSetup *render);
void FUN_004d854c(s32 *owner);
bool FUN_004d87e4(void **holder);
void modelOwnerLoadNamed(ModelOwner *owner, const char *name);
extern void *g_btlUiBlock;
extern BattleEffectGlobals g_battleEffectSettings;
extern const char g_battleUnitSourceFile[]; // battle/btlUnit.cpp diagnostic filename
extern const char g_battleEnemyModelPathFormat[]; // "battle/model/en%03d.bam"

void battleUnitUpdateModelLoad(BtlMainStateA *state, BattleModelRecord *record)
{
    BattleEffectSetup &render = record->render;
    if (render.renderFlags & 1) {
        render.renderFlags = (render.renderFlags & ~1u) | 0x12;
    }
    if (render.renderFlags & 2) {
        if (render.renderFlags & 0x10) {
            if (record->model.owner == NULL) {
                const BattleEntryModelView *entry = (const BattleEntryModelView *)
                    FUN_003f0e20(state, render.group);
                ModelOwner *owner = (ModelOwner *)FUN_00178b04(0x24, g_battleUnitSourceFile, 0x642);
                if (owner != NULL) {
                    owner = (ModelOwner *)battleModelOwnerInitialize((u32 *)owner);
                }
                record->model.owner = owner;
                char filename[64] = {};
                if (entry->data != NULL) {
                    textFormatBuffer(filename, g_battleEnemyModelPathFormat, (s32)entry->data->modelId);
                    modelOwnerLoadNamed(record->model.owner, filename);
                }
            }
            render.renderFlags &= ~0x10u;
        }
        if (record->model.owner != NULL &&
            FUN_004d87e4((void **)record->model.owner)) {
            render.flags |= 0x200002;
            FUN_004d854c((s32 *)record->model.owner);
            BtlUnitDataA *data = FUN_001568f8(state, render.group);
            FUN_004ac0d4(g_btlUiBlock, data->unk02);
            render.variant = 0;
            render.position[0] = 0.0f;
            render.position[1] = 0.0f;
            render.position[2] = 0.0f;
            FUN_004cb9d0(&render);
            u32 value = g_battleEffectSettings.defaultValue;
            render.value6c = value;
            render.value70 = value;
            render.opacity = 255;
            render.value74 = value;
            render.value94 = value;
            render.value98 = value;
            render.renderFlags = (render.renderFlags & ~2u) | 4;
        }
    }
    if ((render.renderFlags & 4) && !(render.renderFlags & 8)) {
        record->model.state = 0;
        render.renderFlags &= ~4u;
    }
}
}
