#include "common.h"
extern "C" {
void FUN_003026b0(void *work, u32 *value);
/* Retrieves the scalar value from the work object. */
u32 FUN_00304e82(void *work) {
    u32 value;
    FUN_003026b0(work, &value);
    return value;
}
}
