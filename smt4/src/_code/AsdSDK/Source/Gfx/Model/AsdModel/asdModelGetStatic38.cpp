#include "common.h"

extern "C" {

extern u8 DAT_00464b38;

/* Returns the address of the model manager's DAT_00464b38 static. */
u8 *asdModelGetStatic38(void)
{
    return &DAT_00464b38;
}

} /* extern "C" */
