#include "common.h"
extern "C" {
s32 FUN_00426634(void *object);
/* Rejects a missing object with the service's invalid-handle result. */
s32 FUN_0042632c(void *object) { return object != NULL ? FUN_00426634(object) : (s32)0xE0409FFF; }
}
