/* NON_MATCHING: 75 lines: retail fills the command words at fixed offsets from a base it advances once (stm, then add r0, r0, #4 and offsets from there) where this build walks the cursor with writeback, and it derives the register ids in another order. */
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

u32 *asdGxGetCommandCursor(void);
void asdModelAdvanceCommandCursorBetween(u32 *start, u32 *end);

/* Queue the GPU register writes that bind `color` and `depth` as render buffers. */
void FUN_0011a258(GxBufferDesc *color, GxBufferDesc *depth, u32 format, s32 levels)
{
    u32 *start = asdGxGetCommandCursor();
    u32 *cmd = start;
    u32 mode;

    *cmd++ = 1;
    *cmd++ = 0xF0111;
    *cmd++ = 1;
    *cmd++ = 0xF0110;
    *cmd++ = color->height | (color->width << 16);
    *cmd++ = 0xF0117;
    mode = (levels * 0x1000 - 0x1000U) | format | 0x1000000;
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
    asdModelAdvanceCommandCursorBetween(start, cmd);
}

} /* extern "C" */
