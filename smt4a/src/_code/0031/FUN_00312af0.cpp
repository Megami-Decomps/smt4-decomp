/* NON_MATCHING: retail keeps the shared pending-clear/return tail after the case-16 content calls (13 and 16 jump to it) and allocates r5=popup state, r6=zero; built merges the tail into case 13 and swaps r5/r6. */
#include "map/PopupStateA.h"
#include "code/Code002c_Smt4a.h"

extern "C" {
s32 lmapMainIsRunning(void);
void lmapApplyMapAndArea(void);
void FUN_003b5d1c(void);
void popupQueueInsertUnique(s32 request);
const char *popupSelectWeightedMessage(s32 kind, s32 speakerId);
void FUN_00295108(s32 enabled);

void FUN_00312af0(void)
{
    for (s32 index = 0; index < 16; ++index) {
        PopupStateA* work = g_popupState;
        s32 request = work->pending[index];
        if (request == 13) {
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
                const char *message = popupSelectWeightedMessage(15, 0);
                g_popupState->message = message;
            }
            g_popupState->pending[index] = 0;
            return;
        }
        if (request == 16) {
            if (!work->state) {
                work->state = 16;
                work->timer = 0;
                if (gameDataStatusFlagGet(6) != 1) {
                    const char *message = popupSelectWeightedMessage(17, 0);
                    g_popupState->message = message;
                } else {
                    const char *message = popupSelectWeightedMessage(24, 0);
                    g_popupState->message = message;
                }
            } else if (work->state != 16) {
                popupQueueInsertUnique(16);
            }
            g_popupState->pending[index] = 0;
            return;
        }
        if (request == 18) {
            FUN_00295108(1);
            g_popupState->pending[index] = 0;
        } else if (request == 19) {
            if (work->state) {
                if (work->state != 19) {
                    popupQueueInsertUnique(19);
                }
            } else {
                work->timer = 0;
                work->state = 19;
                const char *message = popupSelectWeightedMessage(20, 0);
                g_popupState->message = message;
            }
            g_popupState->pending[index] = 0;
        }
        g_popupState->pending[index] = 0;
    }
}
}
