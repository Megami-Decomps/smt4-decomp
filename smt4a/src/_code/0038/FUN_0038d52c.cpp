#include "common.h"

extern "C" {

extern void *g_btlAux;

void FUN_004f8ef4(void *aux);

/* Script command: runs FUN_004f8ef4 on the battle aux block. */
u32 FUN_0038d52c(void)
{
    FUN_004f8ef4(g_btlAux);
    return 1;
}

} /* extern "C" */
