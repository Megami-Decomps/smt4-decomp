#ifndef UI_PARTYPANELCAPACITY_H
#define UI_PARTYPANELCAPACITY_H

#include "ui/GridNavigation.h"
#include "gamedata/SelectedUnitQuery.h"
#include "shard/Shard0031.h"

struct PartyCapacitySlotsA : PartyStatusSlots {
    /* 0x1ca3 */ u8 capacity;
};

/* Extended capacity controls lie beyond the shared 0xa80-byte panel prefix. */
struct PartyPanelCapacityViewA {
    u8 unk000[0x28];
    /* 0x028 */ u32 occupied;
    /* 0x02c */ u32 expandedPage;
    /* 0x030 */ u32 capacityTier;
    u8 unk034[0xa4c];
    /* 0xa80 */ SelectedUnitListEntry entries[24];
    u8 unkB40[0x148];
    /* 0xc88 */ GridNavigation primary;
    /* 0xcec */ GridNavigation secondary;
    /* 0xd50 */ GridNavigation expanded;
    /* 0xdb4 */ GridNavigation secondaryExpanded;
    u8 unkE18[0x400];
    /* 0x1218 */ s32 fixedCapacity;
};
typedef char PartyPanelCapacityOffsets[
    offsetof(PartyCapacitySlotsA, capacity) == 0x1ca3 &&
    offsetof(PartyPanelCapacityViewA, entries) == 0xa80 &&
    offsetof(PartyPanelCapacityViewA, primary) == 0xc88 &&
    offsetof(PartyPanelCapacityViewA, fixedCapacity) == 0x1218 &&
    sizeof(PartyPanelCapacityViewA) == 0x121c ? 1 : -1];

#endif
