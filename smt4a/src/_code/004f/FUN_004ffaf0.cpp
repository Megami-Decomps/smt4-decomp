/* NON_MATCHING: compiler folds the embedded-object pointer into field offsets. */
#include "common.h"
struct OptionalValue { u8 unk00[4]; f32 value; u8 unk08[4]; u32 present; };
struct ValueOwner { u8 unk00[132]; OptionalValue optional; };
/* Returns the optional value, or zero if absent. */
extern "C" f32 FUN_004ffaf0(ValueOwner *owner) { return owner->optional.present == 0 ? 0.0f : owner->optional.value; }
