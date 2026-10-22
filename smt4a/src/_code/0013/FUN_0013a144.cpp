/* NON_MATCHING: last-primary-entry gating is preserved, but its address and the conditional decrements differ. */
#include "shard/ResourceRegistration.h"

extern "C" {
extern ResourceRegistration g_objectRegistry[64];
extern ResourceRegistration g_deferredEffectReleases[64];
void resourceDestroy(void *resource);
void resourceListDestroy(void *resource);

void FUN_0013a144()
{
    for (s32 index = 0; index < 64; ++index) {
        ResourceRegistration *entry = &g_objectRegistry[index];
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
        ResourceRegistration *entry = &g_deferredEffectReleases[index];
        if (entry->resource) {
            if (g_objectRegistry[63].referenceCount > 0) {
                --entry->referenceCount;
            } else {
                resourceListDestroy(entry->resource);
                entry->resource = NULL;
            }
        }
    }
}
}
