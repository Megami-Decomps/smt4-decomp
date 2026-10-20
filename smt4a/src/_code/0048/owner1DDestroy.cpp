#include "shard/Shard0048.h"

extern "C" {

typedef struct OwnedData {
    /* 0x00 */ const ObjectVtbl *vtbl;
    /* 0x04 */ u8 *data;
} OwnedData;

typedef struct Owner1D {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x70];
    /* 0x74 */ Object *first;
    /* 0x78 */ Object *second;
} Owner1D;

extern u8 DAT_0055c824;
extern u32 DAT_0056fcc0;
extern void FUN_001aea28(u32 a, u8 *data);

/* Destroy hook: restores the vtable and releases the two owned objects. */
Owner1D *owner1DDestroy(Owner1D *obj)
{
    Object *second;
    u8 *data;

    obj->vtbl = &DAT_0055c824;
    if (obj->first != NULL) {
        obj->first->vtbl->release(obj->first);
        obj->first = NULL;
    }
    second = obj->second;
    if (second != NULL && (data = ((OwnedData *)second)->data) != NULL) {
        FUN_001aea28(DAT_0056fcc0, data);
        if (obj->second != NULL) {
            obj->second->vtbl->release(obj->second);
            obj->second = NULL;
        }
    }
    return obj;
}

} /* extern "C" */
