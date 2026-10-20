#include "common.h"

extern "C" {

void asdMemFree(void *memory);

typedef struct Buffers {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *bufferA;
    /* 0x0C */ void *bufferB;
    /* 0x10 */ u32 sizeA;
    /* 0x14 */ u32 sizeB;
    /* 0x18 */ void *bufferC;
} Buffers;

/* Frees the three buffers (those that exist) and clears the two sizes. */
void FUN_001b55f8(Buffers *object)
{
    if (object->bufferA != NULL) {
        asdMemFree(object->bufferA);
        object->bufferA = NULL;
    }
    if (object->bufferB != NULL) {
        asdMemFree(object->bufferB);
        object->bufferB = NULL;
    }
    if (object->bufferC != NULL) {
        asdMemFree(object->bufferC);
        object->bufferC = NULL;
    }
    object->sizeA = 0;
    object->sizeB = 0;
}

} /* extern "C" */
