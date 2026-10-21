/* NON_MATCHING: retail unconditionally reloads the debug byte after updating it; compiled code forwards the stored true value and conditionally loads/compares the prior flag. */
#include "common.h"

struct CountdownState {
    bool active;   // 0x00
    bool debug;    // 0x01
    u8 unk02[0x16]; // 0x02
    s64 remaining; // 0x18
};

extern "C" {
extern CountdownState DAT_00589398;
u8 FUN_00158ef4(void);
bool nn_cfg_CTR_IsDebugMode(void);

// Initializes the configured countdown, enabling it for a nonzero delay or debug mode.
void FUN_00146808(void)
{
    s32 delay = FUN_00158ef4() * 10;
    DAT_00589398.remaining = delay;
    if (nn_cfg_CTR_IsDebugMode()) {
        DAT_00589398.debug = 1;
    }
    if (DAT_00589398.debug != 0 || DAT_00589398.remaining != 0) {
        DAT_00589398.active = 1;
    }
}
}
