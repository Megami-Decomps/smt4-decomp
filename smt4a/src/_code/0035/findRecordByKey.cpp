#include "shard/Shard0035.h"
#include "gamedata/GameDataAccess.h"
#include <string.h>

extern "C" {

extern s32 g_keyedRecordCount;
extern Rec148 g_keyedRecords[];

static const char *recordKey(u32 index)
{
    return reinterpret_cast<const char *>(g_keyedRecords[index & 0xFF].key);
}

/* Index of the first record whose key matches `key`, or 0xFF. */
u32 findRecordByKey(const char *key)
{
    for (s32 i = 0; i < g_keyedRecordCount; i++) {
        if (strcmp(recordKey(i), key) == 0) {
            return i & 0xFF;
        }
    }
    return 0xFF;
}

} /* extern "C" */
