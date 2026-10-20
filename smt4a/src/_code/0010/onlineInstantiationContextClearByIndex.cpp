#include "common.h"

extern "C" {

u32 *arrayElementAddress_002eeb90(u32 table, u32 index);
s32 onlineInstantiationContextClearSlot(u32 context, u32 a, u32 b);

typedef struct SlotOwner {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 table;
} SlotOwner;

/* Looks the slot up in the owner's table and returns whether clearing it succeeded. */
u8 onlineInstantiationContextClearByIndex(SlotOwner *owner, u32 a, u32 b, u32 index)
{
    u32 *slot = arrayElementAddress_002eeb90(owner->table, index);
    return onlineInstantiationContextClearSlot(*slot, a, b) != 0;
}

} /* extern "C" */
