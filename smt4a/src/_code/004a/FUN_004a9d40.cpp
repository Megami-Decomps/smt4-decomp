/* NON_MATCHING: retail wraps the read in a frame (push {r4,lr} ... pop {r4,pc}) with no call in it, addresses the flag as objD + 0x8A (two adds) and loads it with ldrsb; the build is a leaf with one add and ldrb. */
#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi; /* 0x57a9b8 */

/* Whether the battle UI's flag byte at 0x75B2 is set. */
u8 FUN_004a9d40(void)
{
    return *((s8 *)&g_btlUi.ui->objD + 0x8A) != 0;
}

} /* extern "C" */
