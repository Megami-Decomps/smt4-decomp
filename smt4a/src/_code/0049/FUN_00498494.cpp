/* NON_MATCHING: branch layout now matches smt4 FUN_0022e648; retail keeps no zero register (the frame and counter zeros are materialised where stored, the last four words go out as two stm pairs) where the build hoists one zero into r8. */
#include "shard/Shard0049.h"

extern "C" {
s32 FUN_001ba3d0(u16);
s32 FUN_0031d174(EquipmentMenuCursor *);
s32 FUN_00498408(EquipmentMenuState *, u16);
u32 shopGetEntryPrice(EquipmentMenuItem *);
s32 btlRollClamped(u16, u32);
s32 flaggedValueHolderGetTotal(FlaggedValueHolder *);

/* Enters `nextState` and sets up the quantity selection for the highlighted item: up to the owned
 * count (page 8) or the affordable count. */
void FUN_00498494(EquipmentMenuState *state, u32 nextState)
{
    u32 previous = state->transition.state;
    state->transition.frame = 0;
    state->transition.state = nextState;
    state->transition.previousState = previous;
    s32 delay = FUN_0031d174(&state->cursors[state->page]);
    delay = (state->page == 7 || state->page == 8) ? delay + 1 : delay + 2;
    EquipmentMenuItem *items = state->pages[state->page].items;
    s32 index = flaggedValueHolderGetTotal(&state->cursors[state->page].holder);
    EquipmentMenuItem *item = &items[index];
    s32 value;
    if (state->page == 8) {
        s32 count = FUN_001ba3d0(item->id);
        if (count < 0)
            count = 0;
        else if (count > 99)
            count = 99;
        value = count;
        if (FUN_00498408(state, item->id) != 0)
            --value;
    } else {
        u32 maximum = shopGetEntryPrice(item);
        value = btlRollClamped(item->id, maximum);
    }
    state->selection.hasValue = value != 0;
    state->selection.value = value;
    state->selection.counter = 0;
    state->selection.delay = delay;
}
}
