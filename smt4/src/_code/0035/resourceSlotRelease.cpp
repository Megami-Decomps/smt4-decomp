#include "common.h"
struct ResourceSlot { void *resource; };
extern "C" {
void mobiclipCtrlReleaseResource(void *resource);
/* Releases the slot's resource and returns the cleared slot. */
ResourceSlot *resourceSlotRelease(ResourceSlot *slot) {
    mobiclipCtrlReleaseResource(slot->resource);
    slot->resource = NULL;
    return slot;
}
}
