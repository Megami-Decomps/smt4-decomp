/* NON_MATCHING: compiler reassociates the bitset address and removes the post-store byte mask before comparison. */
#include "shard/W6_W6Match5_MapDiscovery.h"

extern "C" MapDiscoveryState *FUN_0023d2ec(void);

// Update a cell's discovered bit and report whether its containing byte changed.
extern "C" u8 MapNavi_SetDiscoveredCell(u32 cell, s32 discovered)
{
    MapDiscoveryState *state = FUN_0023d2ec();
    u8 *bits = state->discovered;
    u8 *byte = &bits[cell >> 3];
    u8 previous = *byte;
    u8 mask = 1u << (cell & 7);
    u32 updated = discovered != 0 ? mask | previous : previous & ~mask;
    *byte = updated;
    return (u8)updated != previous;
}
