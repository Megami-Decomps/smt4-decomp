#include "shard/Resource.h"

extern "C" {

/* Runs the resource type's handler on its data. */
void eventDispatch(Resource *resource)
{
    g_handlerTable[resource->type].run(resource->data);
}

} /* extern "C" */
