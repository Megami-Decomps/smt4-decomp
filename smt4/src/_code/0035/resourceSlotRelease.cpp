#include "common.h"
struct ResourceSlot { void *resource; };
extern "C" {
void FUN_003f6b28(void *resource);
/* Releases the slot's resource and returns the cleared slot. */
ResourceSlot *resourceSlotRelease(ResourceSlot *slot) {
    FUN_003f6b28(slot->resource);
    slot->resource = NULL;
    return slot;
}
}
