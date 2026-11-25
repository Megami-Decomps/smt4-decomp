#include "game/GameGlobalsRef.h"
#include "player_model/playerModel.h"

/* Previews the selected equipment on the status model, then requests a refresh. */
extern "C" void statusModelPreviewOutfitPart(s32 part, u16 equipment)
{
    ObjB *game = g_gameGlobals.instance;
    if (part == PLAYER_OUTFIT_HEAD) {
        FUN_0040b27c(game->statusModel, PLAYER_OUTFIT_HEAD, equipment, 7);
    }
    if (part == PLAYER_OUTFIT_BODY) {
        FUN_0040b27c(game->statusModel, PLAYER_OUTFIT_BODY, equipment, 7);
    }
    if (part == PLAYER_OUTFIT_LEGS) {
        FUN_0040b27c(game->statusModel, PLAYER_OUTFIT_LEGS, equipment, 7);
    }
    gameStateChange(STATUS_MODEL_REFRESH);
}
