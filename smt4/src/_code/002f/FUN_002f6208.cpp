#include "ui/MessageMain.h"

extern "C" {
void ifTouchRegionRemove(void);
s32 querySlotHasHandle(void);
void workCommandRefreshActiveSlots(void);
void titleOverlaySetModeAnimation(MessageWindow *window, u32 mode);

/* Starts closing a shown message window. */
static __inline void messageWindowClose(MessageWindow *window)
{
    if (window != NULL && window->state != 0) {
        titleOverlaySetModeAnimation(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

/* Dismisses the shown banner: removes its touch regions, takes its value as the choice and closes
 * the banner and message windows. */
void FUN_002f6208(void)
{

    if (g_messageMain.banner == NULL || g_messageMain.banner->state == 0) {
        return;
    }
    g_messageMain.banner->unk030 = 0;
    g_messageMain.banner->unk031 = 0;
    for (s32 i = 0; i < g_messageMain.banner->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    g_messageMain.banner->unk02F = 0;
    g_messageMain.banner->choiceResult = g_messageMain.banner->value;
    if (querySlotHasHandle() != 0) {
        workCommandRefreshActiveSlots();
    }
    messageWindowClose(g_messageMain.banner);
    messageWindowClose(g_messageMain.window);
}

} /* extern "C" */
