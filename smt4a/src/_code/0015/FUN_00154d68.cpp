/* NON_MATCHING: framebuffer command emission uses different scratch registers and control-word scheduling. */
/* Emits and commits the hardware command sequence binding a pair of render buffers. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

struct RenderBufferBinding {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 width;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 address;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 height;
};

extern "C" {
void asdModelCommitCommandRange(u32 *start, u32 *end);

void FUN_00154d68(const RenderBufferBinding *color, const RenderBufferBinding *depth,
                  u32 format, s32 samples)
{
    u32 *commands = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    u32 *cursor = commands;
    *cursor++ = 1;
    *cursor++ = 0xF0111;
    *cursor++ = 1;
    *cursor++ = 0xF0110;
    *cursor++ = color->height | color->width << 16;
    *cursor++ = 0xF0117;
    u32 control = (samples * 0x1000 - 0x1000U) | format | 0x1000000;
    *cursor++ = color->address >> 3;
    *cursor++ = 0xF011D;
    *cursor++ = control;
    *cursor++ = 0xF011E;
    *cursor++ = depth->width;
    *cursor++ = 0xF0116;
    *cursor++ = depth->address >> 3;
    *cursor++ = 0xF011C;
    *cursor++ = control;
    *cursor++ = 0xF006E;
    *cursor++ = 1;
    *cursor++ = 0xF0111;
    *cursor++ = 1;
    *cursor++ = 0xF0110;
    asdModelCommitCommandRange(commands, cursor);
}
}
