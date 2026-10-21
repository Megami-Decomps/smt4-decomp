#include "common.h"
struct ValueOwner { u8 unk00[16]; f32 scale,bias; };
extern "C" {
u32 *FUN_0051ca30(ValueOwner *owner);
/* Scales and biases the high twenty bits of the current record. */
f32 FUN_00518a50(ValueOwner *owner) { u32 *record=FUN_0051ca30(owner);return owner->bias+(f32)(*record>>12)*owner->scale; }
}
