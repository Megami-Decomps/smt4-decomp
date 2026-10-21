/* NON_MATCHING: compiler hoists the vtable write before the flag write; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055a7a0;
struct Object { const void *vtable; u8 active; u8 unk05[3]; u32 value; };
/* Initializes the object's virtual dispatch and state. */
void FUN_0030cac0(Object *object) {
    object->active = 0;
    object->vtable = &DAT_0055a7a0;
    object->value = 0;
}
}
