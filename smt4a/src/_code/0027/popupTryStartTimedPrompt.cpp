/* NON_MATCHING: default code has the same instruction sequence but assigns the game-state/global-pointer/zero values to different r4-r6 registers. */
#include "map/lmapMain.h"
#include "map/mapDepart.h"

struct PopupTimeoutState {
    LmapEventA event;
    s32 eventId;  // 0x18
};

extern "C" {

extern PopupTimeoutState* g_popupState;
extern GameStateA g_gameState;
s32 FUN_002d8b58(s32 kind, s32 eventId);

void popupTryStartTimedPrompt(void)
{
    if (g_gameState.mapFlags.popupElapsedFrames >= 18000 && g_popupState->event.state == 0) {
        g_popupState->eventId = 0xad;
        g_popupState->event.state = 11;
        g_popupState->event.unk04 = 0;
        g_popupState->event.unk14 = FUN_002d8b58(2, g_popupState->eventId);
        g_gameState.mapFlags.popupElapsedFrames = 0;
    }
}

} // extern "C"
