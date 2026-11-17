#include "addon/aocMain.h"

extern "C" {

extern int jyoucyuGetTableEntry(u32 index);
extern u8 *gameBlockGetArea27E98(void);

/* Records that a jump request of kind 1-3 is pending; always returns 1. */
u32 aocMarkJumpRequestPending(void)
{
    u8 kind;

    jyoucyuGetTableEntry(0);
    kind = *gameBlockGetArea27E98();
    if (kind == 1 || kind == 2 || kind == 3) {
        AocMain *aoc = g_aocMain;

        aoc->jumpRequested = 1;
    }
    return 1;
}

} /* extern "C" */
