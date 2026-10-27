/* NON_MATCHING: cold initialization now sits out of line as in retail; remaining: retail predicates the countdown reset (ldrle/movle/strle) before the decrement, ours branches, and the popup-state constants are scheduled differently. */
#include "map/mapDepart.h"
#include "gamedata/GameFlags.h"

struct MapPopupState {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 timer;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ u32 process;
};

extern "C" {
extern MapPopupState* g_popupState;
extern GameStateA g_gameState;
s32 randRange(s32 maximum);

s32 gameFlagIsSet(u32 flag);
s32 gameFlagStateIsOne(void);
u32 FUN_002d8b58(u32 kind, u32 resource);

// Periodically open the map popup while its progress flag is enabled.
void FUN_00223fac(void)
{
    if (g_popupState->state == 0 && gameFlagStateIsOne()) {
        if (!gameFlagIsSet(0x111A)) {
            g_gameState.popup.countdown = 0;
            gameFlagSetValue(0x111A, 1, 1);
        } else {
            randRange(99);
        }
        if (g_gameState.popup.countdown <= 0) {
            g_gameState.popup.countdown = 5;
            g_popupState->state = 20;
            g_popupState->timer = 0;
            g_popupState->process = FUN_002d8b58(21, 187);
        } else {
            --g_gameState.popup.countdown;
        }
    }
}
}
