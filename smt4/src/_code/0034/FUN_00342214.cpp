#include "common.h"

extern "C" {

struct Target;
typedef struct TargetVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ u32 (*query)(u32 handle);
    /* 0x8 */ void (*apply)(u32 handle, u32 value);
} TargetVtbl;

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
    /* 0x8 */ TargetVtbl *vtbl;
} Obj;

/* Stores query(handle) into *out, then calls apply(handle, value). */
void FUN_00342214(Obj *obj, u32 value, u32 *out)
{
    u32 result = obj->vtbl->query(obj->handle);

    *out = result;
    obj->vtbl->apply(obj->handle, value);
}

} /* extern "C" */
