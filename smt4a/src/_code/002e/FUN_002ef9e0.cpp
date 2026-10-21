/* NON_MATCHING: compiler writes the vtable before the value, reversing retail's stores; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_00559344;
struct Object { const void *vtable; u16 value; };
/* Initializes the object's virtual dispatch and state. */
void FUN_002ef9e0(Object *object, u16 value) {
    object->value = value;
    object->vtable = &DAT_00559344;
}
}
