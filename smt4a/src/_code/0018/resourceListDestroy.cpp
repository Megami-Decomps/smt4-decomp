#include "shard/Resource.h"

extern "C" {

void asdMemFree(void *memory);

/* Destroys a resource: releases its data through the handler for its type, frees its two buffers and the resource itself. */
static __inline void resourceDestroy(Resource *resource)
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

typedef struct Node {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ struct Node *firstChild;    /* only meaningful on the list head */
    /* 0x90 */ Resource *resource;
    /* 0x94 */ u8 unk94[4];
    /* 0x98 */ u32 flags;                  /* bit 0: the resource is shared and not owned */
    /* 0x9C */ u8 unk9C[0x10];
    /* 0xAC */ struct Node *next;
} Node;

/* Frees a list of nodes: each node's resource (unless shared) and the node itself, then the list head. */
void resourceListDestroy(Node *list)
{
    Node *node;
    Node *next;

    node = list->firstChild;
    while (node != NULL) {
        next = node->next;
        if ((node->flags & 1) == 0) {
            resourceDestroy(node->resource);
        }
        asdMemFree(node);
        node = next;
    }
    asdMemFree(list);
}

} /* extern "C" */
