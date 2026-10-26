#include "gamedata/DataTable.h"
#include "addon/aocMain.h"

extern "C" AocSystemA *g_aocSystem;

struct AocSupplementalRecord {
    s32 id;
    u8 data[0x10];
};
/* This table follows the recovered AocSystemA prefix. */
struct AocSupplementalTable {
    u8 prefix[0x3FC];
    s32 count;
    AocSupplementalRecord *records;
};
typedef char TableLayoutCheck[sizeof(AocSupplementalRecord) == 0x14 &&
    offsetof(AocSupplementalTable, count) == 0x3FC &&
    offsetof(AocSupplementalTable, records) == 0x400 ? 1 : -1];

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

static AocSupplementalRecord *supplementalRecordAt(u32 index)
{
    void *table = dataTableGet(35, 3);
    AocSupplementalRecord *entries = (AocSupplementalRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count)
        return &entries[index];
    AocSupplementalTable *extension =
        reinterpret_cast<AocSupplementalTable *>(g_aocSystem);
    AocSupplementalRecord *records = extension->records;
    u32 extensionCount = extension->count;
    if (index < count + extensionCount)
        return &records[index - count];
    return NULL;
}

/* Find a record index across the built-in table and its DLC extension. */
extern "C" u32 aocFindSupplementalRecordIndex(s32 id)
{
    u32 baseCount = tableSectionCount(35, 3);
    s32 total = reinterpret_cast<AocSupplementalTable *>(g_aocSystem)->count + baseCount;
    for (u32 i = 0; (s32)i < total; ++i) {
        AocSupplementalRecord *record = supplementalRecordAt(i);
        if (record->id == -1) {
            break;
        }
        if (record->id == id) {
            return i;
        }
    }
    return (u32)-1;
}
