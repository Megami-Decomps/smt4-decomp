#include "shard/Shard003E.h"

extern "C" {

extern void resourceReleaseReference(void *obj);

/* Releases the object of each of the 12 entries and clears the pointer. */
void btlReleaseEntries(BtlStateB *state)
{
    s32 i;
    LinkEntry10 *entry;

    for (i = 0; i < 0xC; i++) {
        entry = &state->entries4D78[i];
        if (entry->obj != NULL) {
            resourceReleaseReference(entry->obj);
            entry->obj = NULL;
        }
    }
}

} /* extern "C" */
