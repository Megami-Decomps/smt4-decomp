#include "common.h"
extern "C" {
struct StatusBlock { u8 unk00[0x27E0F]; u8 bits; };
struct SaveView { u8 unk00[0x88]; StatusBlock state; };
extern struct { u32 unk00; SaveView *table; } g_gameDataBlocks;
/* Sets or clears the requested bits in the game-data status byte. */
void gameDataBlocksSetFlagBits(u8 mask, s32 enabled)
{
    StatusBlock *state = &g_gameDataBlocks.table->state;

    if (enabled != 0) {
        state->bits |= mask;
    } else {
        state->bits &= ~mask;
    }
}
}
