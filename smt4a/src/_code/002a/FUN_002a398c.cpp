#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x000 */ u8 data[0x148];
} Entry;
extern Entry g_keyedRecords[];

/* Returns the address of entry `index` (0x148 bytes each) of the table at 0x5C6000. */
Entry *FUN_002a398c(s32 index)
{
    return &g_keyedRecords[index];
}

} /* extern "C" */
