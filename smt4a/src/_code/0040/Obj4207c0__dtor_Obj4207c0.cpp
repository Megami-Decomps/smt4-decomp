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
        Obj4207c0Registry *registry = &DAT_005cc508;
        if (resource->refCount == 1) {
            u32 id = resource->id;
            for (s32 j = 0; j < 16; j++) {
                Obj4207c0Resource **slot = reinterpret_cast<Obj4207c0Resource **>(registry) + j;
                Obj4207c0Resource *entry = slot[1];
                if (entry != NULL && entry->id == id) {
                    gfxResourceTableReleaseTexturesAndBuffers(entry);
                    delete slot[1];
                    slot[1] = NULL;
                    break;
                }
            }
        } else {
            resource->refCount--;
        }
    }
}
