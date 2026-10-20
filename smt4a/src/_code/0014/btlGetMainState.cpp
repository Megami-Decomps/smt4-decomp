#include "battle/btlMain.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain;

/* The battle's state block. */
BtlMainStateA *btlGetMainState(void)
{
    return g_btlMain.state;
}

} /* extern "C" */
