/* NON_MATCHING: compiler unrolls the eight-entry removal loop and uses different inner-loop termination/address scheduling. */
#include "status/StatusDownA.h"

/* Remove the current selection from the recent list and close adjacent selection gaps. */
extern "C" void FUN_0023092c(void)
{
    StatusDownStateA *history = g_statusDown;
    for (s32 index = 0; index < 8; ++index) {
        if (history->pending[index] && history->pending[index] == history->selected[0]) {
            history->pending[index] = 0;
        }
    }
    history->selected[0] = 0;
    for (s32 first = 0; first < 7; ++first) {
        for (s32 offset = 0; offset < 7 - first; ++offset) {
            u16 *selection = &history->selected[first + offset];
            if (selection[0] == 0 && selection[1] != 0) {
                selection[0] = selection[1];
                selection[1] = 0;
            }
        }
    }
}
