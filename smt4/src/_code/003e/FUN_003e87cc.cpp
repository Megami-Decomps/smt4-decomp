#include "common.h"

struct ValueSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flag;
    /* 0x08 */ u8 value;
};

/* Stores the byte and marks the slot set. */
extern "C" void FUN_003e87cc(u32 unused, ValueSlot *slot, const u8 *src)
{
    slot->value = *src;
    slot->flag = 1;
}
