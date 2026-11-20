#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 frameTextureGetState(void);
void slotSetRequest(u32 slot, u32 duration, u32 color);
u32 screenFaderIsSettled(s32 slot);
s32 eventIsSkipping(void);
void titleRestartSlotState3(s32 slot, u32 color);

/* Starts a black or white screen fade and waits for the active screens to settle. */
u32 scrCommScreenFade(void)
{
    u32 duration = scrGetArg(1);
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
        if (!frameTextureGetState()) {
            if (screenFaderIsSettled(0) && screenFaderIsSettled(1))
                return 1;
        } else {
            if (screenFaderIsSettled(1))
                return 1;
        }
        if (eventIsSkipping()) {
            switch (scrGetArg(0)) {
            case 0:
                if (frameTextureGetState() == 0)
                    titleRestartSlotState3(0, 0xff);
                titleRestartSlotState3(1, 0xff);
                break;
            case 1:
                if (frameTextureGetState() == 0)
                    titleRestartSlotState3(0, ~0u);
                titleRestartSlotState3(1, ~0u);
                break;
            }
        }
    }
    return 0;
}

} /* extern "C" */
