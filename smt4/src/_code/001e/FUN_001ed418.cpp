/* NON_MATCHING: with a call per frame the 0.8f scale is hoisted into s16 after the first frame call as in retail; retail then cross-jumps the two eventSetUnderMessageFade calls into one (b to a shared bl, then b to the return-0 epilogue) and places the not-0x15 return right after the third test. */
#include "common.h"

extern "C" {

s32 eventSetUnderMessageFade(u32 color, s32 first, s32 second, f32 scale);
s32 scrGetCommandFrame(void);
s32 eventIsSkipping(void);

/* Script command: starts the under-message fade for command frame 0 (fade in) or 9 (fade out); done at once for frame 0x15 or when a fade is already running. */
u32 FUN_001ed418(void)
{
    if (eventIsSkipping() != 0) {
        return 1;
    }
    if (scrGetCommandFrame() == 0) {
        eventSetUnderMessageFade(0xffffffff, 10, 1, 0.8f);
        return 0;
    }
    if (scrGetCommandFrame() == 9) {
        eventSetUnderMessageFade(0xffffffff, 12, 0, 0.8f);
        return 0;
    }
    if (scrGetCommandFrame() == 0x15) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
