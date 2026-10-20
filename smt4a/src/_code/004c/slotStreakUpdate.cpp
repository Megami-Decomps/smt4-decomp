#include "common.h"

extern "C" {

typedef struct SlotTable004c621c {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1c88 */ s8 flags[0x1b];      /* per slot: negative = unused */
    /* 0x1ca3 */ u8 count;
} SlotTable004c621c;

typedef struct SlotRecord004c621c {
    /* 0x000 */ u8 unk000[0x12a];
    /* 0x12a */ s8 streak;
} SlotRecord004c621c;

SlotTable004c621c *gameGetSlotTable(void);
SlotRecord004c621c *gameGetSlotRecord(void);
s32 bitsAt60Test(SlotRecord004c621c *record, u32 bit);

/* For every used slot, counts up the record's streak while its bit 10 is set and resets it otherwise. */
void slotStreakUpdate(void)
{
    SlotTable004c621c *table = gameGetSlotTable();
    s32 i;

    for (i = 0; i < table->count; i++) {
        if (table->flags[i] >= 0) {
            SlotRecord004c621c *record = gameGetSlotRecord();

            if (bitsAt60Test(record, 10) == 0) {
                record->streak = 0;
            } else {
                record->streak++;
            }
        }
    }
}

} /* extern "C" */
