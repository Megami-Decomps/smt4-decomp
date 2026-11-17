#ifndef UI_PARTYPANELCAPACITY_H
#define UI_PARTYPANELCAPACITY_H

#include "shard/Shard0031.h"

struct PartyCapacitySlotsA : PartyStatusSlots {
    /* 0x1ca3 */ u8 capacity;
};

typedef char PartyCapacitySlotsAOffsets[offsetof(PartyCapacitySlotsA, capacity) == 0x1ca3 ? 1 : -1];

#endif
