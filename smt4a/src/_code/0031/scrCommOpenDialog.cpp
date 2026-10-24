#include "map/mapDepart.h"

extern "C" {

void dialogOpen(s32 a, s32 b);
void scrGetArgString(s32 index);
void infoWinExpandAndSetText(void);

extern GameStateA g_gameState;

s32 scrCommOpenDialog(void)
{
    scrGetArgString(0);
    infoWinExpandAndSetText();
    dialogOpen(0, 1);
    g_gameState.mapFlags.unk484 = 0;
    return 1;
}

} /* extern "C" */
