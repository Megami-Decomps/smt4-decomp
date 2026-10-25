/* NON_MATCHING: compiler schedules vector stores before flag stores. */
#include "common.h"
struct Vector3 { f32 x, y, z; };
struct WindowState { u8 unk00[12]; u8 flags; u8 unk0D[111]; u32 stateFlags; u8 unk80[48]; Vector3 position; };
/* Marks the window dirty and moves it offscreen. */
extern "C" void FUN_0048286c(WindowState *window)
{
    window->flags |= 4;
    window->stateFlags |= 4;
    window->position.x = 0;
    window->position.y = -500.0f;
    window->position.z = 0;
}
