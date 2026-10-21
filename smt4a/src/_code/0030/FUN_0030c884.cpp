/* NON_MATCHING: retail preserves the destination in caller-saved r3; external-call compilation uses r4. */
#include "common.h"
extern "C" {
void FUN_0012027e(void *object, const void *source);
/* Applies the object operation and returns the original object. */
void *FUN_0030c884(void *object, const void *source) {
    FUN_0012027e(object, source);
    return object;
}
}
