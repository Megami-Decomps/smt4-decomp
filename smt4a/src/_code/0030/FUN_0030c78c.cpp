/* NON_MATCHING: compiler hoists the vtable write before the flag write; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055aea0;
struct Object { const void *vtable; u8 active; };
/* Initializes the object's virtual dispatch and state. */
void FUN_0030c78c(Object *object) {
    object->active = 0;
    object->vtable = &DAT_0055aea0;
}
}
