#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_gpuCommandTemplates;
void gpuSubmitCommandBlock(const void *commands, u32 bytes);

/* Submits the default texture-bind packet with the image's dimensions, format, and address. */
void gpuSubmitTextureConfig(u32 width, u32 height, u32 format, u32 address)
{
    TextureCommandFormats formats = g_gpuCommandTemplates.formats;
    TextureBindPacket command = g_gpuCommandTemplates.command;
    u32 packedDimensions = (width << 16) | height;
    u32 encodedAddress = address >> 3;
    command.dimensions = packedDimensions;
    u32 formatFlags = formats.words[format] | 0x2200;
    command.formatFlags = formatFlags;
    command.encodedAddress = encodedAddress;
    command.format = format;
    gpuSubmitCommandBlock(&command, sizeof(command));
}
} /* extern "C" */
