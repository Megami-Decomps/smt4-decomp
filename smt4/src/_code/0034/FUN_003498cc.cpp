/* NON_MATCHING: register allocation: retail keeps the bytes per pixel in r3 (and loads the unused constant 0x6756 on the last test); built keeps it in r2. */
#include "common.h"

struct Image003498cc {
    /* 0x00 */ u32 format;
    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ u8 *pixels;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 width;
    /* 0x1c */ s32 height;
};

extern "C" {

/* Swaps the first and third byte of every pixel of the image (red and blue). Returns 1. */
s32 FUN_003498cc(Image003498cc *image)
{
    s32 bytesPerPixel;

    if (image->format == 0x6752)
        bytesPerPixel = 4;
    else if (image->format == 0x6754)
        bytesPerPixel = 3;
    else if (image->format == 0x6758)
        bytesPerPixel = 2;
    else
        bytesPerPixel = 1;

    s32 total = image->width * image->height * bytesPerPixel;
    for (s32 i = 0; i < total; i += bytesPerPixel) {
        u8 first = image->pixels[i];
        u8 third = image->pixels[i + 2];
        image->pixels[i] = third;
        image->pixels[i + 2] = first;
    }
    return 1;
}

} /* extern "C" */
