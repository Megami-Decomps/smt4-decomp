#include "common.h"

extern "C" {

extern void *g_btlAux;

void FUN_004f8f08(void *aux);

/* Script command: runs FUN_004f8f08 on the battle aux block. */
u32 FUN_00320fcc(void)
{
    FUN_004f8f08(g_btlAux);
    return 1;
}

} /* extern "C" */
