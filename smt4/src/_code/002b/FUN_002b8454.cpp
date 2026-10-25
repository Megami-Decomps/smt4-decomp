/* NON_MATCHING: retained queued-value base matches; saved-register allocation for queued arrays, sentinel and active flag still differs. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
extern ButtonHelpQueuedSelections DAT_0043da50;

// Set an indexed help item immediately, or defer it until active help animations finish.
void FUN_002b8454(u32 slot, s32 kind, s32 value, s32 defer)
{
    if (slot >= 6)
        return;
    ButtonHelpSelectionViewIV *work = (ButtonHelpSelectionViewIV *)g_buttonHelp.work;
    if (!work)
        return;
    if (defer) {
        s32 *queuedValues = DAT_0043da50.values;
        s32 queuedKind = DAT_0043da50.kinds[slot];
        if (queuedKind < 0) {
            for (s32 index = 0; index < 6; ++index) {
                if (work->active[index]) {
                    DAT_0043da50.kinds[slot] = kind;
                    queuedValues[slot] = value;
                    return;
                }
            }
        }
        if (queuedKind == kind && queuedValues[slot] == value) {
            DAT_0043da50.kinds[slot] = -1;
            queuedValues[slot] = -1;
        }
    }
    work->kinds[slot].kind = kind;
    work->kinds[slot].value = value;
    if (kind == 7 || kind == 9 || kind == 10 || kind == 11 || kind == 12 ||
        kind == 13 || kind == 14 || kind == 15 || kind == 16 || kind == 17) {
        work->units[slot].selection.target = 1;
        work->units[slot].selection.state = 18;
        work->units[slot].selection.current = -1;
    } else if (kind == 8) {
        work->units[slot].selection.target = 4;
        work->units[slot].selection.state = 18;
        work->units[slot].selection.current = -1;
    } else {
        work->units[slot].selection.state = 18;
        work->units[slot].selection.current = 3;
        work->units[slot].selection.target = -1;
    }
}
}
