#include "common.h"
extern "C" {
extern const u8 DAT_00558490;
struct Object { const void *vtable; u8 active; u8 unk05[3]; void *string; u32 value; };
void *_Znwj(u32);
void *FUN_002e7614(void *, u32);
/* Constructs owned string storage from the caller's value. */
Object *FUN_002eff90(Object *object, u32 value) {
    object->vtable = &DAT_00558490;
    void *memory = _Znwj(32);
    object->string = memory != NULL ? FUN_002e7614(memory, value) : NULL;
    object->active = 0; object->value = 0;
    return object;
}
}
