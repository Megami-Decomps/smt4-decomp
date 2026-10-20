#include "common.h"

extern "C" {

typedef struct Handler {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*release)(void *data);
    /* 0x14 */ u8 unk14[0x30];
} Handler;                      /* 0x44 */
extern Handler g_handlerTable[];

typedef struct Resource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 type;          /* index into g_handlerTable */
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *data;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 sizeA;
    /* 0x14 */ u32 countA;
    /* 0x18 */ void *bufferA;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u32 sizeB;
    /* 0x24 */ u32 countB;
    /* 0x28 */ void *bufferB;
} Resource;

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
