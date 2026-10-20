#include "shard/Shard0035.h"

extern "C" {

extern s32 g_keyedRecordCount;
extern Rec148 g_keyedRecords[];
extern s32 libc_strcmp(u8 *key, u32 id);

/* Index of the first record whose key matches `id`, or 0xFF. */
u32 findRecordByKey(u32 id)
{
    u32 i;

    for (i = 0; (s32)i < g_keyedRecordCount; i++) {
        if (libc_strcmp(g_keyedRecords[i & 0xFF].key, id) == 0) {
            return i & 0xFF;
        }
    }
    return 0xFF;
}

} /* extern "C" */
