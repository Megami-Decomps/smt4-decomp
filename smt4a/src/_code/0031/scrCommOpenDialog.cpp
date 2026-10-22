#include "map/mapDepart.h"

extern "C" {

void dialogOpen(s32 a, s32 b);
void scrGetArgString(void);
void FUN_002392b8(void);

extern GameStateA g_gameState;

s32 scrCommOpenDialog(void)
{
    scrGetArgString();
    FUN_002392b8();
    dialogOpen(0, 1);
    g_gameState.mapFlags.unk484 = 0;
    return 1;
}

} /* extern "C" */
