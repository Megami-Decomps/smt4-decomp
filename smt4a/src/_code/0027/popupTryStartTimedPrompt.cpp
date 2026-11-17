/* NON_MATCHING: named game-state view recovers r4; popup-global slot and zero value remain swapped between r5/r6. */
#include "map/PopupStateA.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"

extern "C" {

const char *popupSelectWeightedMessage(s32 kind, s32 speakerId);

void popupTryStartTimedPrompt(void)
{
    GameStateA *game = &g_gameState;
    if (game->popupElapsedFrames >= 18000 && g_popupState->state == 0) {
        g_popupState->speakerId = 0xad;
        g_popupState->state = 11;
        g_popupState->timer = 0;
        g_popupState->message = popupSelectWeightedMessage(2, g_popupState->speakerId);
        game->popupElapsedFrames = 0;
    }
}

} // extern "C"
