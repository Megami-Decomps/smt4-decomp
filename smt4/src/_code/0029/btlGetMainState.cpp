#include "battle/btlMain.h"

extern "C" {

extern BtlMainState *g_btlMainState;

/* The battle's state block. */
BtlMainState *btlGetMainState(void)
{
    return g_btlMainState;
}

} /* extern "C" */
