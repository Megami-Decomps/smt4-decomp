#include "shard/Resource.h"

extern "C" {

/* Runs the handler's callback at 0x24 (if its type has one) on the resource data and `arg`. */
void handlerTableCallWithValueB(Resource *resource, s32 arg)
{
    void (*callback)(void *data, s32 arg);

    callback = g_handlerTable[resource->type].callback24;
    if (callback != NULL) {
        callback(resource->data, arg);
        return;
    }
}

} /* extern "C" */
