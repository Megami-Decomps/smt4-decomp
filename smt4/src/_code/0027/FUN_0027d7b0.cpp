/* NON_MATCHING: The table pointer remains in a register rather than the retail stack slot; loop argument registers differ. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match2_AocTable23.h"

extern "C" AocSystem *g_aocSystem;

// Find a record by its two signed key bytes and unsigned variant byte.
extern "C" u32 FUN_0027d7b0(s32 category, s32 subtype, u32 variant)
{
    // The extension table lies beyond both recovered AocSystem prefixes.
    struct Table23SystemView {
        u8 unk000[0x3EC];
        u32 count;
        Table23Record *entries;
    };
    typedef char Table23SystemViewOffsetCheck[
        offsetof(Table23SystemView, count) == 0x3EC &&
        offsetof(Table23SystemView, entries) == 0x3F0 ? 1 : -1];
    u32 baseCount = dataTableGetCount(dataTableGet(0x23, 1));
    s32 totalCount = baseCount + ((Table23SystemView *)g_aocSystem)->count;
    for (u32 index = 0; (s32)index < totalCount; ++index) {
        void *table = dataTableGet(0x23, 1);
        const Table23Record *entries = (const Table23Record *)dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        const Table23Record *entry;
        if (index < count) {
            entry = &entries[index];
        } else {
            const Table23SystemView *system = (const Table23SystemView *)g_aocSystem;
            u32 extraCount = system->count;
            const Table23Record *extraEntries = system->entries;
            entry = index < count + extraCount ? &extraEntries[index - count] : NULL;
        }
        if (entry->key.category == -1) {
            return 0xFFFFFFFF;
        }
        if (entry->key.category == category && entry->key.subtype == subtype &&
            entry->key.variant == variant) {
            return index;
        }
    }
    return 0xFFFFFFFF;
}
