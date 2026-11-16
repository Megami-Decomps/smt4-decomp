#include "shard/W6_W6Match7_KeyedRecordStorage.h"
#include <string.h>

extern "C" {

extern int g_keyedRecordCount;
extern KeyedRecordStorage g_keyedRecords[];

static const char *recordName(u32 index)
{
    return reinterpret_cast<const char *>(g_keyedRecords[index & 0xff].name);
}

/* Index of the first entry whose name matches `key`, or 0xFF. */
u32 keyedRecordFindByName(const char *key)
{
    for (int i = 0; i < g_keyedRecordCount; i++) {
        if (strcmp(recordName(i), key) == 0) {
            return i & 0xff;
        }
    }
    return 0xff;
}

} /* extern "C" */
