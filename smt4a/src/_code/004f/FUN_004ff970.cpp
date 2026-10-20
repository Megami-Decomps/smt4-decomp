#include "common.h"

extern "C" {

typedef struct SlotValue {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 valid;
} SlotValue;

typedef struct SlotOwner {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ SlotValue slot;
} SlotOwner;

/* The slot's value, or 0xFFFF when it holds none. */
u32 FUN_004ff970(SlotOwner *owner)
{
    SlotValue *slot = &owner->slot;

    if (slot->valid == 0) {
        return 0xFFFF;
    }
    return slot->value;
}

} /* extern "C" */
