#include "shard/Resource.h"

extern "C" {

/* Sets the resource's colour through its type's handler, if it has one. */
void effectResourceSetColor(Resource *resource, const Vec4 *color)
{
    void (*callback)(void *data, const Vec4 *color);

    callback = g_handlerTable[resource->type].setColor;
    if (callback != NULL) {
        callback(resource->data, color);
        return;
    }
}

} /* extern "C" */
