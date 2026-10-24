#include "common.h"

struct Obj3421d4Target;
struct Obj3421d4TargetVtbl {
    u8 unk00[0x1c];
    void (*slot1c)(u32 handle);
};

struct Obj3421d4Target {
    Obj3421d4TargetVtbl *vtbl;
};

struct Obj3421d4 {
    u8 unk00[4];
    u32 handle;
    Obj3421d4TargetVtbl *vtbl;
};

/* Calls slot 7 of the target's vtable with the object's handle. */
extern "C" void FUN_003421d4(Obj3421d4 *obj)
{
    obj->vtbl->slot1c(obj->handle);
}
