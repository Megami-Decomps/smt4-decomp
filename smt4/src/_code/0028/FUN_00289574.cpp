/* NON_MATCHING: the pool word now names g_gameState+0x3f8 like retail; the build uses r0 where retail uses ip for the float-store base. */
#include "map/mapDepart.h"

extern "C" {
extern GameState g_gameState;

/* Set the pending map/entrance/object jump and its five transform parameters. */
void FUN_00289574(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e)
{
    GameStateJumpRequest *request = &g_gameState.jump.request;
    request->first = first;
    request->second = second;
    request->flags = 0xffffffff;
    request->values[0] = a;
    request->values[1] = b;
    request->values[2] = c;
    request->values[3] = d;
    request->values[4] = e;
    request->third = third;
}
}
