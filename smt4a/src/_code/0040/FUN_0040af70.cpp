/* NON_MATCHING: standard-vector range erasure reproduces the tail arithmetic, but loop unrolling and begin/end reload scheduling differ. */
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
    std::vector<LinkedItem*>::iterator end = owner->items.end();
    for (std::vector<LinkedItem*>::iterator item = owner->items.begin(); item != end; ++item) {
        (*item)->owner = NULL;
    }
    owner->items.erase(owner->items.begin(), owner->items.end());
}
