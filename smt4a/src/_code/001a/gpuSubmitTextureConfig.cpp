/* NON_MATCHING: both template blocks are copied as in retail; only the scheduling of the words[5] and words[12] stores around the format-table load differs. */
#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_gpuCommandTemplates;
void gpuSubmitCommandBlock(const void *commands, u32 bytes);

void gpuSubmitTextureConfig(u32 width, u32 height, u32 format, u32 address)
{
    TextureCommandBlock formats = g_gpuCommandTemplates.formats;
    TextureCommandBlock command = g_gpuCommandTemplates.command;
    command.words[2] = (width << 16) | height;
    command.words[5] = address >> 3;
    command.words[3] = formats.words[format] | 0x2200;
    command.words[12] = format;
    gpuSubmitCommandBlock(&command, sizeof(command));
}
}
