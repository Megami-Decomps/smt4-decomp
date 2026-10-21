/* NON_MATCHING: compiler moves the vtable write ahead of the kind write; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_005590ec;
struct Object { const void *vtable; u32 value; u8 active; u8 unk09[3]; u32 count; u8 kind; };
/* Initializes virtual dispatch and clears the object's work fields. */
void FUN_003024c4(Object *object, u8 kind) {
    object->kind = kind;
    object->vtable = &DAT_005590ec;
    object->active = 0;
    object->value = 0;
    object->count = 0;
}
}
