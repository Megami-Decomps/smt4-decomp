#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {



extern void buttonHelpSetText(s32 arg, u32 color);

/* Switches the status screen to tab `tab`: starts the matching slide animation, drops the touch regions and enters state 2, leading to the tab's state. */
void statusDownSwitchTab(u32 tab)
{
    StatusDownState *status = g_statusDown;
    StatusDownState *current;

    if (status->tab == tab) {
        return;
    }
    status->previousTab = status->tab;
    status->tab = tab;
    if (gameGetFlagByte12e8() < 0) {
        uiSpriteSetKeyframe(status->sprites, 3, 0);
    } else if (gameGetFlagByte12e8() > 0) {
        uiSpriteSetKeyframe(status->sprites, 2, 0);
    }
    current = g_statusDown;
    statusDownClearTouchRegions(current);
    statusDownEnterState(g_statusDown, 2);
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
