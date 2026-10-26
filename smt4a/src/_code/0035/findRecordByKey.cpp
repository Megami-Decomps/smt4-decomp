#include "shard/Shard0035.h"
#include "util/CalleeContracts.h"

extern "C" {

extern s32 g_keyedRecordCount;
extern Rec148 g_keyedRecords[];
extern s32 libc_strcmp(const char *a, const char *b);

/* Index of the first record whose key matches `key`, or 0xFF. */
u32 findRecordByKey(const char *key)
{
    u32 i;

    for (i = 0; (s32)i < g_keyedRecordCount; i++) {
        if (libc_strcmp(reinterpret_cast<const char *>(g_keyedRecords[i & 0xFF].key), key) == 0) {
            return i & 0xFF;
        }
    }
    return 0xFF;
}

} /* extern "C" */
