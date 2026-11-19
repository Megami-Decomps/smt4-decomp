#include "common.h"

extern "C" {

void screenFadeSlotDraw(s32 mode);

/* Text system callback: forwards mode 0 to screenFadeSlotDraw and reports success as 0. */
s32 FUN_0013767c(void)
{
    screenFadeSlotDraw(0);
    return 0;
}

}
