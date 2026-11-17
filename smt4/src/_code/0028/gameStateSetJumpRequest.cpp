#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {

/* Set the pending map/entrance/object jump and its five transform parameters. */
void gameStateSetJumpRequest(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e)
{
    GameStateJumpRequest *request = &g_gameState.jumpRequest;
    request->selection.group = first;
    request->selection.map = second;
    request->selection.target = 0xffffffff;
    request->position.x = a;
    request->position.y = b;
    request->position.z = c;
    request->heading = d;
    request->parameter = e;
    request->selection.destination = third;
}
}
