#include "common.h"

extern "C" {

extern u32 DAT_00464b54;

/* Returns the address of the model manager's DAT_00464b54 static. */
u32 *asdModelGetStatic54(void)
{
    return &DAT_00464b54;
}

} /* extern "C" */
