/* NON_MATCHING: register allocation (status/current pointers swap r5/r6) and the final FUN_0029ee6c constant is hoisted before the tab chain; retail loads it in the shared tail. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ u8 timer[0x3D4];
    /* 0x3FC */ u8 tab;              /* current tab */
    /* 0x3FD */ u8 previousTab;
    /* 0x3FE */ u8 unk3FE[2];
    /* 0x400 */ s32 state;
    /* 0x404 */ s32 previousState;
    /* 0x408 */ s32 icon;
    /* 0x40C */ s32 unk40C;
    /* 0x410 */ u8 unk410[0x1C];
    /* 0x42C */ u8 slots[0x29];      /* filled with 0xFF */
    /* 0x455 */ u8 unk455[0x2B];
    /* 0x480 */ u8 regionCount;
} StatusDown;

extern StatusDown *g_statusDown;

extern void timerStart(void *timer, s32 id, s32 arg);
extern void ifTouchRegionRemove(void);
extern void *__aeabi_memset4(void *dest, s32 size, s32 value);
extern void FUN_0029ee6c(s32 arg, u32 color);

/* Switches the status screen to tab `tab`: starts the matching slide timer, drops the touch regions, resets the state and picks the tab's icon. */
void statusDownSwitchTab(u32 tab)
{
    StatusDown *status = g_statusDown;
    StatusDown *current;
    s32 i;

    if (status->tab == tab) {
        return;
    }
    status->previousTab = status->tab;
    status->tab = tab;
    if (gameGetFlagByte12e8() < 0) {
        timerStart(status->timer, 3, 0);
    } else if (gameGetFlagByte12e8() > 0) {
        timerStart(status->timer, 2, 0);
    }
    current = g_statusDown;
    for (i = 0; i < current->regionCount; i++) {
        ifTouchRegionRemove();
    }
    current->regionCount = 0;
    __aeabi_memset4(current->slots, 0x29, -1);
    current = g_statusDown;
    current->unk40C = 0;
    current->previousState = current->state;
    current->state = 2;
    if (tab == 0) {
        status->icon = 0;
    } else {
        u32 icon;

        if (tab == 1) {
            icon = 3;
        } else if (tab == 2) {
            icon = 0x10;
        } else if (tab == 3) {
            icon = 0x11;
        } else {
            if (tab != 4) {
                if (tab == 5) {
                    status->icon = 0x15;
                }
                FUN_0029ee6c(0, 0x323232FF);
                return;
            }
            icon = 0x13;
        }
        status->icon = icon;
    }
    FUN_0029ee6c(0, 0x323232FF);
}

} /* extern "C" */
