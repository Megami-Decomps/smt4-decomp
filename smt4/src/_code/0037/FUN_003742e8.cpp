/* NON_MATCHING: retail keeps the command cursor and material pointer in stack slots and stores the register words through stmia pairs; the word values, the light-enable mask loop and the per-light register groups are the same. */
#include "common.h"

namespace {
/* The light data of one light: the colour words the register block multiplies with the material. */
struct LightData {
    /* 0x000 */ u8 unk000[0xc8];
    /* 0x0c8 */ u32 sceneColor;          /* the scene's ambient colour (read through the model's data) */
    /* 0x0cc */ u8 unk0cc[0x120];
    /* 0x1ec */ u32 unk1ec;
};

struct LightNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *data;                 /* light colours at +0xfc, +0x100, +0x104, +0x108 */
};

struct ModelNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *data;                 /* scene colour at +0xc8 */
};

/* The job: its model, the lights it uses and their count. */
struct LightJob {
    /* 0x00 */ ModelNode *model;
    /* 0x04 */ u8 unk04[0x20];
    /* 0x24 */ LightNode **lights;
    /* 0x28 */ u8 unk28[0x7c];
    /* 0xa4 */ s32 lightCount;
};

/* The material the lights are applied to: two vectors and the colour words. */
struct LightMaterial {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 vectorA[4];
    /* 0x20 */ u32 vectorB[4];
    /* 0x30 */ u8 unk30[0x80];
    /* 0xb0 */ u32 ambientBase;
    /* 0xb4 */ u32 color0;
    /* 0xb8 */ u32 color1;
    /* 0xbc */ u32 color2;
    /* 0xc0 */ u32 specularTint;
};
}

extern "C" {
extern u32 *g_commandBufferCursor;
void nw_gfx_internal_NWCopyVec4Reverse(u32 *destination, const u32 *source);
u32 *nw_gfx_internal_FastWordCopyAsm_6(u32 *destination, const u32 *source);

/* Multiplies two packed colours channel by channel; each 8-bit channel c becomes 2c+1 and the product is
   scaled back by 1/1024, giving 0..255, and the result is packed as three 10-bit fields. */
static u32 colorModulate(u32 a, u32 b)
{
    s16 first = (s16)(((a & 0xff) << 1) + 1) * (s16)(((b & 0xff) << 1) + 1);
    s16 second = (s16)(((a & 0xff00) >> 7) + 1) * (s16)(((b & 0xff00) >> 7) + 1);
    s16 third = (s16)(((a & 0xff0000) >> 15) + 1) * (s16)(((b & 0xff0000) >> 15) + 1);
    return (((u32)first >> 10) << 20) | (((u32)second >> 10) << 10) | ((u32)third >> 10);
}

/* Repacks a colour as three 10-bit fields without scaling. */
static u32 colorRepack(u32 color)
{
    return ((color & 0xff) << 20) | (((color & 0xffff) >> 8) << 10) | ((color & 0xffffff) >> 16);
}

/* Writes the lighting register block of a draw: the two material vectors, the light-enable mask, the ambient
   colour, and then one register group per light (up to eight) holding the material colours modulated by the
   light's colours. `useRawSpecular` picks the light's specular colour as it is instead of tinting it. */
void FUN_003742e8(LightJob *job, u32 unused, LightMaterial *material, s32 useRawSpecular)
{
    u32 *cursor = g_commandBufferCursor;
    cursor[0] = 0x80000015;
    cursor[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec4Reverse(cursor + 2, material->vectorB);
    cursor = g_commandBufferCursor;
    g_commandBufferCursor = cursor + 6;
    cursor = g_commandBufferCursor;
    cursor[0] = 0x80000014;
    cursor[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec4Reverse(cursor + 2, material->vectorA);
    cursor = g_commandBufferCursor;
    g_commandBufferCursor = cursor + 6;
    s32 count = job->lightCount;
    if (count > 8) {
        count = 8;
    }
    u32 mask = 0;
    s32 last = 0;
    if (count > 0) {
        last = count - 1;
        s32 slot = count & 1;
        for (s32 pairs = count >> 1; pairs != 0; pairs--) {
            mask = mask | (slot << (slot * 4)) | ((slot + 1) << (slot * 4 + 4));
            slot += 2;
        }
    }
    cursor = g_commandBufferCursor;
    cursor[0] = last;
    cursor[1] = 0x101c2;
    cursor[2] = mask;
    cursor[3] = 0xf01d9;
    g_commandBufferCursor = cursor + 4;
    u32 color;
    if (job->model != NULL) {
        u32 scene = *reinterpret_cast<u32 *>(job->model->data + 0xc8);
        u32 base = material->ambientBase;
        u32 tint = material->color0;
        u32 red = ((u32)((s16)(((scene & 0xff) << 1) + 1) * (s16)(((tint & 0xff) << 1) + 1)) >> 10) + (base & 0xff);
        u32 green = ((base & 0xffff) >> 8) +
                    ((u32)((s16)(((scene & 0xff00) >> 7) + 1) * (s16)(((tint & 0xff00) >> 7) + 1)) >> 10);
        u32 blue = ((base & 0xffffff) >> 16) +
                   ((u32)((s16)(((scene & 0xff0000) >> 15) + 1) * (s16)(((tint & 0xff0000) >> 15) + 1)) >> 10);
        if (red >= 0x100) {
            red = 0xff;
        }
        if (green >= 0x100) {
            green = 0xff;
        }
        if (blue >= 0x100) {
            blue = 0xff;
        }
        color = blue | (red << 20) | (green << 10);
    } else {
        color = colorRepack(material->ambientBase);
    }
    cursor = g_commandBufferCursor;
    cursor[0] = color;
    cursor[1] = 0xf01c0;
    g_commandBufferCursor = cursor + 2;
    for (s32 i = 0; i < count; i++) {
        u8 *light = job->lights[i]->data;
        u32 words[6];
        words[0] = colorModulate(*reinterpret_cast<u32 *>(light + 0x104), material->color2);
        words[1] = 0x803f0140 + i * 16;
        if (useRawSpecular != 0) {
            words[2] = colorRepack(*reinterpret_cast<u32 *>(light + 0x108));
        } else {
            words[2] = colorModulate(*reinterpret_cast<u32 *>(light + 0x108), material->specularTint);
        }
        words[3] = colorModulate(*reinterpret_cast<u32 *>(light + 0x100), material->color1);
        words[4] = colorModulate(*reinterpret_cast<u32 *>(light + 0xfc), material->color0);
        words[5] = 0;
        g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor, words);
    }
}

} /* extern "C" */
