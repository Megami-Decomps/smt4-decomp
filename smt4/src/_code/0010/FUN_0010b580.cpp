/* NON_MATCHING: retail walks the flag byte and the timer with two separate pointers advanced by 0x14 each (base+0xF20 and base+0xF28); armcc merges them into one slot pointer */
/* Counts down the timers of the map's timed slots that are fully armed (flags 1, 2 and 4 set) and marks a slot
 * expired (flag 8) when its timer reaches zero. */
#include "common.h"
#include "shard/SaveWork.h"

extern "C" {
/* One timed slot of the map block (0x14 bytes). */
struct TimedSlot {
    /* 0x00 */ u8 flags;       /* 1|2|4: armed, 8: expired */
    /* 0x01 */ u8 unk01[7];
    /* 0x08 */ s16 timer;
    /* 0x0A */ u8 unk0a[10];
};

/* The part of the map block that holds the timed slots. */
struct MapTimedSlots {
    /* 0x000 */ u8 unk000[0xF20];
    /* 0xF20 */ TimedSlot slots[16];
};


void FUN_0010b580(void)
{
    MapTimedSlots *block = reinterpret_cast<MapTimedSlots *>(gameGetMapBlock());
    TimedSlot *slot = block->slots;
    s32 remaining = 16;

    do {
        u8 flags = slot->flags;

        if ((flags & 1) && (flags & 4) && (flags & 2) && !(flags & 8)) {
            if (slot->timer > 0) {
                slot->timer--;
            }
            if (slot->timer == 0) {
                slot->flags = flags | 8;
            }
        }
        slot++;
    } while (--remaining != 0);
}
}
