/* NON_MATCHING: rewritten from the raw draft (four-corner gradient strip textures); not compared with retail beyond compiling. */
#include "gfx/EffectColorUnpack.h"

/* A packed color's channels as 0..255 floats. */
struct ByteColor {
    f32 red, green, blue, alpha;
};

static __inline ByteColor byteColorUnpack(u32 packed)
{
    ByteColor color;
    color.red = (f32)(packed >> 24);
    color.green = (f32)((packed & 0xffffff) >> 16);
    color.blue = (f32)((packed & 0xffff) >> 8);
    color.alpha = (f32)(packed & 0xff);
    return color;
}

extern "C" void *rt_memcpy(void *destination, const void *source, u32 size);

struct GradientImageData {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 *pixels;
};

/* A small texture object: its image data, the row count and the row length in pixels. */
struct GradientTexture {
    /* 0x00 */ GradientImageData *data;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s16 rows;
    /* 0x0A */ s16 pixelsPerRow;
    /* 0x0C */ u8 unk0C[0x4C];
    /* 0x58 */ u32 flags;
};

struct GradientWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ GradientTexture *strip;
    /* 0x14 */ GradientTexture *swatch;
};

extern "C" {
extern EffectColorProductState DAT_006471dc;

/* Fills a wide strip texture with a horizontal blend of four packed colors (each three-pixel group
 * mixes the first and third color in its second pixel and the second and fourth in the other two),
 * repeating the first row down the texture, then fills the 8-pixel-wide swatch texture with the
 * first color followed by the second. */
void FUN_003932d0(GradientWork *work, const u32 *colors)
{
    GradientTexture *strip = work->strip;
    s32 rows = strip->rows;
    s32 pixelsPerRow = strip->pixelsPerRow;
    u32 *pixels = strip->data->pixels;
    s32 groups = pixelsPerRow / 3;
    strip->flags |= 0x20;

    ByteColor first = byteColorUnpack(colors[0]);
    ByteColor second = byteColorUnpack(colors[1]);
    ByteColor third = byteColorUnpack(colors[2]);
    ByteColor fourth = byteColorUnpack(colors[3]);
    const f32 byteToFloat = 1.0f / 255.0f;

    f32 position = 0.0f;
    u32 *group = pixels;
    u32 *end = pixels;
    EffectColor *color = &DAT_006471dc.color;
    EffectColor *weighted = &DAT_006471dc.factor;
    for (s32 i = 0; i < groups; i++) {
        f32 inverse = 1.0f - position;
        EffectColor mix;
        mix.red = third.red * byteToFloat * position + first.red * byteToFloat * inverse;
        mix.green = third.green * byteToFloat * position + first.green * byteToFloat * inverse;
        mix.blue = third.blue * byteToFloat * position + first.blue * byteToFloat * inverse;
        mix.alpha = third.alpha * byteToFloat * position + first.alpha * byteToFloat * inverse;
        group[1] = effectColorPack(&mix);

        color->red = fourth.red * byteToFloat * position;
        color->green = fourth.green * byteToFloat * position;
        color->blue = fourth.blue * byteToFloat * position;
        color->alpha = fourth.alpha * byteToFloat * position;
        position += 1.0f / (f32)groups;
        weighted->red = second.red * byteToFloat * inverse;
        weighted->green = second.green * byteToFloat * inverse;
        weighted->blue = second.blue * byteToFloat * inverse;
        weighted->alpha = second.alpha * byteToFloat * inverse;
        color->red += weighted->red;
        color->green += weighted->green;
        color->blue += weighted->blue;
        color->alpha += weighted->alpha;
        group[0] = effectColorPack(color);
        end = group + 3;
        group[2] = group[0];
        group = end;
    }
    for (s32 row = 1; row < rows; row++) {
        rt_memcpy(end, pixels, pixelsPerRow << 2);
        end += pixelsPerRow;
    }

    GradientTexture *swatch = work->swatch;
    u32 *swatchPixels = swatch->data->pixels;
    swatch->flags |= 0x20;
    swatchPixels[0] = colors[0];
    swatchPixels[1] = colors[1];
    for (s32 i = 2; i < 8; i++) {
        swatchPixels[i] = swatchPixels[1];
    }
    for (s32 row = 1; row < rows; row++) {
        rt_memcpy(swatchPixels + row * 8, swatchPixels, 0x20);
    }
}
}
