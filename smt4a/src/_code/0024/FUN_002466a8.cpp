#include "map/PopupStateA.h"

extern "C" {

void popupQueueInsertUnique(s32 state);
s32 gameDataStatusFlagGet(s32 arg);
const char *popupSelectWeightedMessage(s32 kind, s32 speakerId);

void FUN_002466a8(void)
{
    PopupStateA *popup = g_popupState;

    if (g_popupState->state != 0) {
        if (g_popupState->state != 0x10) {
            popupQueueInsertUnique(0x10);
            return;
        }
    } else {
        g_popupState->state = 0x10;
        popup->timer = 0;
        if (gameDataStatusFlagGet(6) == 1) {
            g_popupState->message = popupSelectWeightedMessage(0x18, 0);
            return;
        }
        g_popupState->message = popupSelectWeightedMessage(0x11, 0);
    }
}

} /* extern "C" */
