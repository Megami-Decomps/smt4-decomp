/* NON_MATCHING: retail cross-jumps the two fade calls into one and sets their direction
 * argument last; our build emits a separate padded call for each frame. */
#include "common.h"

extern "C" {

s32 eventSetUnderMessageFade(u32 color, s32 first, s32 second, f32 scale);
s32 scrGetCommandFrame(void);
s32 eventIsSkipping(void);

enum {
    UNDER_MESSAGE_FADE_IN_FRAME = 0,
    UNDER_MESSAGE_FADE_OUT_FRAME = 9,
    UNDER_MESSAGE_FADE_DONE_FRAME = 21
};

/* Fades the message underlay in and out, finishing at frame 21 or when the event is skipped. */
u32 FUN_001ed418(void)
{
    if (!eventIsSkipping()) {
        if (scrGetCommandFrame() == UNDER_MESSAGE_FADE_IN_FRAME) {
            eventSetUnderMessageFade(0xffffffff, 10, 1, 0.8f);
        } else if (scrGetCommandFrame() == UNDER_MESSAGE_FADE_OUT_FRAME) {
            eventSetUnderMessageFade(0xffffffff, 12, 0, 0.8f);
        } else if (scrGetCommandFrame() == UNDER_MESSAGE_FADE_DONE_FRAME) {
            return 1;
        }
        return 0;
    }
    return 1;
}

} /* extern "C" */
