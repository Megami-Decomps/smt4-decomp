#include "common.h"
struct ValueHolder { u8 unk00[4]; void *value; };
extern "C" {
f32 FUN_004ffb0c(void *value);
/* Returns the held object's selected value, or zero without an object. */
f32 FUN_004d86a0(ValueHolder **holder) { return *holder != NULL ? FUN_004ffb0c((*holder)->value) : 0.0f; }
}
