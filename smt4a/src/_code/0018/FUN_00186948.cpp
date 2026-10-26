/* NON_MATCHING: the copies are now retail's two VFP blocks (7 + 4 words); armcc keeps the shifted value in r0 and the preset address in r1 where retail computes `lsl r1, r0, #8` first and loads the preset into r0. */
#include "shard/W6_W6Match4_RegisterCommands.h"

extern "C" {
extern const RegisterCommandData DAT_0053d500;
void FUN_001b4120(const void *commands, u32 byteCount);

// Submit the preset register sequence with its first value selected by the caller.
void FUN_00186948(u32 value)
{
    RegisterCommandPacket packet;
    packet.head = DAT_0053d500.head;
    packet.tail = DAT_0053d500.tail;
    packet.value = value << 8;
    FUN_001b4120(&packet, sizeof(packet));
}
}
