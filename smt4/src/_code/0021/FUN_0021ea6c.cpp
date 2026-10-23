/* NON_MATCHING: first-frame color branches and the shared completion return are laid out differently. */
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
s32 frameTextureGetState(void);
void slotSetRequest(u32 slot, u32 duration, u32 color);
u32 FUN_002b89a4(s32 slot);
s32 FUN_002c1d5c(void);
void FUN_00282bfc(s32 slot, u32 color);

// Start the requested black/white fade on the active screens, then wait or finish it immediately.
u32 FUN_0021ea6c(u32 durationArgument)
{
    u32 duration = scrGetArg(durationArgument);
    if (scrGetCommandFrame() == 0) {
        s32 mode = scrGetArg(0);
        if (mode == 0) {
            if (frameTextureGetState() == 0)
                slotSetRequest(0, duration, 0xff);
            slotSetRequest(1, duration, 0xff);
        } else if (mode == 1) {
            if (frameTextureGetState() == 0)
                slotSetRequest(0, duration, ~0u);
            slotSetRequest(1, duration, ~0u);
        } else {
            return 1;
        }
    } else {
        if (frameTextureGetState() != 0) {
            if (FUN_002b89a4(1))
                return 1;
        } else {
            if (FUN_002b89a4(0) && FUN_002b89a4(1))
                return 1;
        }
        if (FUN_002c1d5c()) {
            s32 mode = scrGetArg(0);
            if (mode == 0) {
                if (frameTextureGetState() == 0)
                    FUN_00282bfc(0, 0xff);
                FUN_00282bfc(1, 0xff);
            } else if (mode == 1) {
                if (frameTextureGetState() == 0)
                    FUN_00282bfc(0, ~0u);
                FUN_00282bfc(1, ~0u);
            }
        }
    }
    return 0;
}
}
