#include "classes/Obj4207c0.h"

extern "C" int textureContentRelease(Obj4207c0Resource *resource);
extern Obj4207c0Registry DAT_0047e508;

/* Drops each held resource: one reference less, and when it was the last, the registry's entry for
 * it is torn down and deleted. */
Obj4207c0::~Obj4207c0()
{
    for (int i = 0; i < 16; i++) {
        Obj4207c0Resource *resource = resources[i];

        if (resource == NULL) {
            continue;
        }
        Obj4207c0Registry *registry = &DAT_0047e508;
        if (resource->refCount == 1) {
            u32 id = resource->id;

            for (int j = 0; j < 16; j++) {
                Obj4207c0Resource **slot = reinterpret_cast<Obj4207c0Resource **>(registry) + j;
                Obj4207c0Resource *entry = slot[1];
                if (entry != NULL && entry->id == id) {
                    textureContentRelease(entry);
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
