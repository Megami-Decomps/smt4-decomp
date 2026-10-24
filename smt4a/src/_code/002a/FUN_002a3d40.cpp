/* NON_MATCHING: the 0.8f scale is loaded into s16 right after the first frame call and moved to s0 in each branch (branches not predicated); the build predicates the first/second moves and loads the constant later. */
#include "common.h"

extern "C" {

s32 eventSetUnderMessageFade(u32 color, s32 first, s32 second, f32 scale);
s32 scrGetCommandFrame(void);
s32 FUN_00162ea4(void);

/* Script command: starts the under-message fade for command frame 0 (fade in) or 9 (fade out); done at once for frame 0x15 or when a fade is already running. */
u32 FUN_002a3d40(void)
{
    if (FUN_00162ea4() != 0) {
        return 1;
    }
    s32 first;
    s32 second;

    if (scrGetCommandFrame() == 0) {
        first = 10;
        second = 1;
    } else if (scrGetCommandFrame() == 9) {
        first = 12;
        second = 0;
    } else {
        if (scrGetCommandFrame() == 0x15) {
            return 1;
        }
        return 0;
    }
    eventSetUnderMessageFade(0xffffffff, first, second, 0.8f);
    return 0;
}

} /* extern "C" */
