#include "common.h"

extern "C" {

typedef struct UnitTable {
    /* 0x000 */ u8 unk000[0x264];
    /* 0x264 */ u32 values[8];
} UnitTable;

extern UnitTable DAT_004d9d88[]; /* 0x4d9d88, 0x284 bytes per row */

/* Value `column` of row `row`, or 0 for a negative column. */
u32 unitTableGetValue(int column, int row)
{
    if (column < 0) {
        return 0;
    }
    return DAT_004d9d88[row].values[column];
}

} /* extern "C" */
