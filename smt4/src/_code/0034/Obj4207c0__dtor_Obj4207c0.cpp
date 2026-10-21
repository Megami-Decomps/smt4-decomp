/* NON_MATCHING: retail loads the registry address into r2 inside the loop (r7 holds the zero); the compiler hoists it into r7 here and zero goes to r8. */
#include "classes/Obj4207c0.h"

extern "C" int textureContentRelease(Obj4207c0Resource *resource);
extern Obj4207c0Registry DAT_0047e508;

/* Drops each held resource: one reference less, and when it was the last, the registry's entry for
 * it is torn down and deleted. */
Obj4207c0::~Obj4207c0()
{
    for (int i = 0; i < 16; i++) {
        Obj4207c0Resource *resource = resources[i];

        if (resource != NULL) {
            if (resource->refCount == 1) {
                u32 id = resource->id;

                for (int j = 0; j < 16; j++) {
                    if (DAT_0047e508.entries[j] != NULL && DAT_0047e508.entries[j]->id == id) {
                        textureContentRelease(DAT_0047e508.entries[j]);
                        delete DAT_0047e508.entries[j];
                        DAT_0047e508.entries[j] = NULL;
                        break;
                    }
                }
            } else {
                resource->refCount--;
            }
        }
    }
}
