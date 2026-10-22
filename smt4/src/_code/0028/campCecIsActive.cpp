#include "common.h"

extern "C" {

extern void *g_campCec;

u8 campCecIsActive(void)
{
    return g_campCec != NULL;
}

} /* extern "C" */
