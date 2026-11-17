#include "map/MapJumpTransition.h"
#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {
MapJumpRequest *gameJumpRequestGet(void);
void gameJumpRequestClear(void);
void gameStateSetJumpRequest(s32, s32, s32, f32, f32, f32, f32, f32);
/* armcc copy helper, called by an opaque name (config alias): the call keeps the dead store retail has */
void ARM_common_memcpy4_6_call(MapJumpDestination *, const MapJumpDestination *);
}

/* Dispatch a saved map jump, then return the transition to its waiting state. */
extern "C" void FUN_003ba1d8(MapJumpTransition *work)
{
    const MapJumpRequest *request = gameJumpRequestGet();
    switch (request->kind) {
    case 1:
        gameStateSetJumpRequest(request->map, request->entrance, request->object,
                     request->transform[0], request->transform[1], request->transform[2],
                     request->transform[3], request->transform[4]);
        work->flags |= 0x80010;
        break;
    case 2:
        gameStateSetJumpRequest(request->map + 100, request->entrance, -1,
                     request->transform[0], request->transform[1], request->transform[2],
                     request->transform[3], request->transform[4]);
        g_gameState.currentObjectId = (u32)-1;
        work->flags |= 0x80010;
        break;
    case 3:
        MapJumpDestination destination;
        mapJumpDestinationClear(&destination);
        destination.map = request->map;
        ARM_common_memcpy4_6_call(&work->destination, &destination);
        work->flags |= 0x10;
        break;
    }
    gameJumpRequestClear();
    work->state = 5;
    work->substate = 0;
}
