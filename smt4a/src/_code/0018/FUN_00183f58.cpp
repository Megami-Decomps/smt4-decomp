/* NON_MATCHING: prologue placement, queued-value array base folding, and selection-store if-conversion differ. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
extern ButtonHelpQueuedSelections DAT_0057f0d8;

// Queue a help selection while another unit animates, or start its appropriate animation.
void FUN_00183f58(u32 index, s32 kind, s32 value, s32 queue)
{
    if (index >= 6)
        return;
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (!work)
        return;
    if (queue) {
        s32 queuedKind = DAT_0057f0d8.kinds[index];
        if (queuedKind < 0) {
            const ButtonHelpCompatibility *activity = reinterpret_cast<const ButtonHelpCompatibility *>(work);
            for (s32 unit = 0; unit < 6; ++unit) {
                if (activity->active[unit]) {
                    DAT_0057f0d8.kinds[index] = kind;
                    DAT_0057f0d8.values[index] = value;
                    return;
                }
            }
        }
        if (queuedKind == kind && DAT_0057f0d8.values[index] == value) {
            DAT_0057f0d8.kinds[index] = -1;
            DAT_0057f0d8.values[index] = -1;
        }
    }
    work->kinds[index].kind = static_cast<u8>(kind);
    work->kinds[index].value = static_cast<u16>(value);
    ButtonHelpDisplayUnit *unit = reinterpret_cast<ButtonHelpDisplayUnit *>(&work->units[index]);
    if (kind != 7 && kind != 9 && kind != 10 && kind != 11 &&
        kind != 12 && kind != 13 && kind != 14 && kind != 15 &&
        kind != 16 && kind != 17 && kind != 19) {
        if (kind == 8) {
            unit->selection.target = 4;
            unit->selection.state = 10;
            unit->selection.current = -1;
        } else {
            unit->selection.state = 10;
            unit->selection.current = 3;
            unit->selection.target = -1;
        }
        return;
    }
    unit->selection.target = 1;
    unit->selection.state = 10;
    unit->selection.current = -1;
}
}
