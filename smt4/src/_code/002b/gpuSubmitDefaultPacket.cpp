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
extern CommandDefaults g_gpuCommandDefaults;
void FUN_002adba8(const CommandPacket* commands, u32 size, s32 submit);

// Submits the default 48-byte command packet with prefix 0x100.
void gpuSubmitDefaultPacket(void)
{
    CommandPacket commands;
    commands.first = g_gpuCommandDefaults.first;
    commands.second = g_gpuCommandDefaults.second;
    commands.prefix = 0x100;
    FUN_002adba8(&commands, sizeof(commands), 1);
}
}
