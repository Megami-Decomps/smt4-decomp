#include "common.h"

extern "C" {

void screenFadeSlotDraw(s32 mode);

/* Text system callback: forwards mode 1 to screenFadeSlotDraw and reports success as 0. */
s32 FUN_00102d38(void)
{
    screenFadeSlotDraw(1);
    return 0;
}

}
