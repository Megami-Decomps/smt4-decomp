#include "common.h"

extern "C" {

extern void *g_campCecEdit;

/* Returns whether there is an object at 0x57F118. */
u8 FUN_002bf508(void)
{
    return g_campCecEdit != NULL;
}

} /* extern "C" */
