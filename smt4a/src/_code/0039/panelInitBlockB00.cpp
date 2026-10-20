#include "shard/Shard0039.h"

extern "C" {

extern PanelRef DAT_0057f588;
extern s32 FUN_001654d8(u8 *block);

void panelInitBlockB00(void)
{
    FUN_001654d8(DAT_0057f588.panel->blockB00);
}

} /* extern "C" */
