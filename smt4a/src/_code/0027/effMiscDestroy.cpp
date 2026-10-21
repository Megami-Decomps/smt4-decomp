#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

void asdTextureRelease(void *resource);
void asdMemFree(void *block);

extern EffMiscKind g_effMiscKinds[];

/* Destroys an effect object: the kind's state, then its share of the shared resource (freed
 * with the last reference), then the object. */
void effMiscDestroy(EffMiscObject *obj)
{
    EffMiscShared *shared;

    if (obj->state != NULL) {
        g_effMiscKinds[obj->kind].destroy(obj->state);
    }
    shared = obj->shared;
    if (shared != NULL && --shared->refCount == 0) {
        if (shared->type != 4) {
            asdTextureRelease(shared->resource);
        }
        asdMemFree(shared);
    }
    asdMemFree(obj);
}

} /* extern "C" */
