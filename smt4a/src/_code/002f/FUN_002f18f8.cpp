/* NON_MATCHING: compiler spills all argument registers and adjusts sp instead of retail's compact push/pop. */
#include "common.h"
extern "C" {
void onlineListInitialize(void *object, u32 *first, u32 mode, u32 *second);
/* Adapts two scalar arguments to the pointer-based operation. */
void FUN_002f18f8(void *object, u32 unused, u32 first, u32 second) {
    onlineListInitialize(object, &first, 0, &second);
}
}
