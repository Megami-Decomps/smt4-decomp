/* NON_MATCHING: framebuffer command emission uses different scratch registers and control-word scheduling. */
/* Emits and commits the hardware command sequence binding a pair of render buffers. */
#include "gfx/RenderTargetBind.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {
void asdModelCommitCommandRange(u32 *start, u32 *end);

void FUN_00154d68(const AsdGxRenderBuffer *color, const AsdGxRenderBuffer *depth,
                  u32 format, s32 samples)
{
    u32 *commands = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    u32 *cursor = commands;
    *cursor++ = 1;
    *cursor++ = 0xF0111;
    *cursor++ = 1;
    *cursor++ = 0xF0110;
    *cursor++ = color->typeSelector | color->unk04 << 16;
    *cursor++ = 0xF0117;
    u32 control = (samples * 0x1000 - 0x1000U) | format | 0x1000000;
    *cursor++ = color->unk0C >> 3;
    *cursor++ = 0xF011D;
    *cursor++ = control;
    *cursor++ = 0xF011E;
    *cursor++ = depth->unk04;
    *cursor++ = 0xF0116;
    *cursor++ = depth->unk0C >> 3;
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
