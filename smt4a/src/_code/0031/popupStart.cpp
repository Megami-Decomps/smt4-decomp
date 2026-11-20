#include "common.h"
#include "map/PopupStateA.h"

extern "C" {

extern void messageVoiceFlagsGet(void);
extern const char *popupSelectWeightedMessage(s32 kind, s32 arg);

/* Starts popup kind 3 for `speakerId` unless one is already running. */
void popupStart(s32 speakerId)
{
    PopupStateA *popup;

    messageVoiceFlagsGet();
    popup = g_popupState;
    if (popup->state == 0) {
        popup->state = 3;
        popup->timer = 0;
        popup->speakerId = speakerId;
        g_popupState->message = popupSelectWeightedMessage(11, speakerId);
    }
}

}
