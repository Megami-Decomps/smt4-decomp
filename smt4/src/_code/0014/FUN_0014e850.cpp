/* NON_MATCHING: both template blocks are copied to the stack as in retail (frame matches); the copy of the command block's middle words is split into single loads instead of one vldmia. */
#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_commandArchiveFormats;
void FUN_002adba8(const void *commands, u32 bytes, u32 mode);

void FUN_0014e850(u32 width, u32 height, u32 format, u32 address)
{
    TextureCommandBlock formats = g_commandArchiveFormats.formats;
    TextureCommandBlock command = g_commandArchiveFormats.command;
    command.words[2] = (width << 16) | height;
    command.words[3] = formats.words[format] | 0x2200;
    command.words[5] = address >> 3;
    command.words[12] = format;
    FUN_002adba8(&command, sizeof(command), 1);
}
}
