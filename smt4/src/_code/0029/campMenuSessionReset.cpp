#include "ui/UiSpriteApi.h"
#include "shard/Shard0033.h"
#include "font/ComWin/ComWin.h"
#include "game/GameGlobalsRef.h"

/* Enters game state `state` with its step counter cleared. */
static void gameSetState(s32 state)
{
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = state;
}

extern "C" {

/* Restarts the three header sprites and the two rows of ten menu sprites, clears the session flags and enters
 * state 1. */
void campMenuSessionReset()
{
    GameData *session = g_gameGlobals.data;
    spriteStartAnimationByIndex(&session->panelSprites[1], 0);
    spriteStartAnimationByIndex(&session->panelSprites[2], 1);
    spriteStartAnimationByIndex(&session->panelSprites[3], 2);
    for (s32 index = 0; index < 10; ++index) {
        uiSpriteSetKeyframe(&session->panelSprites[8 + index], 4, 0);
        uiSpriteSetKeyframe(&session->panelSprites[18 + index], 1, 0);
    }
    gameSetFlag1E60(0);
    session->unk18 = 0;
    session->unk12F0 = 0;
    session->unk1C = 0;
    session->unk20 = 0;
    gameSetState(1);
}
}
