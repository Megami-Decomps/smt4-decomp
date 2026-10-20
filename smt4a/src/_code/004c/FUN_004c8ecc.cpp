#include "battle/btlHelp.h"

extern "C" {

extern BtlHelpA *g_btlHelp;

u32 FUN_004c8ecc(void)
{
    return g_btlHelp->unk00;
}

} /* extern "C" */
