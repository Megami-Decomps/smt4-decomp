#include "common.h"

struct Obj408598TargetVtbl {
    void (*slot00)(u32 handle, u32 value);
};

struct Obj408598 {
    u8 unk00[4];
    u32 handle;
    Obj408598TargetVtbl *vtbl;
};

/* Calls slot 0 of the target's vtable with the object's handle and the caller's value. */
extern "C" void FUN_00408598(Obj408598 *obj, u32 value)
{
    obj->vtbl->slot00(obj->handle, value);
}
