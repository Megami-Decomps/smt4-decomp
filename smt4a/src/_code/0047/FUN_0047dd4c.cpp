/* NON_MATCHING: transition-flag lifetime and secondary game-state literal relocation differ. */
#include "addon/aocMain.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "map/lmapMain.h"
#include "map/mapDepart.h"
#include "map/SavedMapTransition.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
s32 gameStateIsFlagSetAndLarge();
s32 lmapMainGetUnk74();
void titleSetSlotValueState2(s32, s32);
void mapPlaceSet(u32, u32, u32);
void gameSaveBlockRebuild27E98();
void sysClearCachedFlag();

/* Restores the saved map destination, chooses its sequence, and marks the add-on transition handled. */
void FUN_0047dd4c(AocScriptHolder *work)
{
    const SavedMapTransition *packet = (const SavedMapTransition *)gameBlockGetArea27E98();
    switch (packet->kind) {
    case 1:
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = packet->map;
        g_gameState.savedAreaId = packet->area;
        g_gameState.savedObjectId = packet->entrance;
        g_gameState.savedPosition.x = packet->position[0];
        g_gameState.savedPosition.y = packet->position[1];
        g_gameState.savedPosition.z = packet->position[2];
        g_gameState.savedHeading = packet->heading;
        g_gameState.savedHeadingCopy = packet->cameraHeading;
        asdSequenceRequest(6, NULL, 0);
        break;
    case 2:
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = packet->map + 100;
        g_gameState.savedAreaId = packet->area;
        g_gameState.savedObjectId = -1;
        g_gameState.savedPosition.x = packet->position[0];
        g_gameState.savedPosition.y = packet->position[1];
        g_gameState.savedPosition.z = packet->position[2];
        g_gameState.savedHeading = packet->heading;
        g_gameState.savedHeadingCopy = packet->cameraHeading;
        asdSequenceRequest(8, NULL, 0);
        break;
    case 3: {
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = packet->map;
        g_gameState.savedAreaId = 0;
        u32 destination = packet->map;
        asdSequenceRequest(14, &destination, sizeof(destination));
        break;
    }
    default:
        if (gameStateIsFlagSetAndLarge()) {
            u32 destination = g_gameState.savedMapId - 200;
            asdSequenceRequest(14, &destination, sizeof(destination));
        } else if (FUN_002cf854()) {
            asdSequenceRequest(8, NULL, 0);
        } else if (lmapMainGetUnk74()) {
            asdSequenceRequest(6, NULL, 0);
        }
        break;
    }
    titleSetSlotValueState2(0, 10);
    titleSetSlotValueState2(1, 10);
    mapPlaceSet(-1, -1, -1);
    gameSaveBlockRebuild27E98();
    AocMain *aoc = (AocMain *)((u8 *)work - offsetof(AocMain, scriptHolder));
    aoc->skipRestore = 1;
    sysClearCachedFlag();
}
} /* extern "C" */
