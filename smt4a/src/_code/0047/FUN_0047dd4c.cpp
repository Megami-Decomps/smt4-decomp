/* NON_MATCHING: transition-flag lifetime and secondary game-state literal relocation differ. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/lmapMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"

struct MapSavedReturnPacket {
    u8 kind, map, area, object;
    MapVector position;
    f32 heading;
    f32 headingCopy;
};
typedef char MapSavedReturnPacketOffsets[
    offsetof(MapSavedReturnPacket, position) == 4 &&
    offsetof(MapSavedReturnPacket, headingCopy) == 0x14 &&
    sizeof(MapSavedReturnPacket) == 0x18 ? 1 : -1];

extern "C" {
const MapSavedReturnPacket *gameBlockGetArea27E98();
s32 gameStateIsFlagSetAndLarge();
s32 lmapMainGetUnk74();
void titleSetSlotValueState2(s32, s32);
void mapPlaceSet(u32, u32, u32);
void FUN_004731d8();
void sysClearCachedFlag();

/* Restore the saved map destination, choose its sequence and finish the departure. */
void FUN_0047dd4c(void *work)
{
    struct DepartureCompletionView { u8 unk00[0x19]; bool complete; };
    const MapSavedReturnPacket *packet = gameBlockGetArea27E98();
    switch (packet->kind) {
    case 1:
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = packet->map;
        g_gameState.savedAreaId = packet->area;
        g_gameState.savedObjectId = packet->object;
        g_gameState.savedPosition.x = packet->position.x;
        g_gameState.savedPosition.y = packet->position.y;
        g_gameState.savedPosition.z = packet->position.z;
        g_gameState.savedHeading = packet->heading;
        g_gameState.savedHeadingCopy = packet->headingCopy;
        asdSequenceRequest(6, NULL, 0);
        break;
    case 2:
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = packet->map + 100;
        g_gameState.savedAreaId = packet->area;
        g_gameState.savedObjectId = -1;
        g_gameState.savedPosition.x = packet->position.x;
        g_gameState.savedPosition.y = packet->position.y;
        g_gameState.savedPosition.z = packet->position.z;
        g_gameState.savedHeading = packet->heading;
        g_gameState.savedHeadingCopy = packet->headingCopy;
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
    FUN_004731d8();
    ((DepartureCompletionView *)work)->complete = true;
    sysClearCachedFlag();
}
}
