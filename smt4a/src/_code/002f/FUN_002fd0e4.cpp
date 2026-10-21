/* NON_MATCHING: compiler combines vtable/value stores into stm; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_00558904;
struct Object { const void *vtable; u32 value; };
/* Initializes the object's virtual dispatch and state. */
void FUN_002fd0e4(Object *object) {
    object->value = 0;
    object->vtable = &DAT_00558904;
}
}
