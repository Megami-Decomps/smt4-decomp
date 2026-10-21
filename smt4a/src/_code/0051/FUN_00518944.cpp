#include "common.h"
struct ValueRecord { u16 unk00; u16 value; };
struct ValueOwner { u8 unk00[16]; f32 scale; f32 bias; };
extern "C" {
ValueRecord *FUN_0051b830(ValueOwner *owner);
/* Applies the record's scale and bias. */
f32 FUN_00518944(ValueOwner *owner) { ValueRecord *record=FUN_0051b830(owner);return owner->bias+(f32)record->value*owner->scale; }
}
