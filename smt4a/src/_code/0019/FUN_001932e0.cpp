/* NON_MATCHING: retail 52 vs built 37 rows; compiler shares the command-header path instead of retail's duplicated branches. */
#include "common.h"

extern "C" {
void *__aeabi_memcpy4(void *, const void *, u32);

u16 FUN_001932e0(u32 unused, u32 **cursor, const void *selection, const void *table, u32 previous)
{
    struct CachedState {
        u8 enabled;
        u8 secondary;
        u8 color[3];
        u8 unk05[3];
        u32 commands[0x210 / sizeof(u32)];
    };
    struct CachedStateTable {
        u32 unk00[2];
        CachedState *entries;
    };
    struct CachedStateSelection {
        u8 unk00[0x22];
        u16 index;
    };
    const CachedStateSelection *selected = static_cast<const CachedStateSelection *>(selection);
    u32 index = selected->index;
    const CachedState *entry = &static_cast<const CachedStateTable *>(table)->entries[index];
    u32 *out = *cursor;
    out[0] = (entry->enabled ? 5 : 0) | ((entry->secondary != 0) << 16);
    out[1] = 0x500E0;
    out[2] = entry->color[0] | (entry->color[1] << 8) | (entry->color[2] << 16);
    out[3] = 0xF00E1;
    out += 4;
    if (index != previous && entry->enabled) {
        __aeabi_memcpy4(out, entry->commands, sizeof(entry->commands));
        out += sizeof(entry->commands) / sizeof(u32);
    }
    *cursor = out;
    return selected->index;
}
}
