/* NON_MATCHING: the four list walks, head copy and registers match; armcc threads the skip branch of the second and third walk to the end of the following walk (beq 0x48/0x5c) where retail jumps to the next walk's guard (0x34/0x48). */
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

/* Walks the allocation address-range list four times; the per-pass bookkeeping was stripped from the release build. */
void FUN_0019a534(void)
{
    AddressRange *range = *g_allocationAddressRanges.head;
    AddressRange *head = range;
    while (range != NULL) {
        range = range->next;
    }
    range = head;
    while (range != NULL) {
        range = range->next;
    }
    range = head;
    while (range != NULL) {
        range = range->next;
    }
    range = head;
    while (range != NULL) {
        range = range->next;
    }
}

} /* extern "C" */
