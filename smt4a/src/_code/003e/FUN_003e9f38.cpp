#include "common.h"
#include "battle/BtlGlobals.h"


extern "C" {


/* Adds the amount to the battle total at 0x24. */
void FUN_003e9f38(void *self, s32 amount)
{
    g_btlMain.unk24 += amount;
}

} /* extern "C" */
