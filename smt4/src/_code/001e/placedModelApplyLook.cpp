#include "common.h"

extern "C" {

/* Which model a placed object drives. */
typedef struct PlacedModelRef {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s32 kind;
    /* 0x98 */ s32 mode;
    /* 0x9C */ s32 slot;
} PlacedModelRef;

typedef struct PlacedModelLook {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ f32 a;
    /* 0x14 */ f32 b;
    /* 0x18 */ f32 g;
    /* 0x1C */ f32 r;
} PlacedModelLook;

typedef struct PlacedModel {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ PlacedModelRef ref;
    /* 0x0D0 */ u8 unk0D0[0x14];
    /* 0x0E4 */ PlacedModelLook look;
    /* 0x104 */ u8 unk104[8];
    /* 0x10C */ u32 colorObject;
} PlacedModel;

s32 unitTableGetValue(s32 slot, u32 index);
s32 asdModelBankGetModel(s32 slot, u32 index);
void asdModelSlotSetTint(s32 slot, u32 index, f32 r, f32 g, f32 b, f32 a);
void asdModelSlotSetTranslation(s32 slot, u32 index, f32 x, f32 y, f32 z);
void asdModelSlotSetColor(s32 slot, u32 index, f32 r, f32 g, f32 b);
void colorObjectSetRgb(u32 object, f32 r, f32 g, f32 b);

/* Applies the object's color (and in mode 1 its tint and position) to the model or color object it drives. */
void placedModelApplyLook(PlacedModel *model)
{
    PlacedModelRef *ref = &model->ref;
    PlacedModelLook *look = &model->look;

    if (ref->mode != 0) {
        if (ref->mode == 1 && ref->kind == 0 && unitTableGetValue((s16)ref->slot, 0) != 0) {
            asdModelSlotSetTint((s16)ref->slot, 0, look->r, look->g, look->b, look->a);
            asdModelSlotSetTranslation((s16)ref->slot, 0, look->x, look->y, look->z);
        }
    } else if (ref->kind == 1) {
        colorObjectSetRgb(model->colorObject, look->r, look->g, look->b);
    } else if (ref->kind == 0 && asdModelBankGetModel((s16)ref->slot, 0) != 0) {
        asdModelSlotSetColor((s16)ref->slot, 0, look->r, look->g, look->b);
    }
}

} /* extern "C" */
