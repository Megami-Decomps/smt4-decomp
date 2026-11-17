#include "common.h"
#include "code/Code0018.h"

struct PartySlotFlags {
    u8 unk00[0x130]; // 0x000
    u32 flags;      // 0x130
};

// Whether bit 0 of the state's flags is set; a missing state counts as clear.
extern "C" u32 partySlotIsOccupied(const void* object)
{
    const PartySlotFlags* state = static_cast<const PartySlotFlags*>(object);
    if (state == NULL)
        return 0;
    u32 bit = state->flags & 1;
    return bit ? 1 : 0;
}
