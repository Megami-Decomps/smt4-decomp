/* NON_MATCHING: retail keeps the shared pending-clear/return tail after the case-16 content calls (13 and 16 jump to it) and allocates r5=popup state, r6=zero; built merges the tail into case 13 and swaps r5/r6. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code002c_Smt4a.h"

// Pending requests lie beyond the published popup-state prefix.
struct PopupPendingRequestsViewA {
    MapRandomPopupPrefixA popup;
    u8 unk18[0x98];
    s32 pending[16];
};
extern "C" {
extern PopupPendingRequestsViewA* g_popupState;
s32 lmapMainIsRunning(void);
void lmapApplyMapAndArea(void);
void FUN_003b5d1c(void);
void popupQueueInsertUnique(s32 request);
s32 FUN_002d8b58(s32 content, s32 option);
void FUN_00295108(s32 enabled);

void FUN_00312af0(void)
{
    for (s32 index = 0; index < 16; ++index) {
        PopupPendingRequestsViewA* work = g_popupState;
        s32 request = work->pending[index];
        if (request == 13) {
            if (work->popup.state) {
                if (work->popup.state != 13) {
                    popupQueueInsertUnique(13);
                }
            } else {
                if (lmapMainIsRunning()) {
                    lmapApplyMapAndArea();
                } else {
                    FUN_003b5d1c();
                }
                g_popupState->popup.state = 13;
                g_popupState->popup.phase = 0;
                s32 content = FUN_002d8b58(15, 0);
                g_popupState->popup.contentValue = content;
            }
            g_popupState->pending[index] = 0;
            return;
        }
        if (request == 16) {
            if (!work->popup.state) {
                work->popup.state = 16;
                work->popup.phase = 0;
                if (FUN_002c2758(6) != 1) {
                    s32 content = FUN_002d8b58(17, 0);
                    g_popupState->popup.contentValue = content;
                } else {
                    s32 content = FUN_002d8b58(24, 0);
                    g_popupState->popup.contentValue = content;
                }
            } else if (work->popup.state != 16) {
                popupQueueInsertUnique(16);
            }
            g_popupState->pending[index] = 0;
            return;
        }
        if (request == 18) {
            FUN_00295108(1);
            g_popupState->pending[index] = 0;
        } else if (request == 19) {
            if (work->popup.state) {
                if (work->popup.state != 19) {
                    popupQueueInsertUnique(19);
                }
            } else {
                work->popup.phase = 0;
                work->popup.state = 19;
                s32 content = FUN_002d8b58(20, 0);
                g_popupState->popup.contentValue = content;
            }
            g_popupState->pending[index] = 0;
        }
        g_popupState->pending[index] = 0;
    }
}
}
