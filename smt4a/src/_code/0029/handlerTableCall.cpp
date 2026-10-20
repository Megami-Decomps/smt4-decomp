#include "shard/Resource.h"

extern "C" {

/* Runs the handler's callback at 0x28 (if its type has one) on the resource data. */
void handlerTableCall(Resource *resource)
{
    void (*callback)(void *data);

    callback = g_handlerTable[resource->type].callback28;
    if (callback != NULL) {
        callback(resource->data);
        return;
    }
}

} /* extern "C" */
