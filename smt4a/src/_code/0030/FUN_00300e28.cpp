#include "common.h"

extern "C" {

void handleBlockRefDrop(void *ref);
void handleBlockUnref(void *shared);
void geometryDestroy(u32 handle);
void asdMemFree(void *memory);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xC8];
    /* 0xC8 */ u32 handle;
    /* 0xCC */ void *shared;
    /* 0xD0 */ void *ref;
} Holder;

/* Releases the shared block and reference (when set) and the handle, then frees the object. */
void FUN_00300e28(Holder *object)
{
    if (object->shared != NULL) {
        handleBlockUnref(object->shared);
    }
    if (object->ref != NULL) {
        handleBlockRefDrop(object->ref);
    }
    geometryDestroy(object->handle);
    asdMemFree(object);
}

} /* extern "C" */
