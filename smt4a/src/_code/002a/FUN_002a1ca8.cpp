/* NON_MATCHING: retail stores the last field through a writeback pointer (`str r5,[r4,#16]!`) with a separate `mov r0,#0`; built reuses r5 for both zero stores */
/* Frees the object's two buffers and clears its state. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *bufferB;
    /* 0x0C */ void *bufferA;
    /* 0x10 */ u32 size;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u32 flags;
} Object;

extern void asdMemFree(void *buffer);
extern void FUN_001800b8(void *buffer);

void FUN_002a1ca8(Object *obj)
{
    if (obj->bufferA != NULL) {
        asdMemFree(obj->bufferA);
        obj->bufferA = NULL;
    }
    if (obj->bufferB != NULL) {
        FUN_001800b8(obj->bufferB);
        obj->bufferB = NULL;
    }
    obj->size = 0;
    obj->flags = 0;
}

}
