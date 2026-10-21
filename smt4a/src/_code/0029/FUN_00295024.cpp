#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void popupQueueInsertUnique(s32 state);
void lmapApplyMapAndArea(void);
void FUN_003b5d1c(void);
s32 lmapMainIsRunning(void);
s32 FUN_002d8b58(s32 a, s32 b);

extern LmapEventA *g_popupState;

void FUN_00295024(void)
{
    LmapEventA *event;

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
        event = g_popupState;
        g_popupState->state = 0xD;
        event->unk04 = 0;
        g_popupState->unk14 = FUN_002d8b58(0xF, 0);
    }
}

} /* extern "C" */
