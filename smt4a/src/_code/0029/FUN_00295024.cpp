#include "map/PopupStateA.h"

extern "C" {

void popupQueueInsertUnique(s32 state);
void lmapApplyMapAndArea(void);
void FUN_003b5d1c(void);
s32 lmapMainIsRunning(void);
const char *popupSelectWeightedMessage(s32 kind, s32 speakerId);

void FUN_00295024(void)
{
    PopupStateA *popup;

    if (g_popupState->state != 0) {
        if (g_popupState->state != 0xD) {
            popupQueueInsertUnique(0xD);
            return;
        }
    } else {
        if (lmapMainIsRunning() != 0) {
            lmapApplyMapAndArea();
        } else {
            FUN_003b5d1c();
        }
        popup = g_popupState;
        g_popupState->state = 0xD;
        popup->timer = 0;
        g_popupState->message = popupSelectWeightedMessage(0xF, 0);
    }
}

} /* extern "C" */
