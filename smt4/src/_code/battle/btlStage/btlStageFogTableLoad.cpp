#include "common.h"

extern "C" {

extern u32 g_btlStage;   /* the loaded stage-fog table */

u32 asdLoadFileSyncDefault(const char *path);

/* Loads the battle stage fog table. */
void btlStageFogTableLoad(void)
{
    g_btlStage = asdLoadFileSyncDefault("battle/battle_map/BTLSTAGEFOG.TBL");
}

} /* extern "C" */
