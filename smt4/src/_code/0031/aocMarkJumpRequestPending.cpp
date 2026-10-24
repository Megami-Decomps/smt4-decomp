#include "common.h"

extern "C" {

typedef struct AocMain {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ u8 jumpRequested;
} AocMain;

extern AocMain *g_aocMain; /* 0x432fc8 */

extern int jyoucyuGetTableEntry(int index);
extern u8 *gameJumpRequestGet(void);

/* Records that a jump request of kind 1-3 is pending; always returns 1. */
u32 aocMarkJumpRequestPending(void)
{
    u8 kind;

    jyoucyuGetTableEntry(0);
    kind = *gameJumpRequestGet();
    if (kind == 1 || kind == 2 || kind == 3) {
        AocMain *aoc = g_aocMain;

        aoc->jumpRequested = 1;
    }
    return 1;
}

} /* extern "C" */
