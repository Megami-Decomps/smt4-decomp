#include "common.h"
extern "C" {
extern const u8 DAT_0055b2e0;
struct Object { const void *vtable; u8 active; u8 unk05[3]; void *string; u32 value; };
void *_Znwj(u32 size);
void *strInit(void *memory);
void _ZN9Obj55b2d84initEv(Object *object);
/* Allocates the object's string storage and initializes its state. */
Object *FUN_002fde5c(Object *object) {
    object->vtable = &DAT_0055b2e0;
    void *memory = _Znwj(32);
    object->string = memory != NULL ? strInit(memory) : NULL;
    _ZN9Obj55b2d84initEv(object);
    return object;
}
}
