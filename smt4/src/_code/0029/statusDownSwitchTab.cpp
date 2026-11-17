#include "status/StatusDown.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {



extern void timerStart(void *timer, s32 id, s32 arg);
extern void ifTouchRegionRemove(void);
extern void *__aeabi_memset4(void *dest, s32 size, s32 value);
extern void buttonHelpSetText(s32 arg, u32 color);

/* Switches the status screen to tab `tab`: starts the matching slide animation, drops the touch regions and enters state 2, leading to the tab's state. */
void statusDownSwitchTab(u32 tab)
{
    StatusDownState *status = g_statusDown;
    StatusDownState *current;
    s32 i;

    if (status->tab == tab) {
        return;
    }
    status->previousTab = status->tab;
    status->tab = tab;
    if (gameGetFlagByte12e8() < 0) {
        timerStart(status->sprites, 3, 0);
    } else if (gameGetFlagByte12e8() > 0) {
        timerStart(status->sprites, 2, 0);
    }
    current = g_statusDown;
    for (i = 0; i < current->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    current->touchRegionCount = 0;
    __aeabi_memset4(current->slots, 0x29, -1);
    current = g_statusDown;
    current->stateTimer = 0;
    current->track.previous = current->track.state;
    current->track.state = 2;
    if (tab == 0)
        status->nextState = 0;
    if (tab == 1)
        status->nextState = 3;
    if (tab == 2)
        status->nextState = 0x10;
    if (tab == 3)
        status->nextState = 0x11;
    if (tab == 4)
        status->nextState = 0x13;
    if (tab == 5)
        status->nextState = 0x15;
    buttonHelpSetText(0, 0x323232FF);
}

} /* extern "C" */
