#include "common.h"
extern "C" {
struct GameSettingsMember { u8 unk00[0x1F0]; f32 value; };
extern struct { u32 unk00; struct { u8 unk00[0x5274]; GameSettingsMember member; } *table; } g_gameDataBlocks;
/* Reads the game-data floating-point setting. */
f32 FUN_002c263c(void)
{
    GameSettingsMember *member = &g_gameDataBlocks.table->member;
    return member->value;
}
}
