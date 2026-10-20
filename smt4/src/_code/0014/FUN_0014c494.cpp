#include "common.h"

extern "C" {

typedef struct SlotTable {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 *count;   /* number of slots */
    /* 0x8 */ u32 *slots;
    /* 0xC */ u8 enabled;
} SlotTable;

/* Stores `value` in slot `index` and returns the previous contents (0 when the table is disabled or the index is out of range). */
u32 FUN_0014c494(SlotTable *table, u32 index, u32 value)
{
    u32 old;
    u8 enabled = table->enabled != 0;
    u32 *slots = NULL;

    if (enabled) {
        slots = table->slots;
    }
    if (enabled && slots != NULL && index < *table->count) {
        old = slots[index];
        slots[index] = value;
    } else {
        old = 0;
    }
    return old;
}

} /* extern "C" */
