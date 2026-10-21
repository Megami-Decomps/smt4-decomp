#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x000 */ u8 unk000[0x828];
    /* 0x828 */ u32 *entries[0x20];
} Table;
extern Table *g_textureBindingCache;

/* Returns the first word of entry `index` (0..0x1F) of the table, or 0 when the index is out of range or the entry is empty. */
u32 FUN_001959ec(u32 index)
{
    u32 *entry;
    u32 value;

    if ((index < 0x20) && (entry = g_textureBindingCache->entries[index], entry != NULL)) {
        value = *entry;
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
