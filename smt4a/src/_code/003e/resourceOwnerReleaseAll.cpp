#include "common.h"

extern "C" {

typedef struct Resource Resource;
typedef struct ResourceVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(Resource *self);
} ResourceVtbl;
struct Resource {
    /* 0x00 */ ResourceVtbl *vtbl;
};

typedef struct Slot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Resource *resource;
    /* 0x0C */ u8 unk0C[0x50];
} Slot;                          /* 0x5C bytes */

typedef struct Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Resource *extra;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ Slot slots[3];
} Owner;

/* Releases the resource of each of the three slots and the owner's extra resource, clearing the pointers. */
void resourceOwnerReleaseAll(Owner *owner)
{
    int i = 0;

    do {
        Slot *slot = &owner->slots[i];

        if (slot->resource != NULL) {
            slot->resource->vtbl->release(slot->resource);
            slot->resource = NULL;
        }
        i++;
    } while (i < 3);
    if (owner->extra != NULL) {
        owner->extra->vtbl->release(owner->extra);
        owner->extra = NULL;
    }
}

} /* extern "C" */
