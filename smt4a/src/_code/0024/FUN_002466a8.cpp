#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void popupQueueInsertUnique(s32 state);
s32 gameDataStatusFlagGet(s32 arg);
s32 popupSelectWeightedMessage(s32 a, s32 b);

extern LmapEventA *g_popupState;

void FUN_002466a8(void)
{
    LmapEventA *event = g_popupState;

    if (g_popupState->state != 0) {
        if (g_popupState->state != 0x10) {
            popupQueueInsertUnique(0x10);
            return;
        }
    } else {
        g_popupState->state = 0x10;
        event->unk04 = 0;
        if (gameDataStatusFlagGet(6) == 1) {
            g_popupState->unk14 = popupSelectWeightedMessage(0x18, 0);
            return;
        }
        g_popupState->unk14 = popupSelectWeightedMessage(0x11, 0);
    }
}

} /* extern "C" */
