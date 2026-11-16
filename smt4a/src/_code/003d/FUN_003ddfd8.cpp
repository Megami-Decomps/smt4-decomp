/* NON_MATCHING: the unrolled loop and its reloaded table address match; retail still returns the early 0 with its own movne and sets the result after the first flag load, and tests the first entry's bits with tst/tstne (built: two branches). */
#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

struct ChordFlagState {
    u8 unk00[0x1c];
    u32 flags; // 0x1c
};

extern "C" {
extern ChordFlagState DAT_0061951c[2];

/* Whether a state has both chord flags (bits 2 and 0x20) set. */
static __inline bool chordFlagsHeld(const ChordFlagState *state)
{
    return (state->flags & 2) != 0 && (state->flags & 0x20) != 0;
}

// Require both chord flags in either state, unless the resident table entry is active.
u32 FUN_003ddfd8(void)
{
    if (jyoucyuGetTableEntry(1) != NULL) {
        return 0;
    }
    u32 result = 0;
    for (s32 i = 0; i < 2; i++) {
        if (chordFlagsHeld(&DAT_0061951c[i])) {
            result = 1;
            break;
        }
    }
    return result;
}
}
