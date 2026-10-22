#include "map/MapSelection.h"
#include "map/mapDepart.h"

extern "C" {

void asdSequenceRequest(s32 a, s32 b, s32 c);
void FUN_00312d6c(void);
void btlTalkBustUpDestroy(void);
void soundChannelStopAll(s32 arg);
void gameFlagSetValue(s32 a, s32 b, s32 c);
s32 gameFlagIsSet(u32 id);

extern GameStateA g_gameState;

s32 scrCommFinishMapDeparture(void)
{
    if (gameFlagIsSet(0x593) != 0) {
        btlTalkBustUpDestroy();
        gameFlagSetValue(0x593, 0, 1);
    }
    if (gameFlagIsSet(0x11F9) != 0) {
        soundChannelStopAll(0xF);
        FUN_00312d6c();
        gameFlagSetValue(0x11F9, 0, 1);
    }
    if (g_gameState.transitionActive != 0 || g_mapSelection.id != -1) {
        asdSequenceRequest(6, 0, 0);
    }
    return 1;
}

} /* extern "C" */
