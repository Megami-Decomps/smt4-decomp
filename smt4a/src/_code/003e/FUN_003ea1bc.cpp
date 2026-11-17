#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {


/* The battle global's word at 0x24 (the state argument goes unused). */
u32 FUN_003ea1bc(BtlMainStateA *state)
{
    return g_btlMain.unk24;
}

} /* extern "C" */
