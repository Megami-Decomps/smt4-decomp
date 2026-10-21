/* NON_MATCHING: retail copies the 44-byte defaults as seven plus four VFP words; compiler uses eight plus three. */
#include "common.h"

struct CommandArguments {
    u32 words[11];
};

struct CommandDefaults {
    u8 unk00[0xec]; // 0x00
    CommandArguments arguments; // 0xec
};

struct CommandPacket {
    u32 opcode; // 0x00
    CommandArguments arguments; // 0x04
};

extern "C" {
extern const CommandDefaults DAT_0053d500;
void FUN_001b4120(const CommandPacket* packet, u32 size);

// Submit the fixed 0x100 command and its default argument block.
void FUN_0019ea00()
{
    CommandPacket packet;
    packet.arguments = DAT_0053d500.arguments;
    packet.opcode = 0x100;
    FUN_001b4120(&packet, sizeof(packet));
}
}
