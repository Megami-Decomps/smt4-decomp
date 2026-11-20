#include "classes/Obj557dcc.h"
#include "shard/ResourceRegistration.h"

extern "C" {
extern ResourceRegistration g_deferredResources[DEFERRED_DESTROY_SLOTS];
extern ResourceRegistration g_registrationEntries[DEFERRED_DESTROY_SLOTS];
void resourceDestroy(void *resource);

/* Runs the deferred-destruction queues for one frame: a queued resource whose frame count has run out is
 * destroyed and its slot freed, otherwise its count goes down. */
void resourceRunDeferredDestroys(void)
{
    ResourceRegistration *entry;

    for (s32 index = 0; index < DEFERRED_DESTROY_SLOTS; ++index) {
        entry = &g_deferredResources[index];
        if (entry->resource != NULL) {
            if (entry->framesRemaining > 0) {
                --entry->framesRemaining;
            } else {
                resourceDestroy(entry->resource);
                entry->resource = NULL;
            }
        }
    }
    for (s32 index = 0; index < DEFERRED_DESTROY_SLOTS; ++index) {
        ResourceRegistration *list = &g_registrationEntries[index];
        if (list->resource != NULL) {
            /* Retail tests the count of the first queue's last entry here, not this slot's own. */
            if (entry->framesRemaining <= 0) {
                resourceListDestroy(list->resource);
                list->resource = NULL;
            } else {
                --list->framesRemaining;
            }
        }
    }
}

} /* extern "C" */
