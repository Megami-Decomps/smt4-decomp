#include "battle/BtlUiGlobal.h"

extern "C" {


/* Whether the battle UI's sprite-active flag is clear. */
u8 btlUiIsSpriteInactive(void)
{
    return g_btlUi.ui->spriteActive == 0;
}

} /* extern "C" */
