#include "classes/Obj4207c0.h"

extern "C" {

extern Obj4207c0Registry DAT_005cc508;
void gfxResourceTableReleaseTexturesAndBuffers(Obj4207c0Resource *resource);

/* Drops one reference to a shared resource; the last reference releases it and removes it from
 * the registry. */
void resourceReleaseReference(Obj4207c0Resource *resource)
{
    Obj4207c0Registry *registry = &DAT_005cc508;

    if (resource->refCount == 1) {
        u32 id = resource->id;
        for (s32 i = 0; i < 16; i++) {
            Obj4207c0Resource **slot = reinterpret_cast<Obj4207c0Resource **>(registry) + i;
            Obj4207c0Resource *entry = slot[1];
            if (entry != NULL && entry->id == id) {
                gfxResourceTableReleaseTexturesAndBuffers(entry);
                delete slot[1];
                slot[1] = NULL;
                return;
            }
        }
    } else {
        resource->refCount--;
    }
}

} /* extern "C" */
