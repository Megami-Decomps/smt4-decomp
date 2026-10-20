#include "common.h"

extern "C" {

extern u32 DAT_00464b50;

/* Returns the address of the model manager's DAT_00464b50 static. */
u32 *asdModelGetStatic50(void)
{
    return &DAT_00464b50;
}

} /* extern "C" */
