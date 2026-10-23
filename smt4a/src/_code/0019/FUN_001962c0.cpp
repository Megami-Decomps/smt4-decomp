/* NON_MATCHING: texture transfer record scheduling has not matched retail. */
#include "gfx/TextureTransferCommand.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Append a same-size texture transfer, converting GL pixel formats to GPU formats. */
void FUN_001962c0(AsdCmdBuffer *buffer, const void *source, void *destination,
              u16 width, u16 height, s32 pixelFormat)
{
    u32 format;
    switch (pixelFormat) {
    case 0x8051: format = 1; break;
    case 0x8056: format = 4; break;
    case 0x8057: format = 3; break;
    case 0x8058: format = 0; break;
    case 0x8D62: format = 2; break;
    default: return;
    }
    TextureTransferCommand *command = reinterpret_cast<TextureTransferCommand *>(
        &buffer->entries[buffer->listCount]);
    command->kind = 3;
    command->source = source;
    command->destination = destination;
    command->input.size.width = width;
    command->output.size.width = static_cast<u16>(command->input.value);
    command->input.size.height = height;
    command->output.size.height = static_cast<u16>(command->input.value >> 16);
    command->format.inputFormat = format;
    command->format.outputFormat = command->format.inputFormat;
    command->format.options = 4;
    command->format.enabled = 1;
    globalCriticalSectionEnterForward();
    buffer->listCount++;
    if (g_asdGfxContext.activeBuffer == buffer &&
        g_asdGfxContext.submission.enabled != 0 && g_asdGfxContext.submission.pending == 0) {
        g_asdGfxContext.submission.pending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
