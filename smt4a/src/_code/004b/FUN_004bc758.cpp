#include "common.h"
struct GameDataEntry { u8 unk00[3]; u8 flags; };
extern "C" {
GameDataEntry *gameDataGetTableEntry(u32 id);
/* Replaces the table entry's top flag bit. */
void FUN_004bc758(u32 id, u32 unused, u32 enabled) {
    GameDataEntry *entry = gameDataGetTableEntry(id);
    entry->flags = (entry->flags & ~0x80) | (enabled << 7);
}
}
