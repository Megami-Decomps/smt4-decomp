#include "common.h"

extern "C" {

extern u8 g_keyedRecords[][0x148];

u8 *FUN_001ed250(s32 index)
{
    return g_keyedRecords[index];
}

} /* extern "C" */
