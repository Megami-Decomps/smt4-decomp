#include "common.h"

extern "C" {

extern u8 DAT_005b3c3c;

/* Returns the address of the model manager's DAT_005b3c3c static. */
u8 *asdModelGetStatic38(void)
{
    return &DAT_005b3c3c;
}

} /* extern "C" */
