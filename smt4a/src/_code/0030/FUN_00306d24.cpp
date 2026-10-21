/* NON_MATCHING: compiler reorders the vtable and field stores; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055a790;
struct Object { const void *vtable; u8 active; u8 unk05[3]; u32 value; u16 kind; };
/* Initializes virtual dispatch and the object's scalar fields. */
void FUN_00306d24(Object *object, u32 value, u16 kind) {
    object->active = 0;
    object->vtable = &DAT_0055a790;
    object->value = value;
    object->kind = kind;
}
}
