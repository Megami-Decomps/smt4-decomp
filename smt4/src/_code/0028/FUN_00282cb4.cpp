#include "common.h"

extern "C" {

extern void *g_campCec;

u8 FUN_00282cb4(void)
{
    return g_campCec != NULL;
}

} /* extern "C" */
