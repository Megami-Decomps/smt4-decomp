#include "common.h"

extern "C" {

void FUN_00222104(void *ref);
void FUN_00222434(void *shared);
void FUN_002ce8d8(u32 handle);
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
        FUN_00222434(object->shared);
    }
    if (object->ref != NULL) {
        FUN_00222104(object->ref);
    }
    FUN_002ce8d8(object->handle);
    asdMemFree(object);
}

} /* extern "C" */
