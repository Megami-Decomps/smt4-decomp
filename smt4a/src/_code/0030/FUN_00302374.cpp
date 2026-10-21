/* NON_MATCHING: compiler changes the register allocation and store/frame scheduling shown by retail. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055b0fc;
struct Object { const void *vtable; u32 state; u32 values[6]; void *context; };
void *onlineInstantiationContextGetCurrent(void);
/* Initializes an empty object using the current instantiation context. */
Object *FUN_00302374(Object *object) {
    for (u32 index = 0; index < 6; ++index) object->values[index] = 0;
    object->state = 0;
    object->vtable = &DAT_0055b0fc;
    object->context = onlineInstantiationContextGetCurrent();
    return object;
}
}
