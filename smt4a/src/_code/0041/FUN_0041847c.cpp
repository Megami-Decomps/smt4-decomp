#include "common.h"
struct FlagPair { u8 flags; u8 other[3]; };
struct FlagBlock { u8 unk000[0x2A2]; FlagPair entries[1]; };
extern "C" {
FlagBlock *gameFlagBlockGet();
/* Sets bit 3 in the indexed flag pair. */
void FUN_0041847c(u32 index) {
    FlagBlock *block = gameFlagBlockGet();
    block->entries[index].flags |= 8;
}
}
