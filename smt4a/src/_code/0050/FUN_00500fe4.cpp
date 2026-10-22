/* NON_MATCHING: Address arithmetic and command-header constants use different registers and scheduling. */
#include "gfx/TextureCommands.h"

extern "C" {
extern u32 DAT_005893b8;

/* Builds the texture setup command packet and returns the next free command word. */
u32 *FUN_00500fe4(u32 unused, u32 *commands, const TextureCommandSource *texture)
{
    u32 flags = texture->enabled ? 0 : 0x80000000;
    u32 address = texture->address - DAT_005893b8 * 8;
    *commands++ = 1;
    *commands++ = 0xF025F;
    *commands++ = flags | address;
    *commands++ = 0xF0227;
    *commands++ = texture->configuration;
    *commands++ = 0xF0228;
    *commands++ = 0;
    *commands++ = 0x10245;
    *commands++ = 1;
    *commands++ = 0xF022F;
    *commands++ = 1;
    *commands++ = 0x10245;
    *commands++ = 1;
    *commands++ = 0xF0231;
    *commands++ = 0;
    *commands++ = 0x8025E;
    *commands++ = 0;
    *commands++ = 0x8025E;
    return commands;
}
}
