#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void popupQueueInsertUnique(s32 state);
s32 FUN_002c2758(s32 arg);
s32 FUN_002d8b58(s32 a, s32 b);

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
        if (FUN_002c2758(6) == 1) {
            g_popupState->unk14 = FUN_002d8b58(0x18, 0);
            return;
        }
        g_popupState->unk14 = FUN_002d8b58(0x11, 0);
    }
}

} /* extern "C" */
