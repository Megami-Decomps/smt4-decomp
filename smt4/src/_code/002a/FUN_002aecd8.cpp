/* NON_MATCHING: compiler folds the record-header displacement and one-based index adjustment into -16; retail keeps +4 and -20 separate. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

struct ContentRecordKey {
    u8 unk00[0x2a]; // 0x00
    u8 section;      // 0x2a
};

struct ContentRecord {
    u32 words[5]; // 0x00
};

struct ContentRecordList {
    u32 count;               // 0x00
    ContentRecord records[1]; // 0x04
};


extern "C" {
extern AocSystem* g_aocSystem;
ContentRecord* FUN_0014caa4(AocSystem* system, const ContentRecordKey* key, u32 index);

// Resolve the content record from add-on data, falling back to the indexed base table.
ContentRecord* FUN_002aecd8(const ContentRecordKey* key, u32 index)
{
    if (key->section == 0) {
        return NULL;
    }
    ContentRecord* record = FUN_0014caa4(g_aocSystem, key, index);
    if (record == NULL) {
        ContentRecordList* list = (ContentRecordList*)dataTableGetEntries(dataTableGet(25, key->section));
        record = &list->records[index - 1];
    }
    return record;
}
}
