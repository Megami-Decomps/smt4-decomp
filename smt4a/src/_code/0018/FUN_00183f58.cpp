/* NON_MATCHING: the guarded body now sits in an inline helper, which reproduces retail's prologue placement (both guards return before the push); retail also derives the queued-values base as `kinds + 24` in a register (the two arrays are separate objects of one translation unit), which the struct-typed g_buttonHelpQueuedKinds cannot express. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
extern ButtonHelpQueuedSelections g_buttonHelpQueuedKinds;

// Queue a help selection while another unit animates, or start its appropriate animation.
static __inline void helpSelect(ButtonHelpWorkA *work, u32 index, s32 kind, s32 value, s32 queue)
{
    if (queue) {
        s32 queuedKind = g_buttonHelpQueuedKinds.kinds[index];
        if (queuedKind < 0) {
            const ButtonHelpCompatibility *activity = reinterpret_cast<const ButtonHelpCompatibility *>(work);
            for (s32 unit = 0; unit < 6; ++unit) {
                if (activity->active[unit]) {
                    g_buttonHelpQueuedKinds.kinds[index] = kind;
                    g_buttonHelpQueuedKinds.values[index] = value;
                    return;
                }
            }
        }
        if (queuedKind == kind && g_buttonHelpQueuedKinds.values[index] == value) {
            g_buttonHelpQueuedKinds.kinds[index] = -1;
            g_buttonHelpQueuedKinds.values[index] = -1;
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

void FUN_00183f58(u32 index, s32 kind, s32 value, s32 queue)
{
    if (index >= 6)
        return;
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (!work)
        return;
    helpSelect(work, index, kind, value, queue);
}
}
