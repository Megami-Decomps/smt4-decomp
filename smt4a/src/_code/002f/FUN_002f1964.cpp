#include "common.h"

extern "C" {

extern void *g_uniteEffectWork;

/* Returns whether there is an object at 0x57F2C4. */
u8 FUN_002f1964(void)
{
    return g_uniteEffectWork != NULL;
}

} /* extern "C" */
