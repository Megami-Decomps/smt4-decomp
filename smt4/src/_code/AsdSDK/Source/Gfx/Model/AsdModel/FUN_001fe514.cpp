/* NON_MATCHING: identical except the 0.0f offset constant, which this build keeps in s1 while retail reuses s0 after the 1.0f color stores. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

/* A model instance as allocated by AsdModel.cpp (0xA8 bytes). */
typedef struct AsdModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 drawMask;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[0x10];
    /* 0x24 */ u32 unk24[6];
    /* 0x3C */ u8 unk3C[0x18];
    /* 0x54 */ u32 unk54[3];
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ u32 unk64[3];
    /* 0x70 */ u8 unk70[4];
    /* 0x74 */ f32 color[4];
    /* 0x84 */ f32 offset[3];
    /* 0x90 */ u8 unk90;
    /* 0x91 */ u8 unk91[0x17];
} AsdModel;

typedef struct GfxSettings {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 modelCount;
} GfxSettings;

extern GfxSettings g_gfxSettings;
extern u8 DAT_004dae48[]; /* model list */

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdListAdd(void *list, void *item, s32 flags);

/* Allocate a cleared model, set its defaults, and add it to the model list. */
AsdModel *FUN_001fe514(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 4412);
    AsdModel *model = (AsdModel *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdModel), 1);
    memClear(model, sizeof(AsdModel));
    model->unk04 = 0;
    model->drawMask = 7;
    model->unk0C = -1;
    model->unk10 = -1;
    model->unk24[0] = 0;
    model->unk24[1] = 0;
    model->unk24[2] = 0;
    model->unk24[3] = 0;
    model->unk24[4] = 0;
    model->unk24[5] = 0;
    model->unk54[0] = 0;
    model->unk54[1] = 0;
    model->unk54[2] = 0;
    model->unk64[0] = 0;
    model->unk64[1] = 0;
    model->unk64[2] = 0;
    model->color[0] = 1.0f;
    model->color[1] = 1.0f;
    model->color[2] = 1.0f;
    model->color[3] = 1.0f;
    model->unk90 = 0;
    model->offset[2] = 0.0f;
    model->offset[1] = 0.0f;
    model->offset[0] = 0.0f;
    asdListAdd(DAT_004dae48, model, 0);
    g_gfxSettings.modelCount++;
    return model;
}

} /* extern "C" */
