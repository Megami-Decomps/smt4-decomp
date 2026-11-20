#include "common.h"
#include "camp/Unite/UniteEffect.h"
#include "code/Code0020.h"
extern "C" {
s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 frameTextureGetState(void);
void slotSetRequest(u32 screen, s32 duration, u32 color);
s32 eventIsSkipping(void);
void titleRestartSlotState3(u32 screen, u32 color);

/* Starts a black or white screen fade and waits for the active screens to settle. */
u32 scrCommScreenFade(void)
{
    s32 duration = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        if (inputFastForwardActive() && duration > 4)
            duration = 4;
        s32 colorMode = scrGetArg(0);
        switch (colorMode) {
        case 0:
            if (!frameTextureGetState())
                slotSetRequest(0, duration, 0xFF);
            slotSetRequest(1, duration, 0xFF);
            break;
        case 1:
            if (!frameTextureGetState())
                slotSetRequest(0, duration, 0xFFFFFFFF);
            slotSetRequest(1, duration, 0xFFFFFFFF);
            break;
        default:
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
            s32 colorMode = scrGetArg(0);
            switch (colorMode) {
            case 0:
                if (!frameTextureGetState())
                    titleRestartSlotState3(0, 0xFF);
                titleRestartSlotState3(1, 0xFF);
                break;
            case 1:
                if (!frameTextureGetState())
                    titleRestartSlotState3(0, 0xFFFFFFFF);
                titleRestartSlotState3(1, 0xFFFFFFFF);
                break;
            }
        }
    }
    return 0;
}

} /* extern "C" */
