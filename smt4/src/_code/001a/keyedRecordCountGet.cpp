#include "common.h"

extern "C" {

extern u32 g_keyedRecordCount;

u32 keyedRecordCountGet(void)
{
    return g_keyedRecordCount;
}

} /* extern "C" */
