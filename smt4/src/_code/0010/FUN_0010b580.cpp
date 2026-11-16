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

/* Counts down the timers of the map's timed slots that are fully armed (flags 1, 2 and 4 set) and marks a slot
 * expired (flag 8) when its timer reaches zero. */
void FUN_0010b580(void)
{
    MapTimedSlots *block = reinterpret_cast<MapTimedSlots *>(gameGetMapBlock());
    for (s32 i = 0; i < 16; i++) {
        u8 flags = block->slots[i].flags;

        if ((flags & 1) && (flags & 4) && (flags & 2) && !(flags & 8)) {
            if (block->slots[i].timer > 0) {
                block->slots[i].timer--;
            }
            if (block->slots[i].timer == 0) {
                block->slots[i].flags = flags | 8;
            }
        }
    }
}
}
