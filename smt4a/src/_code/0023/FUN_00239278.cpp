#include "common.h"

extern "C" {

extern u32 g_keyedRecordCount;

/* Returns the word at 0x5702F8. */
u32 FUN_00239278(void)
{
    return g_keyedRecordCount;
}

} /* extern "C" */
