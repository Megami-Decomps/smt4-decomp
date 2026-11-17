#include "gamedata/GameSaveDataA.h"

extern "C" {
u32 scrGetArg(u32 index);
PartySlotA* partyGetSlot(u32 index);
u32 partySlotIsOccupied(const PartySlotA* slot);
void FUN_003e4e4c(u16 id);

u32 scrCommSelectActivePartySlot(void)
{
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA* slot = partyGetSlot((u16)i);
        if (slot->id == id && partySlotIsOccupied(slot)) {
            FUN_003e4e4c((u16)id);
            break;
        }
    }
    return 1;
}
}
