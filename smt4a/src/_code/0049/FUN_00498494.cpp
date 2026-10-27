/* NON_MATCHING: retail 64 vs built 60 rows; selection-value branch layout and result-store scheduling differ. */
#include "shard/Shard0049.h"

extern "C" {
s32 FUN_001ba3d0(u16);
s32 FUN_0031d174(EquipmentMenuCursor *);
s32 FUN_00498408(EquipmentMenuState *, u16);
u32 shopGetEntryPrice(EquipmentMenuItem *);
s32 btlRollClamped(u16, u32);
s32 flaggedValueHolderGetTotal(FlaggedValueHolder *);

void FUN_00498494(EquipmentMenuState *state, u32 nextState)
{
    u32 previous = state->transition.state;
    state->transition.frame = 0;
    state->transition.state = nextState;
    state->transition.previousState = previous;
    s32 delay = FUN_0031d174(&state->cursors[state->page]);
    s32 page = state->page;
    if (page == 7 || page == 8)
        delay += 1;
    else
        delay += 2;
    s32 index = flaggedValueHolderGetTotal(&state->cursors[page].holder);
    EquipmentMenuItem *item = &state->pages[page].items[index];
    s32 value;
    if (state->page != 8) {
        u32 maximum = shopGetEntryPrice(item);
        value = btlRollClamped(item->id, maximum);
    } else {
        value = FUN_001ba3d0(item->id);
        if (value < 0)
            value = 0;
        else if (value > 99)
            value = 99;
        if (FUN_00498408(state, item->id) != 0)
            --value;
    }
    state->selection.hasValue = value != 0;
    state->selection.value = value;
    state->selection.counter = 0;
    state->selection.delay = delay;
}
}
