#include "gamedata/PartySlots.h"

/* Invalidates slots outside the requested active range. */
extern "C" void partyIdsReset(PartySlots *party)
{
    for (u32 index = 0; index < 16; ++index) {
        party->ids[index] = -1;
        party->active[index] = 0;
    }
}
