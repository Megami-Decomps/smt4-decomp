#include "common.h"

namespace { struct Part { u8 padding[0x40]; f32 value; }; struct Owner { u8 padding[0x34]; s32 count; u8 gap[0x14]; Part *part; u8 gap2[0x24]; f32 factor; f32 value; }; }

extern "C" {
/* Reads or updates the requested object state. */
void FUN_0029bb14(Owner *owner, f32 value)
{
    owner->value = value;
    if (owner->count > 0) {
        f32 scaled = owner->factor * value;
        if (owner->part != NULL) {
            owner->part->value = scaled;
        }
    }
}
}
