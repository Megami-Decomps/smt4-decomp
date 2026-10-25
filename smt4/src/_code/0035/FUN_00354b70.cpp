#include "common.h"

extern "C" {

extern int g_fsArchiveHandleWords;

u8 FUN_00354b70(void)
{
    return g_fsArchiveHandleWords != 0;
}

} /* extern "C" */
