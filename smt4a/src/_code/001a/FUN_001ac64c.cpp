/* NON_MATCHING: the immutable format table is read directly instead of copying it to the stack first. */
#include "shard/TextureCommandTemplates.h"

extern "C" {
extern const TextureCommandTemplates DAT_0053d500;
void FUN_001b4120(const void *commands, u32 bytes);

void FUN_001ac64c(u32 width, u32 height, u32 format, u32 address)
{
    TextureCommandBlock command = DAT_0053d500.command;
    command.words[2] = (width << 16) | height;
    command.words[3] = DAT_0053d500.formats.words[format] | 0x2200;
    command.words[5] = address >> 3;
    command.words[12] = format;
    FUN_001b4120(&command, sizeof(command));
}
}
