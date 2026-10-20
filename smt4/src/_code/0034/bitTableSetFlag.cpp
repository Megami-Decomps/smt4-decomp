#include "common.h"

extern "C" {

typedef struct BitRow {
    /* 0x0 */ u8 bits[4];       /* 32 flags */
} BitRow;

typedef struct BitTable {
    /* 0x000 */ BitRow rows[0x200];
} BitTable;

extern BitTable *FUN_0023d2ec(void);

/* Sets (on != 0) or clears flag `bit` (0-31) of row `row` (0-0x1FF) in the bit table; out-of-range ids are ignored. */
void bitTableSetFlag(u32 row, u32 bit, s32 on)
{
    BitTable *table = FUN_0023d2ec();

    if (row < 0x200 && bit < 0x20) {
        u8 *byte = &table->rows[row].bits[bit >> 3];
        u8 mask = 1 << (bit & 7);

        if (on != 0) {
            *byte |= mask;
        } else {
            *byte &= ~mask;
        }
    }
}

} /* extern "C" */
