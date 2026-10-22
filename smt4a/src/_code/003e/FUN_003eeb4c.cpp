/* NON_MATCHING: call argument scheduling: retail computes the model pointer before storing the stacked 5. */
#include "common.h"

/* Battle unit as seen by this check: four slot indices, -1 when empty. */
struct BtlSlotUnit {
    /* 0x000 */ u8 unk000[0x5b0];
    /* 0x5b0 */ s16 slots[4];
};

struct BtlSlotEntry {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s16 modelIndex;
    /* 0x00a */ u8 unk00a[0x3fe];
};

struct BtlSlotModel {
    /* 0x000 */ u8 unk000[0x1d0];
};

struct BtlSlotContext {
    /* 0x0000 */ u8 unk0000[0x1ed4];
    /* 0x1ed4 */ BtlSlotModel *models;
    /* 0x1ed8 */ u8 unk1ed8[0x124];
    /* 0x1ffc */ BtlSlotEntry *entries;
};

extern "C" {

extern u32 g_btlScriptUnit;
BtlSlotUnit *btlUnitGet(u32 id);
void FUN_004fe764(s32, s32, BtlSlotModel *model, s32, s32);

/* When the script unit has no filled slot, plays effect 8/5 on the entry's model. */
void FUN_003eeb4c(BtlSlotContext *ctx, s32 entry)
{
    BtlSlotUnit *unit = btlUnitGet(g_btlScriptUnit);
    s32 model;

    if (unit->slots[0] < 0 && unit->slots[1] < 0 && unit->slots[2] < 0 && unit->slots[3] < 0 && entry >= 0) {
        model = ctx->entries[entry].modelIndex;
        if (model >= 0) {
            FUN_004fe764(0, 0, ctx->models + model, 8, 5);
        }
    }
}

} /* extern "C" */
