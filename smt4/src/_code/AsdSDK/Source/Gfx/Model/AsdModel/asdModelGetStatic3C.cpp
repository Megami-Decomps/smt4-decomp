#include "common.h"

extern "C" {

extern u32 DAT_00464b3c;

/* Returns the address of the model manager's DAT_00464b3c static. */
u32 *asdModelGetStatic3C(void)
{
    return &DAT_00464b3c;
}

} /* extern "C" */
