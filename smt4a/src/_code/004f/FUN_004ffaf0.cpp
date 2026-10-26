#include "common.h"

struct OptionalValue { u8 unk00[4]; f32 value; u8 unk08[4]; u32 present; };
struct ValueOwner { u8 unk00[132]; OptionalValue optional; };

/* Returns the optional value, or zero if absent. */
extern "C" f32 FUN_004ffaf0(ValueOwner *owner)
{
    OptionalValue *optional = &owner->optional;
    return optional->present == 0 ? 0.0f : optional->value;
}
