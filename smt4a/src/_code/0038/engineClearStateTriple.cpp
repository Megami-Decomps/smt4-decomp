#include "common.h"

extern "C" {

extern u32 DAT_005e2108[3];

void engineClearStateTriple(void)
{
    DAT_005e2108[0] = 0;
    DAT_005e2108[1] = 0;
    DAT_005e2108[2] = 0;
}

} /* extern "C" */
