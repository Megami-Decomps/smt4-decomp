#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 *countRef;
    /* 0x08 */ u32 *slots;
    /* 0x0C */ u8 enabled;
} Table;

/* Replaces slot `index` with `value` and returns the old value; returns 0 (and changes nothing) when the table is disabled, has no slots or the index is out of range. */
u32 FUN_001a5e50(Table *table, u32 index, u32 value)
{
    u32 old;
    u32 *slots;
    u8 enabled;

    enabled = table->enabled != 0;
    slots = NULL;
    if (enabled) {
        slots = table->slots;
    }
    if ((enabled && slots != NULL) && (index < *table->countRef)) {
        old = slots[index];
        slots[index] = value;
    } else {
        old = 0;
    }
    return old;
}

} /* extern "C" */
