#include "shard/Resource.h"

extern "C" {

/* Runs the handler callback (if any) for the resource's type on its data. */
void FUN_0023235c(Resource *resource)
{
    void (*callback)(void *data);

    callback = g_handlerTable[resource->type].callback;
    if (callback != NULL) {
        callback(resource->data);
        return;
    }
}

} /* extern "C" */
