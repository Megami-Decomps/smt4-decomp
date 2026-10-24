#include "common.h"

extern "C" {

extern void *g_btlAux;

void state339CFinish(void *aux);

/* Script command: finishes state 0x339C on the battle aux block. */
u32 FUN_003b8b10(void)
{
    state339CFinish(g_btlAux);
    return 1;
}

} /* extern "C" */
