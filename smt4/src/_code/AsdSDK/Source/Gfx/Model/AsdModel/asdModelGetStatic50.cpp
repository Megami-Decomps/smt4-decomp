#include "common.h"

extern "C" {

extern u32 g_asdModelManagerStatic50;

/* Returns the address of the model manager's g_asdModelManagerStatic50 static. */
u32 *asdModelGetStatic50(void)
{
    return &g_asdModelManagerStatic50;
}

} /* extern "C" */
