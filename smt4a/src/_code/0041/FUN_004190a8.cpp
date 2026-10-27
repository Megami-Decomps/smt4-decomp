/* NON_MATCHING: register allocation: retail keeps the bytes per pixel in r3 (and loads the unused constant 0x6756 on the last test); built keeps it in r2. */
#include "common.h"

struct Image004190a8 {
    /* 0x00 */ u32 format;
    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ u8 *pixels;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 width;
    /* 0x1c */ s32 height;
};

static __inline void swapBytes(u8 *first, u8 *second)
{
    u8 temp = *first;
    *first = *second;
    *second = temp;
}

extern "C" {

/* Swaps the first and third byte of every pixel of the image (red and blue). Returns 1. */
s32 FUN_004190a8(Image004190a8 *image)
{
    s32 bytesPerPixel;

    if (image->format == 0x6752)
        bytesPerPixel = 4;
    else if (image->format == 0x6754)
        bytesPerPixel = 3;
    else if (image->format == 0x6758)
        bytesPerPixel = 2;
    else if (image->format == 0x6756)
        bytesPerPixel = 1;
    else
        bytesPerPixel = 1;

        s32 total = image->width * image->height * bytesPerPixel;
    s32 i = 0;
    while (i < total) {
        swapBytes(&image->pixels[i + 2], &image->pixels[i]);
        i += bytesPerPixel;
    }
    return 1;
}

} /* extern "C" */
