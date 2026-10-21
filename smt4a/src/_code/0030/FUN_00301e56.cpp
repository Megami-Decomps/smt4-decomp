/* NON_MATCHING: compiler moves the value argument before the null check. */
#include "common.h"
extern "C" {
void FUN_001301be(void *object, u32 value, u32 option);
/* Applies a value to an optional object. */
void FUN_00301e56(void *unused, void *object, u32 value) {
    if (object != NULL) FUN_001301be(object, value, 0);
}
}
