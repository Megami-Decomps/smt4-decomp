#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x30];
} Entry;
extern Entry g_elementPresetTable[];

/* Returns entry `index` (0x30 bytes each) of the table at 0x570AB8; indices of 0xE and above fall back to entry 0. */
Entry *FUN_002c17c0(s32 index)
{
    if (index >= 0xE) {
        index = 0;
    }
    return &g_elementPresetTable[index];
}

} /* extern "C" */
