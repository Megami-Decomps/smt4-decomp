/* NON_MATCHING: retail addresses both records of a pair from the group base plus the pair offset (base + i*0x18 + 0x2C/0x44); built forms a record pointer first */
#include "common.h"

struct KeyedRecord {
    u32 unk00;       // 0x00
    s32 key;         // 0x04
    u8 unk08[0x10];  // 0x08
};

struct KeyedGroup {
    u8 unk00[0x2C];          // 0x00
    KeyedRecord records[6];  // 0x2C
    u8 unkBC[0x8C];          // 0xBC
};

extern "C" {

extern s32 g_keyedRecordCount; /* 0x433278 */
extern KeyedGroup g_keyedRecords[]; /* 0x478000 */

/* Finds the record of group `group` whose key is `key` (records are searched in pairs); NULL when absent. */
KeyedRecord *FUN_002cda20(s32 group, s32 key)
{
    if (g_keyedRecordCount - group - 1 >= 0) {
        s32 i = 0;

        do {
            KeyedRecord *record = &g_keyedRecords[group].records[i];

            if (record[0].key == key) {
                return &record[0];
            }
            if (record[1].key == key) {
                return &record[1];
            }
            i += 2;
        } while (i < 6);
    }
    return NULL;
}

} /* extern "C" */
