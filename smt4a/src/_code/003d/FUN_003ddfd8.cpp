/* NON_MATCHING: compiler shares the global base and lays out the chord tests and zero-return paths differently. */
#include "common.h"

struct ChordFlagState {
    u8 unk00[0x1c];
    u32 flags; // 0x1c
};

extern "C" {
extern ChordFlagState DAT_0061951c[2];
void *jyoucyuGetTableEntry(u32);

// Require both chord flags in either state, unless the resident table entry is active.
u32 FUN_003ddfd8(void)
{
    if (jyoucyuGetTableEntry(1) != NULL)
        return 0;
    u32 first = DAT_0061951c[0].flags;
    if ((first & 2) != 0 && (first & 0x20) != 0)
        return 1;
    u32 second = DAT_0061951c[1].flags;
    if ((second & 2) != 0 && (second & 0x20) != 0)
        return 1;
    return 0;
}
}
