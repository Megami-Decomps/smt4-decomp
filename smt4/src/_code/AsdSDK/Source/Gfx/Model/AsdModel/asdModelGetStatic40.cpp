#include "common.h"

extern "C" {

extern u32 g_asdModelManagerStatic40;

/* Returns the address of the model manager's g_asdModelManagerStatic40 static. */
u32 *asdModelGetStatic40(void)
{
    return &g_asdModelManagerStatic40;
}

} /* extern "C" */
