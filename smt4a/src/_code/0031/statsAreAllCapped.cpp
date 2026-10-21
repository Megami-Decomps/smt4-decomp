#include "common.h"

struct StatBlock {
    u32 unk00;    // 0x00
    s16 stats[5]; // 0x04
};

// Reports whether all five stats have reached the 999 cap.
extern "C" u32 statsAreAllCapped(const StatBlock* block)
{
    u32 capped = 1;
    if (block->stats[0] < 999) capped = 0;
    if (block->stats[1] < 999) capped = 0;
    if (block->stats[2] < 999) capped = 0;
    if (block->stats[3] < 999) capped = 0;
    if (block->stats[4] < 999) capped = 0;
    return capped;
}
