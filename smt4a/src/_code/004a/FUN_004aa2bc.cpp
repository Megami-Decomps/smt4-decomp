#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi; /* 0x57a9b8 */

/* Whether the battle UI's sprite-active flag is clear. */
u8 FUN_004aa2bc(void)
{
    return g_btlUi.ui->spriteActive == 0;
}

} /* extern "C" */
