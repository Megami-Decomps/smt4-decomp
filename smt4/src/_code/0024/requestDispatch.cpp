#include "shard/Resource.h"

extern "C" {

/* Updates the resource through its type's handler. */
void requestDispatch(Resource *resource)
{
    g_handlerTable[resource->type].update(resource->data);
}

} /* extern "C" */
