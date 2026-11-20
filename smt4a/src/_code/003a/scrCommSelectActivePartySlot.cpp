#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 partySlotIsOccupied(const PartySlotA* slot);
void saveSlotTableSetPreferredId(u16 id);

u32 scrCommSelectActivePartySlot(void)
{
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA* slot = partyGetSlot((u16)i);
        if (slot->id == id && partySlotIsOccupied(slot)) {
            saveSlotTableSetPreferredId((u16)id);
            break;
        }
    }
    return 1;
}
}
