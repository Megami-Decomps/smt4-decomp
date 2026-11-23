#include "battle/BtlUiGlobal.h"

extern "C" {

/* Whether number-popup slot `slot` is busy: its popup is showing or a request is queued for it. A slot whose
 * popup has started to fade out reports free. */
u32 FUN_004a94a8(u32, s32 slot)
{
    BtlUiA* work = g_btlUi.ui;
    if (work == NULL) {
        return 0;
    }
    if (work->objD.numbers.slots[slot].disabled != 0) {
        return 0;
    }
    if (work->objD.numbers.slots[slot].active != 0) {
        return 1;
    }
    for (s32 i = 0; i < work->requestCounts.counts[slot]; ++i) {
        if (work->objD.numberRequests.rows[slot].entries[i].active != 0) {
            return 1;
        }
    }
    return 0;
}
}
