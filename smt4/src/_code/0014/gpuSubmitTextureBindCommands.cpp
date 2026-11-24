#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_gpuCommandDefaults;
void gpuSubmitCommandBlock(const void *commands, u32 bytes, u32 mode);

void gpuSubmitTextureBindCommands(u32 width, u32 height, u32 format, u32 address)
{
    TextureCommandFormats formats = g_gpuCommandDefaults.formats;
    TextureBindPacket command = g_gpuCommandDefaults.command;
    command.dimensions = (width << 16) | height;
    command.formatFlags = formats.words[format] | 0x2200;
    command.encodedAddress = address >> 3;
    command.format = format;
    gpuSubmitCommandBlock(&command, sizeof(command), 1);
}
}
