#include "shard/ResourceRegistration.h"

extern "C" {
extern ResourceRegistration g_objectRegistry[64];
extern ResourceRegistration g_deferredEffectReleases[64];
void resourceDestroy(void *resource);
void resourceListDestroy(void *resource);

void FUN_0013a144()
{
    ResourceRegistration *entry;

    for (s32 index = 0; index < 64; ++index) {
        entry = &g_objectRegistry[index];
        if (entry->resource) {
            if (entry->referenceCount > 0) {
                --entry->referenceCount;
            } else {
                resourceDestroy(entry->resource);
                entry->resource = NULL;
            }
        }
    }
    for (s32 index = 0; index < 64; ++index) {
        ResourceRegistration *registration = &g_deferredEffectReleases[index];
        if (registration->resource) {
            /* Tests the last entry left over from the first loop, not this registration. */
            if (entry->referenceCount <= 0) {
                resourceListDestroy(registration->resource);
                registration->resource = NULL;
            } else {
                --registration->referenceCount;
            }
        }
    }
}
}
