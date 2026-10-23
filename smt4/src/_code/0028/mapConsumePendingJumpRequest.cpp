#include "map/MapJumpTransition.h"
#include "map/mapDepart.h"

extern "C" {
extern GameState g_gameState;
MapJumpRequest *gameJumpRequestGet(void);
void gameJumpRequestClear(void);
void FUN_00289574(u32 map, u32 entrance, u32 object, f32, f32, f32, f32, f32);
void asdSequenceRequest(u32 sequence, const void *argument, u32 size);
void mapDepartSetTarget(u32 map, u32 entrance, u32 object);

// Consume a saved jump request and optionally switch to its destination sequence.
u32 mapConsumePendingJumpRequest(u32 context, s32 switchSequence)
{
    MapJumpRequest *request = gameJumpRequestGet();
    u32 handled = 0;
    switch (request->kind) {
    case 1:
        handled = 1;
        FUN_00289574(request->map, request->entrance, request->object,
            request->transform[0], request->transform[1], request->transform[2],
            request->transform[3], request->transform[4]);
        if (switchSequence != 0) {
            asdSequenceRequest(6, NULL, 0);
            g_gameState.unk2F8 = 0;
        }
        break;
    case 2:
        handled = 1;
        FUN_00289574(request->map + 100, request->entrance, (u32)-1,
            request->transform[0], request->transform[1], request->transform[2],
            request->transform[3], request->transform[4]);
        g_gameState.currentObjectId = (u32)-1;
        if (switchSequence != 0) {
            asdSequenceRequest(8, NULL, 0);
            g_gameState.unk2F8 = 0;
        }
        break;
    case 3:
        handled = 1;
        if (switchSequence != 0) {
            u32 map = request->map;
            asdSequenceRequest(14, &map, sizeof(map));
            g_gameState.unk2F8 = 0;
        } else {
            mapDepartSetTarget(request->map + 200, 0, 0);
        }
        break;
    }
    gameJumpRequestClear();
    return handled;
}
}
