/* NON_MATCHING: compiler uses different address construction, argument registers or stack-frame scheduling than retail. */
#include "common.h"
extern "C" {
extern struct { u32 unk00; struct { u8 unk00[0x88]; struct { u8 unk00[0x27E0F]; u8 bits; } state; } *table; } g_gameDataBlocks;
/* Sets or clears the requested bits in the game-data status byte. */
void gameDataBlocksSetFlagBits(u8 mask, s32 enabled) {
    if (enabled != 0) g_gameDataBlocks.table->state.bits |= mask;
    else g_gameDataBlocks.table->state.bits &= ~mask;
}
}
