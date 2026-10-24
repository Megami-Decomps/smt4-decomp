#include "common.h"

struct PixelBuffer {
    /* 0x00 */ u32 format;
    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ u8 *pixels;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 width;
    /* 0x1c */ s32 height;
};

static __inline void swapBytes(u8 *a, u8 *b)
{
    u8 temp = *a;
    *a = *b;
    *b = temp;
}

extern "C" {

/* Reverses the byte order of every texel in place (4, 3, 2 or 1 bytes per texel by format). */
u32 FUN_0041913c(PixelBuffer *buffer)
{
    s32 bytes;
    if (buffer->format == 26450) {
        bytes = 4;
    } else if (buffer->format == 26452) {
        bytes = 3;
    } else if (buffer->format == 26456) {
        bytes = 2;
    } else {
        bytes = 1;
    }
    s32 total = buffer->width * buffer->height * bytes;
    for (s32 i = 0; i < total; i += bytes) {
        swapBytes(&buffer->pixels[i], &buffer->pixels[i + 3]);
        swapBytes(&buffer->pixels[i + 1], &buffer->pixels[i + 2]);
    }
    return 1;
}

} /* extern "C" */
