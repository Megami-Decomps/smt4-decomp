#include "shard/Shard003E.h"

extern "C" {

typedef struct HalfTable {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ u16 values[0x14];
    /* 0xE0 */ s16 count;
} HalfTable;

/* Halfword `index` of the table at +0xB8, or 0 when out of range (count at +0xE0). */
u16 halfTableGet(HalfTable *table, s32 index)
{
    if (index >= 0 && table->count - 1 >= index) {
        return table->values[index];
    }
    return 0;
}

} /* extern "C" */
