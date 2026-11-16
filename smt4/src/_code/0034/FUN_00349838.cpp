#include "common.h"

struct Obj349838 {
    /* 0x00 */ u32 format;
    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ u8 *data;
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

/* Swaps each pair of adjacent bytes at pixel stride of the image data (byte order fix), by pixel format. */
extern "C" s32 FUN_00349838(Obj349838 *image)
{
    s32 bytesPerPixel = pixelSize(image->format);
    s32 total = image->width * image->height * bytesPerPixel;
    for (s32 i = 0; i < total; i += bytesPerPixel) {
        swapBytes(&image->data[i], &image->data[i + 1]);
    }
    return 1;
}
