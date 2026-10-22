/* NON_MATCHING: last-primary-entry gating is preserved, but its address and the conditional decrements differ. */
#include "shard/ResourceRegistration.h"

extern "C" {
extern ResourceRegistration DAT_004d92f0[64];
extern ResourceRegistration g_registrationEntries[64];
void resourceDestroy(void *resource);
void resourceListDestroy(void *resource);

void FUN_00105970()
{
    for (s32 index = 0; index < 64; ++index) {
        ResourceRegistration *entry = &DAT_004d92f0[index];
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
        ResourceRegistration *entry = &g_registrationEntries[index];
        if (entry->resource) {
            if (DAT_004d92f0[63].referenceCount > 0) {
                --entry->referenceCount;
            } else {
                resourceListDestroy(entry->resource);
                entry->resource = NULL;
            }
        }
    }
}
}
