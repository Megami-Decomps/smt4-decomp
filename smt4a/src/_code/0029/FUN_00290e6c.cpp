#include "shard/Resource.h"

extern "C" {

/* Runs the handler's callback at 0x30 (if its type has one) on the resource data and `arg`. */
void FUN_00290e6c(Resource *resource, s32 arg)
{
    void (*callback)(void *data, s32 arg);

    callback = g_handlerTable[resource->type].callback30;
    if (callback != NULL) {
        callback(resource->data, arg);
        return;
    }
}

} /* extern "C" */
