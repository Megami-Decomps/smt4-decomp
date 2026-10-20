/* NON_MATCHING: retail splits the 0x74B3 offset as `add r0,#0x7400; ldrb r0,[r0,#179]`; the build adds both parts and loads with a zero offset (one instruction more). */
#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi; /* 0x57a9b8 */

/* Whether the battle UI's flag byte at 0x74B3 is clear. */
u8 FUN_004aa2bc(void)
{
    return ((u8 *)g_btlUi.ui)[0x74B3] == 0;
}

} /* extern "C" */
