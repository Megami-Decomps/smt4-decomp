#include "common.h"
#include "shard/Resource.h"
#include "code/Code0013_Smt4a.h"

extern "C" {

void asdMemFree(void *memory);

/* Destroys a resource: releases its data through the handler for its type, frees its two buffers and the resource itself. */
void resourceDestroy(Resource *resource)
{
    if (resource->data != NULL) {
        g_handlerTable[resource->type].release(resource->data);
    }
    if (resource->bufferA != NULL) {
        asdMemFree(resource->bufferA);
        resource->sizeA = 0;
        resource->countA = 0;
        resource->bufferA = NULL;
    }
    if (resource->bufferB != NULL) {
        asdMemFree(resource->bufferB);
        resource->sizeB = 0;
        resource->countB = 0;
        resource->bufferB = NULL;
    }
    asdMemFree(resource);
}

} /* extern "C" */
