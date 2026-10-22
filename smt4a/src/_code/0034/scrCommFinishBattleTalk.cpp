#include "map/MapSelection.h"
#include "map/mapDepart.h"

extern "C" {

void asdSequenceRequest(s32 a, s32 b, s32 c);
void btlTalkBustUpDestroy(void);
void gameFlagSetValue(s32 a, s32 b, s32 c);
s32 gameFlagIsSet(u32 id);

extern GameStateA g_gameState;

s32 scrCommFinishBattleTalk(void)
{
    if (gameFlagIsSet(0x593) != 0) {
        btlTalkBustUpDestroy();
        gameFlagSetValue(0x593, 0, 1);
    }
    if (g_gameState.transitionActive != 0 || g_mapSelection.id != -1) {
        asdSequenceRequest(8, 0, 0);
    }
    return 1;
}

} /* extern "C" */
