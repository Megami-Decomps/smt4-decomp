/* NON_MATCHING: VFP integer-conversion and multiply-accumulate registers differ. */
#include "common.h"
struct ValueOwner {u8 unk00[16];f32 scale,bias;};
extern "C" {
u8 *FUN_0051c338(ValueOwner *owner);
/* Scales the unaligned little-endian halfword from the selected record. */
f32 FUN_00518a20(ValueOwner *owner){u8 *record=FUN_0051c338(owner);u32 value=record[1]+(record[2]<<8);return owner->bias+(f32)value*owner->scale;}
}
