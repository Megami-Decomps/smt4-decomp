/* NON_MATCHING: retail emits 'bhi 28'; compiler emits 'bhi 24' at the first differing instruction. */
#include "common.h"

extern "C" {
struct Entry { u8 pad[0x34]; u16 value; u8 rest[0x1A]; }; extern struct { u32 reserved; struct { u8 pad[0x5F0C]; Entry entries[1]; } *table; } g_gameDataBlocks;
u16 FUN_0031cfd0(u32 index) { return index<=1280?g_gameDataBlocks.table->entries[index].value:0; }
}
