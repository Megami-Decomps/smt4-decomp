/* NON_MATCHING: template-copy VFP grouping, packed-flag OR association, and saved registers differ. */
#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates g_gpuCommandDefaults;
void FUN_002adba8(const void *commands, u32 byteCount, s32 copyCommands);

// Submit a texture register packet with dimensions, address, wrapping, and filtering.
void FUN_00138810(u32 width, u32 height, s32 textureFormat, u32 byteAddress,
                  u32 wrap, u32 minFilter, u32 magFilter)
{
    TextureCommandBlock formats = g_gpuCommandDefaults.formats;
    TextureCommandBlock command = g_gpuCommandDefaults.command;
    command.words[2] = height | (width << 16);
    command.words[3] = formats.words[textureFormat] | (wrap << 12) | (wrap << 8) |
                       (minFilter << 2) | (magFilter << 1);
    command.words[5] = byteAddress >> 3;
    command.words[12] = textureFormat;
    FUN_002adba8(&command, sizeof(command), 1);
}
}
