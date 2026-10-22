/* NON_MATCHING: Retail movs r4, r0 differs from recovered mov r4, r0. */
#include "common.h"

struct InputStateView {
    u8 unk00[0x100]; // 0x000
    u8 unk100;      // 0x100
};

struct InputStateHandleView {
    InputStateView* state; // 0x00
};

struct KeyRangeView {
    u16 firstKey;        // 0x00
    u16 lengthAndBits;   // 0x02: low 14 bits are length
    u16 packedSelectors; // 0x04
};

extern "C" {
extern InputStateHandleView* FUN_002c6a50(void);
extern u32 inputGetKeyFlags(u32 keyCode);
}

// Resolve alternate-state key flags with a binary search of packed key ranges.
extern "C" u32 FUN_0010004a(u32 keyCode)
{
    InputStateHandleView* handle = FUN_002c6a50();
    if (handle->state->unk100 == 0) {
        return inputGetKeyFlags(keyCode);
    }

    if (keyCode >= 0x10000) {
        return 0;
    }

    const KeyRangeView* ranges =
        reinterpret_cast<const KeyRangeView*>(0x41801c);
    s32 lower = -1;
    s32 upper = 0x2e3;
    s32 middle;

    while (upper - lower > 1) {
        middle = (lower + upper) / 2;
        const KeyRangeView& range = ranges[middle];
        if (static_cast<u16>(keyCode - range.firstKey) <
            (range.lengthAndBits & 0x3fff)) {
            break;
        }

        if (range.firstKey > static_cast<s32>(keyCode)) {
            upper = middle;
        } else {
            lower = middle;
        }
    }

    if (upper - lower <= 1) {
        return 0;
    }

    const KeyRangeView& range = ranges[middle];
    u32 selectorBits = range.lengthAndBits >> 14;
    u32 selectorIndex = (keyCode - range.firstKey) &
                        ~(~0u << selectorBits);
    const u32* flagValues = reinterpret_cast<const u32*>(0x417fe4);
    return flagValues[(range.packedSelectors >> (selectorIndex * 4)) & 0xf];
}
