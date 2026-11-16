#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match2_AocTable23.h"

extern "C" AocSystem *g_aocSystem;

/* The extension table lies beyond both recovered AocSystem prefixes. */
struct Table23SystemView {
    u8 unk000[0x3EC];
    u32 count;
    Table23Record *entries;
};
typedef char Table23SystemViewOffsetCheck[
    offsetof(Table23SystemView, count) == 0x3EC &&
    offsetof(Table23SystemView, entries) == 0x3F0 ? 1 : -1];

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

/* Record `index` of table 0x23's first section, continued by the add-on extension; NULL past both. */
static const Table23Record *table23RecordAt(u32 index)
{
    void *table = dataTableGet(0x23, 1);
    const Table23Record *entries = (const Table23Record *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count)
        return &entries[index];
    const Table23SystemView *extension = (const Table23SystemView *)g_aocSystem;
    const Table23Record *records = extension->entries;
    u32 extensionCount = extension->count;
    if (index < count + extensionCount)
        return &records[index - count];
    return NULL;
}

// Find a record by its two signed key bytes and unsigned variant byte.
extern "C" u32 table23FindRecordByKey(s32 category, s32 subtype, u32 variant)
{
    u32 baseCount = tableSectionCount(0x23, 1);
    s32 totalCount = ((Table23SystemView *)g_aocSystem)->count + baseCount;
    for (u32 index = 0; (s32)index < totalCount; ++index) {
        const Table23Record *entry = table23RecordAt(index);
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
