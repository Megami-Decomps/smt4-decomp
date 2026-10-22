/* NON_MATCHING: vtable-address preload, owner handle registers, and initial store scheduling differ. */
#include "common.h"

extern "C" {

typedef struct HandleObject HandleObject;

typedef struct HandleObjectVtbl {
    /* 0x00 */ void (*unk00)(HandleObject *object);
    /* 0x04 */ void (*release)(HandleObject *object);
} HandleObjectVtbl;

struct HandleObject {
    /* 0x00 */ HandleObjectVtbl *vtbl;
    /* 0x04 */ u32 flags;
};

typedef struct HandleOwner {
    /* 0x00 */ u32 id;
    /* 0x04 */ HandleObject *handle;
    /* 0x08 */ HandleObject *extra;
    /* 0x0c */ HandleObject *aux;
    /* 0x10 */ u32 unk10;
} HandleOwner;

void ptrListRemoveClearOwner(u32 registry, HandleObject *owner);
void asdOperatorDelete(void *p);
void FUN_003fd790(HandleObject *object);

extern u32 g_handleRegistry; /* 0x56fcc0 */
extern const u8 _ZTV9Obj4207c0[];

/* Unregisters an owner's handle, releases its three objects and frees the owner. */
void FUN_0040ac3c(HandleOwner *owner)
{
    HandleObject *handle;

    owner->id = (u32)(_ZTV9Obj4207c0 + 0x28);
    handle = owner->handle;
    owner->unk10 = 0;
    if (handle != NULL) {
        if (handle->flags & 4) {
            FUN_003fd790(handle);
        }
        ptrListRemoveClearOwner(g_handleRegistry, owner->handle);
    }
    if (owner->extra != NULL) {
        owner->extra->vtbl->release(owner->extra);
        owner->extra = NULL;
    }
    if (owner->handle != NULL) {
        owner->handle->vtbl->release(owner->handle);
        owner->handle = NULL;
    }
    if (owner->aux != NULL) {
        owner->aux->vtbl->release(owner->aux);
        owner->aux = NULL;
    }
    asdOperatorDelete(owner);
}

} /* extern "C" */
