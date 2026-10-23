/* NON_MATCHING: retail loads the registry address inside the outer loop and computes the slot
 * address once before the release call; this build hoists the registry into r5 and keeps j live. */
#include "classes/Obj4207c0.h"

extern "C" {
void gfxResourceTableReleaseTexturesAndBuffers(Obj4207c0Resource *resource);
extern Obj4207c0Registry DAT_005cc508;
}

/* Drops every held resource reference; the last reference releases the resource and removes it
 * from the registry. */
Obj4207c0::~Obj4207c0()
{
    for (s32 i = 0; i < 16; i++) {
        Obj4207c0Resource *resource = resources[i];
        if (resource == NULL) {
            continue;
        }
        if (resource->refCount == 1) {
            Obj4207c0Registry *registry = &DAT_005cc508;
            u32 id = resource->id;
            for (s32 j = 0; j < 16; j++) {
                Obj4207c0Resource *entry = registry->entries[j];
                if (entry != NULL && entry->id == id) {
                    gfxResourceTableReleaseTexturesAndBuffers(entry);
                    delete registry->entries[j];
                    registry->entries[j] = NULL;
                    break;
                }
            }
        } else {
            resource->refCount--;
        }
    }
}
