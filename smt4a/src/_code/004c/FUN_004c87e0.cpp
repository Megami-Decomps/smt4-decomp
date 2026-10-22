#include "battle/btlHelp.h"

extern "C" {

extern BtlHelpA *g_btlHelp;

bool FUN_004c87e0(void)
{
    return g_btlHelp->state >= 2;
}

} /* extern "C" */
