/* NON_MATCHING: retail tests the 64-bit delay with two word loads, high word first (ldr [#28]; ldr [#24];
 * orrs); this build reads it with one ldm (4 lines). Typing the field nn::fnd::TimeSpan assigned from a
 * temporary gives retail's loads, but the field holds milliseconds (fsCountdownSleep multiplies its low
 * word by 1000000 before sleeping), not a TimeSpan's nanoseconds, so that form was rejected (wave 80). */
#include "common.h"

/* The file system's access-delay state. The delay at 0x18 is in milliseconds (fsCountdownSleep reads its
 * low word and sleeps that many milliseconds). */
struct CountdownState {
    /* 0x00 */ bool active;
    /* 0x01 */ s8 debug;
    /* 0x02 */ u8 unk02[0x16];
    /* 0x18 */ s64 remaining;
};

extern "C" {
extern CountdownState g_titleContentFileSystem;
u8 FUN_0011bde8(void);
bool nn_cfg_CTR_IsDebugMode(void);

/* Initializes the configured countdown, enabling it for a nonzero delay or debug mode. */
void fsInitializeAccessDelay(void)
{
    s32 delay = FUN_0011bde8() * 10;
    g_titleContentFileSystem.remaining = delay;
    if (nn_cfg_CTR_IsDebugMode()) {
        g_titleContentFileSystem.debug = 1;
    }
    if (g_titleContentFileSystem.debug != 0 || g_titleContentFileSystem.remaining != 0) {
        g_titleContentFileSystem.active = 1;
    }
}

} /* extern "C" */
