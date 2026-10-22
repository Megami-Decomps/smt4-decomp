#include "common.h"
extern "C" {
extern const u8 DAT_00558490;
struct Object { const void *vtable; u8 active; u8 unk05[3]; void *string; u32 value; };
void *operatorNew(u32 size);
void *strInit(void *memory);
void _ZN9Obj55b28d4initEv(Object *object);
/* Allocates the object's string storage and initializes its state. */
Object *FUN_002f2afc(Object *object) {
    object->vtable = &DAT_00558490;
    void *memory = operatorNew(32);
    object->string = memory != NULL ? strInit(memory) : NULL;
    object->active = 0; object->value = 0;
    return object;
}
}
