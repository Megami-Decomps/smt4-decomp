#include "common.h"

extern "C" {

extern u8 g_elementPresetTable[][0x30];

/* Entry `index` of the 0x30-byte table (entry 0 for out-of-range indices). */
u8 *FUN_00200c80(s32 index)
{
    if (index >= 0xe) {
        index = 0;
    }
    return g_elementPresetTable[index];
}

} /* extern "C" */
