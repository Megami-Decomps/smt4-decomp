/* NON_MATCHING: loop body and the four-way format test (retail loads the 0x6756 constant for a compare whose arms agree) match; retail keeps the bytes per pixel in r3 and loads width/height with ldm where this build allocates r1 and uses ldrd. */
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
    else if (image->format == 0x6756) /* same size as the default */
        bytesPerPixel = 1;
    else
        bytesPerPixel = 1;

    s32 total = image->width * image->height * bytesPerPixel;
    for (s32 i = 0; i < total; i += bytesPerPixel) {
        u8 *red = &image->pixels[i];
        u8 *blue = &image->pixels[i + 2];
        u8 temp = *red;
        *red = *blue;
        *blue = temp;
    }
    return 1;
}

} /* extern "C" */
