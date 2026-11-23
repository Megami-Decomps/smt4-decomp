#include "gamedata/PartyPick.h"
#include "script/ScriptArgs.h"
#include "ui/MessageMainA.h"
#include "code/Code003e.h"

extern "C" {

/* Picks another occupied party slot before clearing the requested member's inactive flag. */
u32 scrCommClearPartySlotInactive(void)
{
    s32 requestedId = scrGetArg(0);
    const PartySlotA *selected = saveSlotFindSelected();
    if (selected != NULL && selected->id == requestedId) {
        bool found = false;
        for (s32 index = 0; index < PARTY_PICK_SLOT_COUNT; ++index) {
            const PartySlotA *candidate = partyGetSlot((u16)index);
            if (candidate->id != requestedId && partySlotIsOccupied(candidate)) {
                saveSlotTableSetPreferredId(candidate->id);
                found = true;
                break;
            }
        }
        if (!found) {
            saveSlotTableSetPreferredId(0);
        }
    }
    partySlotClearInactiveFlag((u16)requestedId);
    return 1;
}

} /* extern "C" */
