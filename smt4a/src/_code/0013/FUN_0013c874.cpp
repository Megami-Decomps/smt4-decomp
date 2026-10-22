#include "common.h"

extern "C" {

extern u8 g_resourceSharedFlag;

/* Stores `value` in the global at 0x00588fac. */
void FUN_0013c874(u8 value)
{
    g_resourceSharedFlag = value;
}

} /* extern "C" */
