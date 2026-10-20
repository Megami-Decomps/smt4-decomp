/* NON_MATCHING: retail takes the address of the second member (add r5, r4, #1460) before testing it and stores zero through it; built stores with a plain offset. */
#include "common.h"

extern "C" {

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x5B0];
    /* 0x5B0 */ void *object;
    /* 0x5B4 */ void *buffer;
} Owner;

void FUN_004285cc(void);
void asdOperatorDelete(void);
void asdMemFree(void);

/* Releases the object and the buffer an owner holds. */
void ownerReleaseResources(Owner *owner)
{
    void *object = owner->object;
    void *buffer;

    if (object != NULL) {
        FUN_004285cc();
        asdOperatorDelete();
        owner->object = NULL;
    }
    buffer = owner->buffer;
    if (buffer != NULL) {
        asdMemFree();
        owner->buffer = NULL;
    }
}

} /* extern "C" */
