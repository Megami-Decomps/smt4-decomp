#include "shard/Resource.h"

extern "C" {

/* Runs the handler's callback at 0x20 (if its type has one) on the resource data and `arg`. */
void FUN_003008c4(Resource *resource, s32 arg)
{
    void (*callback)(void *data, s32 arg);

    callback = g_handlerTable[resource->type].callback20;
    if (callback != NULL) {
        callback(resource->data, arg);
        return;
    }
}

} /* extern "C" */
