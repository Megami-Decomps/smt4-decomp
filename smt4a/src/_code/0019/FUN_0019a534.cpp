/* NON_MATCHING: the four list walks (an inline helper per walk gives retail's r0..r3 walker registers) match except that retail loads the head into r0 and copies it to r3 at the first guard, while the build loads r3 and copies to r0, so armcc threads the guards' skip branches (0x34/0x48/0x5c) where retail jumps to each next walk's guard (0x20/0x34/0x48). */
#include "common.h"

struct AddressRange {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ AddressRange *next;
};

struct AllocationAddressRanges {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AddressRange **head;
};

extern "C" {

extern AllocationAddressRanges g_allocationAddressRanges; /* 0x5b4028 */

/* Walks a chain to its end; the per-step bookkeeping was stripped from the release build. */
static __inline void walkRanges(AddressRange *range)
{
    while (range != NULL) {
        range = range->next;
    }
}

/* Walks the allocation address-range list four times. */
void FUN_0019a534(void)
{
    AddressRange *head = *g_allocationAddressRanges.head;
    walkRanges(head);
    walkRanges(head);
    walkRanges(head);
    walkRanges(head);
}

} /* extern "C" */
