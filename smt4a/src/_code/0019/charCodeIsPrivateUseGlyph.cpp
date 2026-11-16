#include "common.h"
#include "shard/W6_W6Match8_TextHistory.h"

extern "C" {

/* Returns whether `value` is in 0xF801..0xF88F. */
u8 charCodeIsPrivateUseGlyph(s32 value)
{
    return value - 0xF801U < 0x8F;
}

} /* extern "C" */
