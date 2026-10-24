#include "common.h"

extern "C" {

struct EplSlot {
    /* 0x00 */ u8 unk00[88];
    /* 0x58 */ u32 handle;
    /* 0x5c */ u32 timer;
    /* 0x60 */ u8 unk60[4];
};

struct EplSlots {
    /* 0x00 */ u8 unk00[12];
    /* 0x0c */ EplSlot slots[16];
};

extern EplSlots *g_eplSlots;

s32 FUN_001642e4(u32 id, u32 *arg, s32 count, s32 flags);
u32 FUN_001abbc4(void);

/* Starts the effect in free slot `index` (0..15) and returns the index, or -1 when the slot is out of range or busy. */
s32 FUN_0024496c(s32 index, u32 id)
{
    EplSlots *table = g_eplSlots;

    if (index < 16) {
        EplSlot *slot = &table->slots[index];
        u32 parameter;

        if (slot->timer == 0) {
            slot->handle = FUN_001642e4(id, &parameter, 1, 0x80);
            slot->timer = FUN_001abbc4();
            return index;
        }
    }
    return -1;
}

} /* extern "C" */
