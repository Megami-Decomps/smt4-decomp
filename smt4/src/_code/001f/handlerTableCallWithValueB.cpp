#include "shard/Resource.h"

extern "C" {

/* Sets the resource's orientation through its type's handler, if it has one. */
void handlerTableCallWithValueB(Resource *resource, const f32 *orientation)
{
    void (*callback)(void *data, const f32 *orientation);

    callback = g_handlerTable[resource->type].setOrientation;
    if (callback != NULL) {
        callback(resource->data, orientation);
        return;
    }
}

} /* extern "C" */
