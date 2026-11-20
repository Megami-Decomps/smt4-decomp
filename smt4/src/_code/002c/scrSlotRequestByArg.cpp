#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 eventIsSkipping(void);
void titleRestartSlotState3(u32, u32);
void slotSetRequest(u32, u32, u32);

// Begin a slot request on the first frame and wait for completion on later frames.
u32 scrSlotRequestByArg(void)
{
    u32 value = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        switch (scrGetArg(0)) {
        case 0:
            slotSetRequest(0, value, 0xff);
            break;
        case 1:
            slotSetRequest(0, value, ~0u);
            break;
        default:
            return 1;
        }
    } else {
        if (screenFaderIsSettled(0) != 0) {
            return 1;
        }
        if (eventIsSkipping() != 0) {
            switch (scrGetArg(0)) {
            case 0:
                titleRestartSlotState3(0, 0xff);
                break;
            case 1:
                titleRestartSlotState3(0, ~0u);
                break;
            }
        }
    }
    return 0;
}
}
