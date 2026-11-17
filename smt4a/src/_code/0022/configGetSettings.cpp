#include "gamedata/GameSaveBlocks.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

/* Returns the setting bytes of the save block. */
u8 *configGetSettings(void)
{
    return g_gameDataBlocks.saveBlock->settings;
}

} /* extern "C" */
