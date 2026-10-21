#include "common.h"

extern "C" {

extern u32 g_keyedRecordCount;

/* Returns the word at 0x5702F8. */
u32 keyedRecordCountGet(void)
{
    return g_keyedRecordCount;
}

} /* extern "C" */
