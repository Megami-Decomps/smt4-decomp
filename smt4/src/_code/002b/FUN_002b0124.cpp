/* NON_MATCHING: compiler copies the preset words in an 8/3 partition instead of retail's 7/4 VFP copy. */
#include "shard/W6_W6Match4_RegisterCommands.h"

extern "C" {
extern const RegisterCommandData g_gpuCommandDefaults;
void FUN_002adba8(const void *commands, u32 byteCount, s32 mode);

// Submit the preset register sequence with its first value selected by the caller.
void FUN_002b0124(u32 value)
{
    RegisterCommandPacket packet;
    packet.value = value << 8;
    packet.commands = g_gpuCommandDefaults.commands;
    FUN_002adba8(&packet, sizeof(packet), 1);
}
}
