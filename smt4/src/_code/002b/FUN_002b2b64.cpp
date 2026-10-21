#include "common.h"

namespace {
struct Value { u8 padding[0x38]; f32 value; };
struct Owner { u8 padding[0x34]; s32 count; u8 gap[0x14]; Value *value; };
}

extern "C" {
/* Reads or updates the requested object state. */
f32 FUN_002b2b64(const Owner *owner)
{
    f32 value = 0.0f;
    if (owner->count > 0 && owner->value != NULL) {
        value = owner->value->value;
    }
    return value;
}
}
