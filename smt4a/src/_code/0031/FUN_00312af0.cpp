/* NON_MATCHING: the request switch now dispatches like retail; retail keeps the shared pending-clear/return tail after case 16's first message arm (case 13 jumps to it), where this build places it after case 13's queue insert. */
#include "map/PopupStateA.h"
#include "code/Code002c_Smt4a.h"

extern "C" {
s32 lmapMainIsRunning(void);
void lmapApplyMapAndArea(void);
void FUN_003b5d1c(void);
void popupQueueInsertUnique(s32 request);
const char *popupSelectWeightedMessage(s32 kind, s32 speakerId);
void FUN_00295108(s32 enabled);

/* Handles the queued popup requests: 13 and 16 open their popup (or queue it) and stop, 18 and 19 are
 * handled in place; every handled request is cleared. */
void FUN_00312af0(void)
{
    for (s32 index = 0; index < 16; ++index) {
        PopupStateA *work = g_popupState;
        switch (work->pending[index]) {
        case 13:
            if (work->state) {
                if (work->state != 13) {
                    popupQueueInsertUnique(13);
                }
            } else {
                if (lmapMainIsRunning()) {
                    lmapApplyMapAndArea();
                } else {
                    FUN_003b5d1c();
                }
                g_popupState->state = 13;
                g_popupState->timer = 0;
                g_popupState->message = popupSelectWeightedMessage(15, 0);
            }
            g_popupState->pending[index] = 0;
            return;
        case 16:
            if (!work->state) {
                work->state = 16;
                work->timer = 0;
                if (gameDataStatusFlagGet(6) != 1) {
                    g_popupState->message = popupSelectWeightedMessage(17, 0);
                } else {
                    g_popupState->message = popupSelectWeightedMessage(24, 0);
                }
            } else if (work->state != 16) {
                popupQueueInsertUnique(16);
            }
            g_popupState->pending[index] = 0;
            return;
        case 18:
            FUN_00295108(1);
            g_popupState->pending[index] = 0;
            break;
        case 19:
            if (work->state) {
                if (work->state != 19) {
                    popupQueueInsertUnique(19);
                }
            } else {
                work->timer = 0;
                work->state = 19;
                g_popupState->message = popupSelectWeightedMessage(20, 0);
            }
            g_popupState->pending[index] = 0;
            break;
        }
        g_popupState->pending[index] = 0;
    }
}
}
