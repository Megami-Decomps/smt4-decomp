#include "common.h"

extern "C" {

void asdMemFree(void *memory);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ void *bufferA;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ u32 flags;
    /* 0x30 */ u8 unk30[0x14];
    /* 0x44 */ void *bufferB;
} Holder;

/* Frees bufferA unless bit 4 of `flags` marks it as borrowed, and frees bufferB. */
void FUN_002371cc(Holder *object)
{
    if ((object->bufferA != NULL) && ((object->flags & 0x10) == 0)) {
        asdMemFree(object->bufferA);
        object->bufferA = NULL;
    }
    if (object->bufferB != NULL) {
        asdMemFree(object->bufferB);
        object->bufferB = NULL;
    }
}

} /* extern "C" */
