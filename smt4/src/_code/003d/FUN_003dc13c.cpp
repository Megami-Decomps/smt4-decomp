#include "common.h"

struct PendingResourceSlot {
    s8 slotId;                // 0x00
    u8 unk01[3];
    void *data;               // 0x04
    u8 description[0x80];     // 0x08
    u8 flags;                 // 0x88
    u8 unk89[3];
};

struct PendingResourceOwner {
    u8 unk0000[0x2cdc];
    PendingResourceSlot slots[5]; // 0x2cdc
};

extern "C" {
void *rt_memcpy_w(void *destination, const void *source, u32 size);

// A requested slot is ready only once its data pointer is populated.
u32 FUN_003dc13c(const PendingResourceOwner *owner)
{
    for (s32 index = 0; index < 5; ++index) {
        PendingResourceSlot slot;
        rt_memcpy_w(&slot, &owner->slots[index], sizeof(slot));
        if ((slot.flags & 1) && slot.data == NULL)
            return 0;
    }
    return 1;
}
}
