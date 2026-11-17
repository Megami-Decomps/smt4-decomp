#include "shard/Resource.h"

extern "C" {

/* Sets the resource's intensity through its type's handler, if it has one. */
void handlerTableCall(Resource *resource, f32 intensity)
{
    void (*callback)(void *data, f32 intensity);

    callback = g_handlerTable[resource->type].setIntensity;
    if (callback != NULL) {
        callback(resource->data, intensity);
        return;
    }
}

} /* extern "C" */
