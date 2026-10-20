#include "shard/Resource.h"

extern "C" {

/* Runs the handler's callback at 0x2C (if its type has one) on the resource data and `arg`. */
void FUN_00300908(Resource *resource, u32 arg)
{
    void (*callback)(void *data, u32 arg);

    callback = g_handlerTable[resource->type].callback2C;
    if (callback != NULL) {
        callback(resource->data, arg);
        return;
    }
}

} /* extern "C" */
