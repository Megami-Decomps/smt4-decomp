#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi; /* 0x57a9b8 */

/* Whether the battle UI's completion byte (objD + 0x8A) is set. */
u8 FUN_004a9d40(void)
{
    return uiSpriteGetCompletionState((const UiAnimatedSprite *)&g_btlUi.ui->objD) != 0;
}

} /* extern "C" */
