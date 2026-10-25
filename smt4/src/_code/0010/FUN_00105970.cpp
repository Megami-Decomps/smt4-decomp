#include "shard/ResourceRegistration.h"

extern "C" {
extern ResourceRegistration DAT_004d92f0[64];
extern ResourceRegistration g_registrationEntries[64];
void resourceDestroy(void *resource);
void resourceListDestroy(void *resource);

void FUN_00105970()
{
    ResourceRegistration *entry;

    for (s32 index = 0; index < 64; ++index) {
        entry = &DAT_004d92f0[index];
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
        ResourceRegistration *registration = &g_registrationEntries[index];
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
