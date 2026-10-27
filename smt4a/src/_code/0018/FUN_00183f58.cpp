/* NON_MATCHING: the queued kinds/values arrays are now defined here (same-file data), so the values base is `kinds + 24` in a register like retail; the shared index*35 unit offset, the if-converted selection stores and the kinds/values register numbering still differ. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
s32 g_buttonHelpQueuedKinds[6] = { -1, -1, -1, -1, -1, -1 };
s32 g_buttonHelpQueuedValues[6] = { -1, -1, -1, -1, -1, -1 };

// Queue a help selection while another unit animates, or start its appropriate animation.
static __inline void helpSelect(ButtonHelpWorkA *work, u32 index, s32 kind, s32 value, s32 queue)
{
    if (queue) {
        s32 queuedKind = g_buttonHelpQueuedKinds[index];
        if (queuedKind < 0) {
            for (s32 unit = 0; unit < 6; ++unit) {
                if (work->clear.active[unit]) {
                    g_buttonHelpQueuedKinds[index] = kind;
                    g_buttonHelpQueuedValues[index] = value;
                    return;
                }
            }
        }
        if (queuedKind == kind && g_buttonHelpQueuedValues[index] == value) {
            g_buttonHelpQueuedKinds[index] = -1;
            g_buttonHelpQueuedValues[index] = -1;
        }
    }
    work->kinds[index].kind = static_cast<u8>(kind);
    work->kinds[index].value = static_cast<u16>(value);
    if (kind != 7 && kind != 9 && kind != 10 && kind != 11 &&
        kind != 12 && kind != 13 && kind != 14 && kind != 15 &&
        kind != 16 && kind != 17 && kind != 19) {
        ButtonHelpDisplayUnit *unit = reinterpret_cast<ButtonHelpDisplayUnit *>(&work->units[index]);
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
    ButtonHelpDisplayUnit *unit = reinterpret_cast<ButtonHelpDisplayUnit *>(&work->units[index]);
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
