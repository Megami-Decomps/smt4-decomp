#include "game/GameGlobalsRef.h"
#include "player_model/playerModel.h"

/* Restores one equipped outfit part to the status model, then requests a refresh. */
extern "C" void statusModelRestoreOutfitPart(s32 part)
{
    ObjB *game = g_gameGlobals.instance;
    if (part == PLAYER_OUTFIT_HEAD) {
        playerLoadOutfitPartModel(game->statusModel, PLAYER_OUTFIT_HEAD, 7);
    }
    if (part == PLAYER_OUTFIT_BODY) {
        playerLoadOutfitPartModel(game->statusModel, PLAYER_OUTFIT_BODY, 7);
    }
    if (part == PLAYER_OUTFIT_LEGS) {
        playerLoadOutfitPartModel(game->statusModel, PLAYER_OUTFIT_LEGS, 7);
    }
    gameStateChange(STATUS_MODEL_REFRESH);
}
