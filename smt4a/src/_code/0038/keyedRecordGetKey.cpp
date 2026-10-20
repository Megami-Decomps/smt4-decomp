#include "common.h"

extern "C" {

typedef struct KeyedRecord00389cb4 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 key;
    /* 0x28 */ u8 unk28[0x120];
} KeyedRecord00389cb4;

extern s32 g_keyedRecordCount; /* 0x5702f8 */
extern KeyedRecord00389cb4 g_keyedRecords[]; /* 0x5c6000 */

/* Key of keyed record `index`, 0 when the index is past the last record. */
u32 keyedRecordGetKey(s32 index)
{
    if (g_keyedRecordCount - index - 1 < 0) {
        return 0;
    }
    return g_keyedRecords[index].key;
}

} /* extern "C" */
