#include "common.h"

extern "C" {

int libc_strcmp(u8 *name, u32 key);

extern int g_keyedRecordCount;
extern u8 g_keyedRecords[][0x148];

/* Index of the first entry whose name (at +1) matches `key`, or 0xFF. */
u32 FUN_0024a808(u32 key)
{
    u32 i = 0;

    if ((int)i < g_keyedRecordCount) {
        do {
            if (libc_strcmp(&g_keyedRecords[i & 0xff][1], key) == 0) {
                return i & 0xff;
            }
            i++;
        } while ((int)i < g_keyedRecordCount);
    }
    return 0xff;
}

} /* extern "C" */
