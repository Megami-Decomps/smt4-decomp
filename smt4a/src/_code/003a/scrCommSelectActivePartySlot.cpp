#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
u32 scrGetArg(u32 index);
PartySlotA* FUN_003e4d68(u32 index);
u32 FUN_00187168(const PartySlotA* slot);
void FUN_003e4e4c(u16 id);

u32 scrCommSelectActivePartySlot(void)
{
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA* slot = FUN_003e4d68((u16)i);
        if (slot->id == id && FUN_00187168(slot)) {
            FUN_003e4e4c((u16)id);
            break;
        }
    }
    return 1;
}
}
