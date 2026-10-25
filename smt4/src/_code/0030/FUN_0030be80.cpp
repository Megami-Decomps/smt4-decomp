/* NON_MATCHING: compiler swaps first/second argument retention between R4/R5 and reuses R4 for the second computed value; retail uses R4/R5 in the opposite roles. */
#include "common.h"

struct LinkedEntryMetadata {
    u8 unk00[0x26]; // 0x00
    u16 linkedId;    // 0x26
};

extern "C" {
LinkedEntryMetadata* FUN_002498ec(u32 id);
u16 FUN_00288e68(u32 id);
s32 FUN_0028d1f4(u32 id);

// Sorts entries by computed linked-record value descending, then linked ID descending.
s32 FUN_0030be80(const u16* first, const u16* second)
{
    LinkedEntryMetadata* a = FUN_002498ec(*first);
    LinkedEntryMetadata* b = FUN_002498ec(*second);
    s32 secondValue = FUN_0028d1f4(FUN_00288e68(*second));
    s32 firstValue = FUN_0028d1f4(FUN_00288e68(*first));
    s32 order = secondValue - firstValue;
    if (order == 0) {
        order = b->linkedId - a->linkedId;
    }
    return order;
}
}
