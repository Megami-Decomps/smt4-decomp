/* NON_MATCHING: retail keeps the pixel size in r3 and leaves a conditional load of 0x6756 after the format chain (a fourth compare that was removed); registers differ, the loop shape matches. */
#include "common.h"

struct Obj349838 {
    s32 format;
    u8 unk04[0xc];
    u8 *data;
    u8 unk14[4];
    s32 width;
    s32 height;
};

/* Swaps each pair of adjacent bytes at pixel stride of the image data (byte order fix), by pixel format. */
extern "C" s32 FUN_00349838(Obj349838 *image)
{
    s32 bytesPerPixel;
    if (image->format == 0x6752) {
        bytesPerPixel = 4;
    } else if (image->format == 0x6754) {
        bytesPerPixel = 3;
    } else if (image->format == 0x6758) {
        bytesPerPixel = 2;
    } else {
        bytesPerPixel = 1;
    }
    s32 total = image->width * image->height * bytesPerPixel;
    for (s32 i = 0; i < total; i += bytesPerPixel) {
        u8 *second = image->data + i + 1;
        u8 *first = image->data + i;
        u8 low = *second;
        u8 high = *first;
        *first = low;
        *second = high;
    }
    return 1;
}
