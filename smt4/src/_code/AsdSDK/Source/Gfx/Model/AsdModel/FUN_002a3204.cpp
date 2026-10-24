/* NON_MATCHING: register assignment and the order of the combiner stage field updates differ from retail (178 vs 182 rows); the material setup is otherwise the same. */
#include "common.h"

extern "C" {

/* A self-relative pointer: the word at `field` holds the distance to the target, 0 for none. */
static __inline u8 *relPtr(u8 *field)
{
    s32 offset = *(s32 *)field;

    return offset != 0 ? field + offset : NULL;
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

/* The material of a model (only the fields used here). */
typedef struct ModelMaterial {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ u8 state[0x14C];        /* the colour block starts at state + 0xA0 */
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

typedef struct OwnerCommand {
    u32 unk0;
    u32 *words;
} OwnerCommand;

typedef struct GfxSettings {
    u8 unk0[5];
    s8 flat;
} GfxSettings;

extern u32 DAT_00464b70;
extern GfxSettings g_gfxSettings;

u32 nw_ut_FloatColor_ToPicaU32(f32 *color);
void FUN_002c3364(u8 **block);
void nw_gfx_res_ResTextureMapper_SetTexture(u8 **handle, u32 texture);
OwnerCommand nw_gfx_res_ResTextureSampler_GetOwnerCommand(u32 **sampler);

/* Prepares the model's material for the flat-colour pass: clears the blend state, binds the
 * texture mapper and sampler when `useTexture` is zero (colouring it white, or black in the
 * flat setting), claims the first free combiner stages for it, and then writes `intensity` as the
 * material colour. */
void FUN_002a3204(ModelLink *model, s32 useTexture, f32 intensity)
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

    if (useTexture == 0) {
        u8 *resource = relPtr(textureBlock + 8);

        if (*(u32 *)resource == 0x20000004) {
            resource = relPtr(resource + 0x1C);
        }
        FUN_002c3364(&resource);
        nw_gfx_res_ResTextureMapper_SetTexture(&textureBlock, DAT_00464b70);
        u32 *sampler = (u32 *)relPtr(textureBlock + 12);

        if (sampler != NULL && (*sampler & 0x80000000) == 0) {
            sampler = NULL;
        }
        OwnerCommand command = nw_gfx_res_ResTextureSampler_GetOwnerCommand(&sampler);

        command.words[5] = (command.words[5] & ~0x7000) | 0x1000;
        command = nw_gfx_res_ResTextureSampler_GetOwnerCommand(&sampler);
        command.words[5] = (command.words[5] & ~0x700) | 0x100;
        f32 level = g_gfxSettings.flat != 0 ? 0.0f : 1.0f;
        f32 *color = (f32 *)(sampler + 3);

        color[0] = level;
        color[1] = level;
        color[2] = level;
        color[3] = 1.0f;
        u32 packed = nw_ut_FloatColor_ToPicaU32(color);

        command = nw_gfx_res_ResTextureSampler_GetOwnerCommand(&sampler);
        command.words[2] = packed;
        CombinerStage *stages = (CombinerStage *)(relPtr((u8 *)&material->combinerOffset) + 0x2C);
        s32 stage;

        for (stage = 5; stage >= 0; stage--) {
            if ((stages[stage].mode & 0xF) != 0 || (stages[stage].operandA & 0xF) != 0xF) {
                break;
            }
        }
        if (stage < 4) {
            u32 *used = (u32 *)((u8 *)relPtr((u8 *)&material->combinerOffset) + 0xE4);

            if (stage < 0) {
                stage = 0;
            }
            *used |= 1u << (stage + 8);
            stages[stage + 1].operandA = (stages[stage + 1].operandA & ~0xFF) | 0xE3;
            stages[stage + 1].operandB = (stages[stage + 1].operandB & ~0xFF) | 1;
            stages[stage + 1].source = 5;
            stages[stage + 1].mode = (stages[stage + 1].mode & ~0xF) | 1;
            stages[stage + 2].operandA = (stages[stage + 2].operandA & ~0xFF) | 0xFD;
            stages[stage + 2].operandB = (stages[stage + 2].operandB & ~0xFF) | 0x10;
            stages[stage + 2].mode = (stages[stage + 2].mode & ~0xF) | 1;
        }
    }
    ModelMaterial *target;

    if (model->end - model->begin > 0) {
        if (model->count > 0) {
            target = *model->begin;
        } else {
            target = NULL;
        }
        target->unk2b4 = 0;
    } else {
        target = material;
    }
    f32 *color = (f32 *)((u8 *)target + 0xC4);

    color[0] = intensity;
    color[1] = intensity;
    color[2] = intensity;
    color[3] = 1.0f;
    *(u32 *)((u8 *)target + 0xFC) = nw_ut_FloatColor_ToPicaU32(color);
}

}
