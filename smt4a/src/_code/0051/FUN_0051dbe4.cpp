/* NON_MATCHING: bias load and unsigned-to-float conversion use different VFP registers. */
#include "common.h"
struct ValueOwner { u8 unk00[8]; f32 scale,bias; };
extern "C" {
u32 *FUN_0051d658(ValueOwner *owner);
/* Scales and biases the high twenty bits of the current record. */
f32 FUN_0051dbe4(ValueOwner *owner) { u32 *record=FUN_0051d658(owner);return owner->bias+(f32)(*record>>12)*owner->scale; }
}
