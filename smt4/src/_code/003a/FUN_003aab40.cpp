#include "common.h"

struct PartySlots { s16 ids[16]; u8 active[16]; };
/* Invalidates slots outside the requested active range. */
extern "C" void FUN_003aab40(PartySlots *party)
{
    for (u32 index = 0; index < 16; ++index) {
        party->ids[index] = -1;
        party->active[index] = 0;
    }
}
