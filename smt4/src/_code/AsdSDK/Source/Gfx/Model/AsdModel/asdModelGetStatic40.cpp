#include "common.h"

extern "C" {

extern u32 DAT_00464b40;

/* Returns the address of the model manager's DAT_00464b40 static. */
u32 *asdModelGetStatic40(void)
{
    return &DAT_00464b40;
}

} /* extern "C" */
