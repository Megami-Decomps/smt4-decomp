#ifndef GFX_MATRIX_SLOTS_H
#define GFX_MATRIX_SLOTS_H

#include "common.h"
#include <stddef.h>

struct SlotOwnerItem {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 enabled;
};

/* One vector of the items attached to a group. */
struct SlotOwnerItemList {
    /* 0x00 */ SlotOwnerItem **begin;
    /* 0x04 */ SlotOwnerItem **end;
    /* 0x08 */ SlotOwnerItem **capacity;
};

struct NamedResource;

/* Header of a slot owner; its variable-length table of item groups follows the header in memory. */
struct SlotOwner {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ NamedResource *resource;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u8 data[0x104];

    SlotOwnerItemList *groups() { return (SlotOwnerItemList *)(this + 1); }
};

typedef char SlotOwnerLayoutCheck[sizeof(SlotOwnerItemList) == 0xC &&
    offsetof(SlotOwner, data) == 0x10 && sizeof(SlotOwner) == 0x114 ? 1 : -1];

extern "C" s32 itemGroupHasEnabledItem(SlotOwner *owner, s32 group);

#endif
