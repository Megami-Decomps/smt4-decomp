#include "common.h"

struct CommandWords7 {
    u32 words[7];
};
struct CommandWords4 {
    u32 words[4];
};
struct CommandDefaults {
    u8 unk000[0xec]; // 0x000
    CommandWords7 first; // 0x0ec
    CommandWords4 second; // 0x108
};
struct CommandPacket {
    u32 prefix;           // 0x00
    CommandWords7 first;  // 0x04
    CommandWords4 second; // 0x20
};

extern "C" {
extern CommandDefaults g_gpuCommandTemplates;
void gpuSubmitCommandBlock(const CommandPacket* commands, u32 size);

// Submits the default 48-byte command packet with prefix 0x100.
void gpuSubmitDefaultPacket(void)
{
    CommandPacket commands;
    commands.first = g_gpuCommandTemplates.first;
    commands.second = g_gpuCommandTemplates.second;
    commands.prefix = 0x100;
    gpuSubmitCommandBlock(&commands, sizeof(commands));
}
}
