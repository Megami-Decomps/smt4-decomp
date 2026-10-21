/* NON_MATCHING: compiler reserves a larger address-taken-argument frame than retail. */
#include "common.h"
extern "C" {
void FUN_0030bb20(u32 *output, void *context, const u32 *value);
/* Adapts a scalar source to the pointer-based conversion operation. */
void FUN_002f3ff0(void *context, const u32 *source, u32 unused, u32 output) {
    u32 value = *source;
    FUN_0030bb20(&output, context, &value);
}
}
