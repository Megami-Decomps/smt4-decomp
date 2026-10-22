/* NON_MATCHING: table-pointer selection uses a branch instead of retail's predicated null fallback; count-add scheduling differs. */
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"

extern "C" AocSystem *g_aocSystem;

/* Find a record index across the built-in table and its DLC extension. */
extern "C" u32 FUN_002fb330(s32 id)
{
    struct AocSupplementalRecord {
        s32 id;
        u8 data[0x10];
    };
    /* This table follows the recovered AocSystem prefix. */
    struct AocSupplementalTable {
        u8 prefix[0x3FC];
        s32 count;
        AocSupplementalRecord *records;
    };
    typedef char TableLayoutCheck[sizeof(AocSupplementalRecord) == 0x14 &&
        offsetof(AocSupplementalTable, count) == 0x3FC &&
        offsetof(AocSupplementalTable, records) == 0x400 ? 1 : -1];
    s32 total = reinterpret_cast<AocSupplementalTable *>(g_aocSystem)->count +
                dataTableGetCount(dataTableGet(35, 3));
    for (u32 i = 0; (s32)i < total; ++i) {
        void *table = dataTableGet(35, 3);
        AocSupplementalRecord *entries = (AocSupplementalRecord *)dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        AocSupplementalRecord *record;
        if (i < count) {
            record = &entries[i];
        } else {
            record = NULL;
            if (i < count + reinterpret_cast<AocSupplementalTable *>(g_aocSystem)->count) {
                record = &reinterpret_cast<AocSupplementalTable *>(g_aocSystem)->records[i - count];
            }
        }
        if (record->id == -1) {
            return (u32)-1;
        }
        if (record->id == id) {
            return i;
        }
    }
    return (u32)-1;
}
