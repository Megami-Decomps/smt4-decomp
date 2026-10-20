#include "common.h"

extern "C" {

extern u8 DAT_004211d0;

struct Owner;
typedef struct OwnerVtbl {
    /* 0x0 */ void *unk0[3];
    /* 0xC */ void (*release)(struct Owner *owner, u32 handle);
} OwnerVtbl;

typedef struct Owner {
    /* 0x0 */ OwnerVtbl *vtbl;
} Owner;

typedef struct Obj {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[8];
    /* 0x00C */ u32 slot0;
    /* 0x010 */ u32 slot1;
    /* 0x014 */ u32 slot0Data;
    /* 0x018 */ u32 slot1Data;
    /* 0x01C */ u32 slot2;
    /* 0x020 */ u32 slot2Data;
    /* 0x024 */ u32 slot3;
    /* 0x028 */ u32 slot3Data;
    /* 0x02C */ u8 unk02C[0x1DC];
    /* 0x208 */ Owner *owner;
    /* 0x20C */ u32 handle;
} Obj;

Obj *FUN_00364cf4(Obj *obj)
{
    obj->vtbl = &DAT_004211d0;
    obj->owner->vtbl->release(obj->owner, obj->handle);
    if (obj->slot0 != 0) {
        obj->slot0 = 0;
        obj->slot0Data = 0;
    }
    if (obj->slot1 != 0) {
        obj->slot1 = 0;
        obj->slot1Data = 0;
    }
    if (obj->slot2 != 0) {
        obj->slot2 = 0;
        obj->slot2Data = 0;
    }
    if (obj->slot3 != 0) {
        obj->slot3 = 0;
        obj->slot3Data = 0;
    }
    return obj;
}

} /* extern "C" */
