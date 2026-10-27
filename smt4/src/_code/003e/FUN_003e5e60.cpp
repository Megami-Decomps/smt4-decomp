/* NON_MATCHING: typed rewrite (32 vs 36 rows); retail tests each flag with `bics` against a mask register (mask 0x20 hoisted once for two cases) and this build emits `ands` with an immediate. */
#include "common.h"

struct ControlState {
    /* 0x000 */ u8 unk000[0x188];
    /* 0x188 */ u32 flags;
};

/* An input mapping that reports whether the flag bound to a control is currently held. */
struct ControlBinding {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ ControlState *state;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ s32 enabledCount;
};

/* True when every bit of `mask` is set in `flags`. */
static __inline bool hasAllFlags(u32 flags, u32 mask)
{
    return (flags & mask) == mask;
}

extern "C" u32 FUN_003e5e60(ControlBinding *binding, u32 control)
{
    if (binding->enabledCount <= 0) {
        return 0;
    }
    u32 flags = binding->state->flags;
    switch (control) {
    default:
        return 0;
    case 1:
        if (hasAllFlags(flags, 4)) {
            return 1;
        }
        return 0;
    case 2:
        if (hasAllFlags(flags, 0x20)) {
            return 1;
        }
        return 0;
    case 3:
        if (hasAllFlags(flags, 0x20)) {
            return 1;
        }
        return 0;
    case 4:
        if (hasAllFlags(flags, 0x800)) {
            return 1;
        }
        return 0;
    case 5:
        if (hasAllFlags(flags, 0x10)) {
            return 1;
        }
        return 0;
    }
}
