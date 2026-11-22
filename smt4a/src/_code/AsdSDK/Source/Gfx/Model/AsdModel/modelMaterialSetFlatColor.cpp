/* NON_MATCHING: the layout is retail's (the texture setup after the epilogue, the intensity write cross-jumped from both paths), but register allocation differs (retail keeps the model in r4, the material in r5, 0 and 1.0 in r8/s18 from entry), the stage search tests the operand with bics where retail has and/cmp, and the two stage updates share one base where retail computes each stage's address. */
#include "common.h"
#include "gfx/GfxSettings.h"
#include "shard/W5_W5Match2_ModelColor.h"

extern "C" {

/* A self-relative pointer: the word at `field` holds the distance to the target, 0 for none. */
static __inline u8 *relPtr(u8 *field)
{
    s32 offset = *(s32 *)field;

    if (offset != 0)
        return field + offset;
    return NULL;
}

/* One texture-combiner stage (0x1C bytes) inside the material's stage table. */
typedef struct CombinerStage {
    /* 0x00 */ u32 source;
    /* 0x04 */ u32 operandA;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 operandB;
    /* 0x10 */ u32 mode;
    /* 0x14 */ u8 unk14[8];
} CombinerStage;

/* The material's texture-combiner block (only the fields used here). */
typedef struct CombinerBlock {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ CombinerStage stages[6];
    /* 0xD4 */ u8 unkD4[0x10];
    /* 0xE4 */ u32 bufferInput;         /* bit 8 + n: stage n + 1 reads the previous buffer */
} CombinerBlock;

/* The material's render state (only the colour block is used here). */
typedef struct ModelMaterialState {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ ModelColor color;
    /* 0xB0 */ u8 unkB0[0x28];
    /* 0xD8 */ u32 packedColor;         /* color as a PICA colour word */
    /* 0xDC */ u8 unkDC[0x70];
} ModelMaterialState;

/* The material of a model (only the fields used here). */
typedef struct ModelMaterial {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ ModelMaterialState state;
    /* 0x170 */ s32 blendKind;
    /* 0x174 */ s32 blendFactor;
    /* 0x178 */ u8 unk178[0x6C];
    /* 0x1E4 */ u8 unk1e4[0x4];
    /* 0x1E8 */ u8 unk1e8[0x8C];
    /* 0x274 */ s32 textureOffset;
    /* 0x278 */ u8 unk278[0x10];
    /* 0x288 */ s32 combinerOffset;
    /* 0x28C */ u8 unk28c[0x1C];
    /* 0x2A8 */ u32 unk2a8;
    /* 0x2AC */ u32 unk2ac;
    /* 0x2B0 */ u32 unk2b0;
    /* 0x2B4 */ u32 unk2b4;
    /* 0x2B8 */ u8 unk2b8[0x10];
    /* 0x2C8 */ u32 unk2c8;
} ModelMaterial;

typedef struct ModelLink {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelMaterial *material;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ ModelMaterial **begin;
    /* 0x14 */ ModelMaterial **end;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ s32 count;
} ModelLink;

/* A texture sampler's resource data (only the fields used here). */
typedef struct TextureSamplerData {
    /* 0x00 */ u32 flags;               /* 0x80000000: a sampler of the expected type */
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ ModelColor borderColor;
} TextureSamplerData;

typedef struct OwnerCommand {
    u32 unk0;
    u32 *words;
} OwnerCommand;

extern u32 DAT_005b3c74;

u32 nw_ut_FloatColor_ToPicaU32(const ModelColor *color);
void runtimeDispatchObjectRelease(u8 **block);
void nw_gfx_res_ResTextureMapper_SetTexture(u8 **handle, u32 texture);
OwnerCommand nw_gfx_res_ResTextureSampler_GetOwnerCommand(TextureSamplerData **sampler);

/* Writes `intensity` as the colour of the model's first linked material, or of its own material. */
static __inline void materialSetIntensity(ModelLink *model, ModelMaterial *material, f32 intensity)
{
    ModelMaterialState *state;

    if (model->end - model->begin > 0) {
        ModelMaterial *target = model->count > 0 ? *model->begin : NULL;

        target->unk2b4 = 0;
        state = &target->state;
    } else {
        state = &material->state;
    }
    state->color.Set(intensity, intensity, intensity, 1.0f);
    state->packedColor = nw_ut_FloatColor_ToPicaU32(&state->color);
}

/* Prepares the model's material for the flat-colour pass: clears the blend state, binds the
 * texture mapper and sampler when `useTexture` is zero (colouring it white, or black in the
 * flat setting), claims the first free combiner stages for it, and then writes `intensity` as the
 * material colour. */
void modelMaterialSetFlatColor(ModelLink *model, s32 useTexture, f32 intensity)
{
    ModelMaterial *material = model->material;

    material->unk2a8 = 0;
    material->unk2b0 = 0;
    material->unk2c8 = 0;
    material->unk2b4 = 0;
    material->blendFactor = 2;
    material->blendKind = 4;
    material->unk2ac = 0;
    u8 *textureBlock = relPtr((u8 *)&material->textureOffset);

    if (useTexture != 0) {
        materialSetIntensity(model, material, intensity);
        return;
    }
    u8 *resource = relPtr(textureBlock + 8);

    if (*(u32 *)resource == 0x20000004) {
        resource = relPtr(resource + 0x1C);
    }
    runtimeDispatchObjectRelease(&resource);
    nw_gfx_res_ResTextureMapper_SetTexture(&textureBlock, DAT_005b3c74);
    TextureSamplerData *sampler = (TextureSamplerData *)relPtr(textureBlock + 12);

    if (sampler != NULL && (sampler->flags & 0x80000000) == 0) {
        sampler = NULL;
    }
    OwnerCommand command = nw_gfx_res_ResTextureSampler_GetOwnerCommand(&sampler);

    command.words[5] = (command.words[5] & ~0x7000) | 0x1000;
    command = nw_gfx_res_ResTextureSampler_GetOwnerCommand(&sampler);
    command.words[5] = (command.words[5] & ~0x700) | 0x100;
    f32 level = g_gfxSettings.flat != 0 ? 0.0f : 1.0f;
    sampler->borderColor.Set(level, level, level, 1.0f);
    u32 packed = nw_ut_FloatColor_ToPicaU32(&sampler->borderColor);

    command = nw_gfx_res_ResTextureSampler_GetOwnerCommand(&sampler);
    command.words[2] = packed;
    CombinerBlock *combiner = (CombinerBlock *)relPtr((u8 *)&material->combinerOffset);
    CombinerStage *stages = combiner->stages;
    s32 last = 0;

    for (s32 stage = 5; stage >= 0; stage--) {
        if ((stages[stage].mode & 0xF) != 0 || (stages[stage].operandA & 0xF) != 0xF) {
            last = stage;
            break;
        }
    }
    if (last < 4) {
        u32 bit = 1u << (last + 8);

        combiner->bufferInput = (combiner->bufferInput & ~bit) | bit;
        stages[last + 1].operandA = (stages[last + 1].operandA & ~0xFF) | 0xE3;
        stages[last + 1].operandB = (stages[last + 1].operandB & ~0xFF) | 1;
        stages[last + 1].source = 5;
        stages[last + 1].mode = (stages[last + 1].mode & ~0xF) | 1;
        stages[last + 2].operandA = (stages[last + 2].operandA & ~0xFF) | 0xFD;
        stages[last + 2].operandB = (stages[last + 2].operandB & ~0xFF) | 0x10;
        stages[last + 2].mode = (stages[last + 2].mode & ~0xF) | 1;
    }
    materialSetIntensity(model, material, intensity);
}

}
