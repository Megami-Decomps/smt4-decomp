#include "map/lmapMain.h"

extern "C" {

extern LmapMain g_lmapMain;   /* 0x5f1b70 */
extern GameStateA g_gameState;
u32 gameDataTableGetFlag(void);

/* 1 when the map main loop is active and the source/destination map value for the current flag is at least 100. */
u32 FUN_002cf854(void)
{
    switch (gameDataTableGetFlag()) {
    case 0:
    case 3:
        if (g_lmapMain.unk74 != 0 && (s32)g_gameState.sourceMap >= 100) {
            return 1;
        }
        break;
    case 1:
    case 2:
    case 4:
        if (g_lmapMain.unk74 != 0 && (s32)g_gameState.destinationMap >= 100) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
