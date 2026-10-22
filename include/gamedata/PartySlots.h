#ifndef GAMEDATA_PARTY_SLOTS_H
#define GAMEDATA_PARTY_SLOTS_H
#include "common.h"
#include <stddef.h>

struct PartySlots {
    s16 ids[16]; // 0x00
    u8 active[16]; // 0x20
};
typedef char PartySlotsLayoutCheck[sizeof(PartySlots) == 0x30 &&
    offsetof(PartySlots, active) == 0x20 ? 1 : -1];
#endif
