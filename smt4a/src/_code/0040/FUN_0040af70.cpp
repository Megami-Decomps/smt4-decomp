/* NON_MATCHING: retail loads the vector end once before the clearing loop (no unrolling) and re-reads begin/end for the erase; every form that caches the end (iterator or pointer, for or while) gets unrolled by armcc, so the end is re-read per iteration here (19 vs 18 rows). */
#include "common.h"
#include <vector>

struct LinkedItem {
    u8 unk000[0x268]; // 0x000
    void* owner;       // 0x268
};
struct LinkedItemOwner {
    u8 unk00[0x18]; // 0x00
    std::vector<LinkedItem*> items; // 0x18
};

// Clears each item's owner link and removes the full range from the vector.
extern "C" void FUN_0040af70(LinkedItemOwner* owner)
{
    for (std::vector<LinkedItem*>::iterator item = owner->items.begin(); item != owner->items.end(); ++item) {
        (*item)->owner = NULL;
    }
    owner->items.erase(owner->items.begin(), owner->items.end());
}
