#include "gamedata/DataTable.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"

struct AocSupplementalRecord {
    s32 id;
    u8 data[0x10];
};
typedef char AocSupplementalRecordSizeCheck[sizeof(AocSupplementalRecord) == 0x14 ? 1 : -1];

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
    /* the records the packages add to section 3 */
    AocSupplementalRecord *records = (AocSupplementalRecord *)g_aocSystem->table23[3].records;
    u32 extensionCount = g_aocSystem->table23[3].count;
    if (index < count + extensionCount)
        return &records[index - count];
    return NULL;
}

/* Find a record index across the built-in table and its DLC extension. */
extern "C" u32 aocFindSupplementalRecordIndex(s32 id)
{
    u32 baseCount = tableSectionCount(35, 3);
    s32 total = g_aocSystem->table23[3].count + baseCount;
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
