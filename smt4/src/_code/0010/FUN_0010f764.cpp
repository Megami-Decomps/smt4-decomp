/* NON_MATCHING: retail unconditionally reloads the debug byte after updating it; compiled code forwards the stored true value and conditionally loads/compares the prior flag. */
#include "common.h"

struct CountdownState {
    bool active;   // 0x00
    bool debug;    // 0x01
    u8 unk02[0x16]; // 0x02
    s64 remaining; // 0x18
};

extern "C" {
extern CountdownState g_titleContentFileSystem;
u8 FUN_0011bde8(void);
bool nn_cfg_CTR_IsDebugMode(void);

// Initializes the configured countdown, enabling it for a nonzero delay or debug mode.
void FUN_0010f764(void)
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
}
