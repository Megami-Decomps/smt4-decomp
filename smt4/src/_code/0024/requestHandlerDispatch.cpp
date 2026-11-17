#include "shard/Resource.h"

extern "C" {

/* Sets the resource's position through its type's handler, if it has one. */
void requestHandlerDispatch(Resource *resource, const Vec4 *position)
{
    void (*callback)(void *data, const Vec4 *position);

    callback = g_handlerTable[resource->type].setPosition;
    if (callback != NULL) {
        callback(resource->data, position);
        return;
    }
}

} /* extern "C" */
