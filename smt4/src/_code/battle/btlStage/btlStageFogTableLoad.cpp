#include "common.h"

extern "C" {

extern u32 g_btlStage;   /* the loaded stage-fog table */

u32 FUN_002c5c04(const char *path);

/* Loads the battle stage fog table. */
void btlStageFogTableLoad(void)
{
    g_btlStage = FUN_002c5c04("battle/battle_map/BTLSTAGEFOG.TBL");
}

} /* extern "C" */
