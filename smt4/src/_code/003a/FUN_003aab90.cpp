#include "common.h"

struct PartySlots {
    /* 0x00 */ s16 ids[16];
    /* 0x20 */ u8 active[16];
};

/* Removes inactive occupied slots from the party list. */
extern "C" void FUN_003aab90(PartySlots *party)
{
    for (s32 index = 0; index < 16; ++index) {
        if (party->ids[index] != -1 && party->ids[index] != 0 && !party->active[index])
            party->ids[index] = -1;
    }
}
