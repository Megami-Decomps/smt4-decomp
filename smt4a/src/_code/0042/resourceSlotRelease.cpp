#include "common.h"
struct ResourceSlot { void *resource; };
extern "C" {
void FUN_005143ac(void *resource);
/* Releases the slot's resource and returns the cleared slot. */
ResourceSlot *resourceSlotRelease(ResourceSlot *slot) {
    FUN_005143ac(slot->resource);
    slot->resource = NULL;
    return slot;
}
}
