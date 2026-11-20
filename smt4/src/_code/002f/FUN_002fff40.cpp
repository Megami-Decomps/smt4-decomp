#include "common.h"

extern "C" {
extern u32 g_btlAux;
void FUN_003dc018(u32 value);

/* Script command: passes g_btlAux to FUN_003dc018. */
s32 FUN_002fff40(void)
{
    FUN_003dc018(g_btlAux);
    return 1;
}
}
