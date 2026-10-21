/* NON_MATCHING: compiler copies the preset words in an 8/3 partition instead of retail's 7/4 VFP copy. */
#include "shard/W6_W6Match4_RegisterCommands.h"

extern "C" {
extern const RegisterCommandData DAT_0053d500;
void FUN_001b4120(const void *commands, u32 byteCount);

// Submit the preset register sequence with its first value selected by the caller.
void FUN_00186948(u32 value)
{
    RegisterCommandPacket packet;
    packet.value = value << 8;
    packet.commands = DAT_0053d500.commands;
    FUN_001b4120(&packet, sizeof(packet));
}
}
