/* NON_MATCHING: the loop uses the retail registers, but the compiler tests the final index and predicates the candidate ID load instead of loading it before breaking. */
#include "gamedata/SaveSlotTable.h"
#include "script/ScriptArgs.h"
#include "ui/MessageMainA.h"
#include "code/Code003e.h"
#include "code/Code0018.h"

extern "C" {

// Select an eligible alternate before processing the currently selected value.
u32 FUN_00357d2c(void)
{
    s32 requestedValue = scrGetArg(0);
    PartySlotA *selected = saveSlotFindSelected();
    if (selected != NULL && selected->id == requestedValue) {
        s32 index;
        const PartySlotA *candidate;
        for (index = 0; index < 12; ++index) {
            candidate = partyGetSlot((u16)index);
            if (candidate->id != requestedValue && partySlotIsOccupied(candidate)) {
                break;
            }
        }
        saveSlotTableSetPreferredId(index < 12 ? candidate->id : 0);
    }
    partySlotClearInactiveFlag((u16)requestedValue);
    return 1;
}
}
