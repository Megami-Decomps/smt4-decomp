#include "common.h"

extern "C" {

int screenFadeSlotReset(int index);
int scrGetArg(...);
int titleSetSlotValueState2(int index, u32 value);
extern int eventIsSkipping(void);

u32 FUN_002f4a10(void)
{
    u32 value = scrGetArg(1);
    u32 which = scrGetArg(0);

    if (which == 0 || which == 1) {
        if (eventIsSkipping() != 0) {
            screenFadeSlotReset(0);
            screenFadeSlotReset(1);
        } else {
            titleSetSlotValueState2(0, value);
            titleSetSlotValueState2(1, value);
        }
    }
    return 1;
}

} /* extern "C" */
