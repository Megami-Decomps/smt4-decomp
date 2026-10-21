#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x000 */ u8 unk000[0x828];
    /* 0x828 */ u32 *entries[0x20];
} Table;

extern Table *g_textureBindingCache;

/* First word of entry `index` (0-31), or 0 when absent. */
u32 FUN_002aa67c(u32 index)
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
