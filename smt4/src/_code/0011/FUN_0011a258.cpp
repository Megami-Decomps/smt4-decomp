/* NON_MATCHING: retail fills the command words at fixed offsets from one base and derives the register ids arithmetically in another order; the build walks the pointer with writeback. */
#include "common.h"

extern "C" {

typedef struct GxBufferDesc {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 width;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 address;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 height;
} GxBufferDesc;

u32 *FUN_002b7148(void);
void FUN_002af390(u32 *start, u32 *end);

/* Queue the GPU register writes that bind `color` and `depth` as render buffers. */
void FUN_0011a258(GxBufferDesc *color, GxBufferDesc *depth, u32 format, s32 levels)
{
    u32 *start = FUN_002b7148();
    u32 *cmd = start;
    u32 mode;

    *cmd++ = 1;
    *cmd++ = 0xF0111;
    *cmd++ = 1;
    *cmd++ = 0xF0110;
    *cmd++ = color->height | (color->width << 16);
    *cmd++ = 0xF0117;
    mode = ((levels - 1) << 12) | format | 0x1000000;
    *cmd++ = color->address >> 3;
    *cmd++ = 0xF011D;
    *cmd++ = mode;
    *cmd++ = 0xF011E;
    *cmd++ = depth->width;
    *cmd++ = 0xF0116;
    *cmd++ = depth->address >> 3;
    *cmd++ = 0xF011C;
    *cmd++ = mode;
    *cmd++ = 0xF006E;
    *cmd++ = 1;
    *cmd++ = 0xF0111;
    *cmd++ = 1;
    *cmd++ = 0xF0110;
    FUN_002af390(start, cmd);
}

} /* extern "C" */
