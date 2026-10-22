/* NON_MATCHING: Retail movs r4, r0 differs from recovered mov r4, r0. */
#include "common.h"

namespace {
struct InputStateView {
    u8 unk00[0x100]; // 0x00
    u8 unk100;       // 0x100
};

struct KeyRangeView {
    u16 firstKey;      // 0x00
    u16 lengthAndBits; // 0x02: low 14 bits length, high 2 bits index width
    u16 packedIndices; // 0x04
};
}

extern "C" {
extern InputStateView **FUN_002e2a98(void);
extern u32 inputGetKeyFlags(u32 key);

// Search the enabled packed key ranges, or delegate to the normal key lookup.
u32 FUN_0010004a(u32 key)
{
    if ((*FUN_002e2a98())->unk100 == 0) {
        return inputGetKeyFlags(key);
    }

    if (key >= 0x10000) {
        return 0;
    }

    const KeyRangeView *ranges =
        reinterpret_cast<const KeyRangeView *>(0x54f1f4);
    s32 lower = -1;
    s32 upper = 0x2e3;
    s32 middle;

    while (upper - lower > 1) {
        middle = (lower + upper) / 2;
        const KeyRangeView &range = ranges[middle];
        if (static_cast<u16>(key - range.firstKey) <
            (range.lengthAndBits & 0x3fff)) {
            break;
        }
        if (range.firstKey > static_cast<s32>(key)) {
            upper = middle;
        } else {
            lower = middle;
        }
    }

    if (upper - lower <= 1) {
        return 0;
    }

    const KeyRangeView &range = ranges[middle];
    u32 indexMask = ~(~0u << (range.lengthAndBits >> 14));
    u32 shift = ((key - range.firstKey) & indexMask) * 4;
    u32 index = (static_cast<u32>(range.packedIndices) >> shift) & 0xf;
    const u32 *flags = reinterpret_cast<const u32 *>(0x54f1bc);
    return flags[index];
}
}
