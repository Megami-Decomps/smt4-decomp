#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_gpuCommandTemplates;
void gpuSubmitCommandBlock(const void *, u32);

// Submit the texture-unit register commands built from the default template.
void gxSubmitTextureUnitCommands(s32 width, u32 height, u32 format, u32 physicalAddress,
                  u32 wrap, u32 minFilter, u32 magFilter)
{
    TextureCommandBlock formatFlags = g_gpuCommandTemplates.formats;
    TextureCommandBlock commands = g_gpuCommandTemplates.command;
    commands.words[2] = height | (static_cast<u32>(width) << 16);
    commands.words[3] = (wrap << 12) | (wrap << 8) | (minFilter << 2) |
                        (magFilter << 1) | formatFlags.words[format];
    commands.words[5] = physicalAddress >> 3;
    commands.words[12] = format;
    gpuSubmitCommandBlock(&commands, sizeof(commands));
}
}
