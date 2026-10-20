/* Returns the address of the camp's state block. */
#include "common.h"

extern "C" {

extern u8 g_campState[];

u8 *campGetState(void)
{
    return g_campState;
}

} /* extern "C" */
