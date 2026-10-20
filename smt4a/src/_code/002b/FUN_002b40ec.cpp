#include "common.h"

extern "C" {

void resourceDestroy(void *resource);
void resourceListDestroy(void *list);
void handleBlockRefDrop(void *ref);
void handleBlockUnref(void *shared);
void objectBufferFree(void *object);
void geometryDestroy(void);
void asdMemFree(void *memory);

typedef struct Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 count;
} Owner;

typedef struct Collection {
    /* 0x00 */ u32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 flags;
    /* 0x0F */ u8 unk0F[0x25];
    /* 0x34 */ void **resources;
    /* 0x38 */ void *resourceBuffer;
    /* 0x3C */ void **lists;
    /* 0x40 */ void *listBuffer;
    /* 0x44 */ void *ref;
    /* 0x48 */ void *shared;
    /* 0x4C */ Owner *owner;
    /* 0x50 */ void *extra;
} Collection;

/* Destroys the collection: its resources and lists (counted by the owner when it has one, otherwise by `count`) with their buffers, the reference and shared block, the owner's buffer when bit 0 of `flags` is set, the extra object, and the collection itself. */
void FUN_002b40ec(Collection *collection)
{
    u32 i;
    u32 count;

    if (collection->resourceBuffer != NULL) {
        i = 0;
        if (collection->owner != NULL) {
            count = collection->owner->count;
        } else {
            count = collection->count;
        }
        for (i = 0; i < count; i = i + 1) {
            resourceDestroy(collection->resources[i]);
        }
        asdMemFree(collection->resourceBuffer);
    }
    if (collection->listBuffer != NULL) {
        i = 0;
        if (collection->owner != NULL) {
            count = collection->owner->count;
        } else {
            count = collection->count;
        }
        for (i = 0; i < count; i = i + 1) {
            resourceListDestroy(collection->lists[i]);
        }
        asdMemFree(collection->listBuffer);
    }
    if (collection->ref != NULL) {
        handleBlockRefDrop(collection->ref);
    }
    if (collection->shared != NULL) {
        handleBlockUnref(collection->shared);
    }
    if ((collection->flags & 1) != 0) {
        objectBufferFree(collection->owner);
    }
    if (collection->extra != NULL) {
        geometryDestroy();
    }
    asdMemFree(collection);
}

} /* extern "C" */
