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
    walkRanges(*g_allocationAddressRanges.head);
    walkRanges(*g_allocationAddressRanges.head);
    walkRanges(*g_allocationAddressRanges.head);
    walkRanges(*g_allocationAddressRanges.head);
}

} /* extern "C" */
