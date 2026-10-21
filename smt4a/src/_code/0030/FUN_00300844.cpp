/* NON_MATCHING: compiler uses separate registers for zero and the kind byte; constructor naming pending. */
#include "common.h"
extern "C" {
struct Object { const void *vtable; u8 unk04; u8 kind; u8 unk06[2]; u32 value; u32 parameter; };
extern const u8 _ZTV9Obj55b314[];
Object *FUN_00106e4c(Object *object);
/* Initializes the derived object's virtual dispatch and kind. */
Object *FUN_00300844(Object *object, u32 parameter) {
    object = FUN_00106e4c(object);
    object->parameter = parameter;
    object->value = 0;
    object->vtable = _ZTV9Obj55b314 + 8;
    object->kind = 0;
    return object;
}
}
