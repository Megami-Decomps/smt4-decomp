#include "shard/Resource.h"

extern "C" {

/* Runs the resource type's handler callback (if any) on its data. */
void eventDispatchIfSet(Resource *resource)
{
    void (*callback)(void *data);

    callback = g_handlerTable[resource->type].callback;
    if (callback != NULL) {
        callback(resource->data);
        return;
    }
}

} /* extern "C" */
