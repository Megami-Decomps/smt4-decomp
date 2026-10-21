/* NON_MATCHING: retail preserves the destination in caller-saved r3; external-call compilation uses r4. */
#include "common.h"
extern "C" {
void FUN_0011fdd8(void *object, const void *source);
/* Applies the object operation and returns the original object. */
void *FUN_00306d38(void *object, const void *source) {
    FUN_0011fdd8(object, source);
    return object;
}
}
