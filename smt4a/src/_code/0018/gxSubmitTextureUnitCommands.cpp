#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_gpuCommandTemplates;
void gpuSubmitCommandBlock(const void *, u32);

// Submit the texture-unit register commands built from the default template.
void gxSubmitTextureUnitCommands(s32 width, u32 height, u32 format, u32 physicalAddress,
                  u32 wrap, u32 minFilter, u32 magFilter)
{
    TextureCommandFormats formatFlags = g_gpuCommandTemplates.formats;
    TextureBindPacket commands = g_gpuCommandTemplates.command;
    commands.dimensions = height | ((u32)width << 16);
    commands.formatFlags = (wrap << 12) | (wrap << 8) | (minFilter << 2) |
                           (magFilter << 1) | formatFlags.words[format];
    commands.encodedAddress = physicalAddress >> 3;
    commands.format = format;
    gpuSubmitCommandBlock(&commands, sizeof(commands));
}
}
