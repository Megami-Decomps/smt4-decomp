/* NON_MATCHING: 52 lines: the early return and the output clears share one zero register (retail: movlt r0, #0 and
 * a separate r2/r3 pair), and the 64-bit mask accumulations load *targets with other ldrd/ldm/ldr choices. */
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
void btlCommandMenuResolveLayout(void *work, u16 *kind, s16 *index);

// Resolve selected party positions to the battle target mask and return the current command index.
u32 FUN_001f4f14(void *work, u64 *targets, s64 *commandIndex)
{
    struct SelectionView {
        u8 prefix[0x3064];
        s32 selection;
        u8 unk3068[0x3f4];
        u8 selected[4];
    };
    typedef char SelectionViewOffsets[offsetof(SelectionView, selection) == 0x3064 && offsetof(SelectionView, selected) == 0x345c ? 1 : -1];
    SelectionView *selection = static_cast<SelectionView *>(work);
    if (selection->selection < 0)
        return 0;
    *targets = 0;
    *commandIndex = 0;
    const SaveSlotTableIV *slots = gameGetSlotTable();
    if (selection->selection == 9999) {
        if (selection->selected[0])
            ++*targets;
        if (selection->selected[1])
            *targets += (1 << (slots->active[0] + 1));
        if (selection->selected[2])
            *targets += (1 << (slots->active[1] + 1));
        if (selection->selected[3])
            *targets += (1 << (slots->active[2] + 1));
    } else if (selection->selection >= 0) {
        if (selection->selection == 0)
            *targets = 1;
        else
            *targets = (1 << (slots->active[selection->selection - 1] + 1));
    }
    u16 kind = 0;
    s16 index = 0;
    btlCommandMenuResolveLayout(work, &kind, &index);
    *commandIndex = index;
    return 1;
}
}
