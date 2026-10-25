/* NON_MATCHING: named game-state view recovers r4; popup-global slot and zero value remain swapped between r5/r6. */
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
    GameStateA *game = &g_gameState;
    if (game->mapFlags.popupElapsedFrames >= 18000 && g_popupState->event.state == 0) {
        g_popupState->eventId = 0xad;
        g_popupState->event.state = 11;
        g_popupState->event.unk04 = 0;
        g_popupState->event.unk14 = FUN_002d8b58(2, g_popupState->eventId);
        game->mapFlags.popupElapsedFrames = 0;
    }
}

} // extern "C"
