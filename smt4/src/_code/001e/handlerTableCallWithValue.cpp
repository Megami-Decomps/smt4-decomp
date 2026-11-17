#include "shard/Resource.h"

extern "C" {

/* Sets the resource's packed tint through its type's handler, if it has one. */
void handlerTableCallWithValue(Resource *resource, u32 color)
{
    void (*callback)(void *data, u32 color);

    callback = g_handlerTable[resource->type].setPackedColor;
    if (callback != NULL) {
        callback(resource->data, color);
        return;
    }
}

} /* extern "C" */
