/* NON_MATCHING: default map destination is stored with words instead of three halfword stores. */
#include "map/MapJumpTransition.h"
#include "map/mapDepart.h"

extern "C" {
MapJumpRequest *gameJumpRequestGet(void);
void gameJumpRequestClear(void);
void FUN_00289574(s32, s32, s32, f32, f32, f32, f32, f32);
void FUN_002bd808(MapJumpDestination *, const MapJumpDestination *);
extern GameState g_gameState;
}

/* Dispatch a saved map jump, then return the transition to its waiting state. */
extern "C" void FUN_003ba1d8(MapJumpTransition *work)
{
    const MapJumpRequest *request = gameJumpRequestGet();
    switch (request->kind) {
    case 1:
        FUN_00289574(request->map, request->entrance, request->object,
                     request->transform[0], request->transform[1], request->transform[2],
                     request->transform[3], request->transform[4]);
        work->flags |= 0x80010;
        break;
    case 2:
        FUN_00289574(request->map + 100, request->entrance, -1,
                     request->transform[0], request->transform[1], request->transform[2],
                     request->transform[3], request->transform[4]);
        g_gameState.currentObjectId = (u32)-1;
        work->flags |= 0x80010;
        break;
    case 3:
        MapJumpDestination destination = {0, 0, 0};
        destination.map = request->map;
        FUN_002bd808(&work->destination, &destination);
        work->flags |= 0x10;
        break;
    }
    gameJumpRequestClear();
    work->state = 5;
    work->substate = 0;
}
