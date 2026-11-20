#include "common.h"

extern "C" {

extern u8 g_asdModelManagerStaticBlock;

/* Returns the address of the model manager's g_asdModelManagerStaticBlock static. */
u8 *asdModelGetStatic38(void)
{
    return &g_asdModelManagerStaticBlock;
}

} /* extern "C" */
