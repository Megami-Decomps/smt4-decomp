#include "common.h"

extern "C" {

extern u32 g_asdModelManagerStatic3C;

/* Returns the address of the model manager's g_asdModelManagerStatic3C static. */
u32 *asdModelGetStatic3C(void)
{
    return &g_asdModelManagerStatic3C;
}

} /* extern "C" */
