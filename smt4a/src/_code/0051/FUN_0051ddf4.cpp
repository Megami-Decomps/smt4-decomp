/* NON_MATCHING: bias load and unsigned-to-float conversion use different VFP registers. */
#include "common.h"
struct ValueOwner { u8 unk00[8]; f32 scale,bias; };
extern "C" {
u32 *FUN_0051d95c(ValueOwner *owner);
/* Scales and biases the high twenty bits of the current record. */
f32 FUN_0051ddf4(ValueOwner *owner) { u32 *record=FUN_0051d95c(owner);return owner->bias+(f32)(*record>>12)*owner->scale; }
}
