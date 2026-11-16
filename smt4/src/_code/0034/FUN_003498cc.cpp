#include "common.h"

struct Image003498cc {
    /* 0x00 */ u32 format;
    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ u8 *pixels;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 width;
    /* 0x1C */ s32 height;
};

static __inline void swapBytes(u8 *a, u8 *b)
{
    u8 temp = *a;
    *a = *b;
    *b = temp;
}

/* Bytes per pixel of an image format. */
static __inline s32 pixelSize(u32 format)
{
    if (format == 0x6752) {
        return 4;
    } else if (format == 0x6754) {
        return 3;
    } else if (format == 0x6758) {
        return 2;
    } else if (format == 0x6756) {
        return 1;
    }
    return 1;
}

/* Swaps the first and third byte of every pixel of the image (red and blue). Returns 1. */
extern "C" s32 FUN_003498cc(Image003498cc *image)
{
    s32 bytesPerPixel = pixelSize(image->format);
    s32 total = image->width * image->height * bytesPerPixel;
    for (s32 i = 0; i < total; i += bytesPerPixel) {
        swapBytes(&image->pixels[i], &image->pixels[i + 2]);
    }
    return 1;
}
