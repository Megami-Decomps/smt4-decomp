#include "map/PopupStateA.h"

extern "C" {

void popupQueueInsertUnique(s32 state);
s32 randRange(s32 arg);

void FUN_002b80b8(void)
{
    if (g_popupState->state == 0 || g_popupState->state == 0x12) {
        return;
    }
    if (randRange(99) + 1 <= 10) {
        popupQueueInsertUnique(0x12);
        return;
    }
}

} /* extern "C" */
