/* NON_MATCHING: header/command views and duplicated header arms now follow retail; GPR allocation (retail keeps only r4-r8) still differs. */
#include "common.h"

extern "C" {
void *__aeabi_memcpy4(void *, const void *, u32);

u16 FUN_001932e0(u32 unused, u32 **cursor, const void *selection, const void *table, u32 previous)
{
    /* The header words are read as signed bytes, the command block through a second view. */
    struct CachedHeader {
        s8 enabled;
        s8 secondary;
        u8 color[3];
        u8 unk05[0x213];
    };
    struct CachedHeaderTable {
        u32 unk00[2];
        CachedHeader *entries;
    };
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
    const CachedHeader *header = &static_cast<const CachedHeaderTable *>(table)->entries[index];
    u32 *out = *cursor;
    if (index == previous) {
        *out++ = (header->enabled ? 5 : 0) | ((header->secondary != 0) << 16);
        *out++ = 0x500E0;
        *out++ = entry->color[0] | (entry->color[1] << 8) | (entry->color[2] << 16);
        *out++ = 0xF00E1;
        *cursor = out;
    } else {
        *out++ = (header->enabled ? 5 : 0) | ((header->secondary != 0) << 16);
        *out++ = 0x500E0;
        *out++ = entry->color[0] | (entry->color[1] << 8) | (entry->color[2] << 16);
        *out++ = 0xF00E1;
        if (entry->enabled) {
            __aeabi_memcpy4(out, entry->commands, sizeof(entry->commands));
            out += sizeof(entry->commands) / sizeof(u32);
        }
        *cursor = out;
    }
    return selected->index;
}
}
