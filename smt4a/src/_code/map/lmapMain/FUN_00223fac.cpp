/* NON_MATCHING: cold initialization out of line and popup stores match; retail predicates the countdown reset (ldrle/movle/strle) before the decrement, ours branches. */
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
u32 popupSelectWeightedMessage(u32 kind, u32 resource);

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
            g_popupState->timer = 0;
            g_popupState->state = 20;
            g_popupState->process = popupSelectWeightedMessage(21, 187);
        } else {
            --g_gameState.popup.countdown;
        }
    }
}
}
