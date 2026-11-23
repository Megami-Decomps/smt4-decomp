#include "map/PopupStateA.h"
#include "util/Random.h"

extern "C" {

void popupQueueInsertUnique(s32 state);

void FUN_002b80b8(void)
{
    if (g_popupState->state == 0 || g_popupState->state == 0x12) {
        return;
    }
    if ((s32)randRange(99) + 1 <= 10) {
        popupQueueInsertUnique(0x12);
        return;
    }
}

} /* extern "C" */
