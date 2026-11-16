/* NON_MATCHING: the position is now assigned as one vector (vstmia + vstr as in retail); retail still loads stateFlags only after the flag byte store, where the build hoists it. */
#include "common.h"
struct Vector3 {
    Vector3() {}
    Vector3(f32 x, f32 y, f32 z) : x(x), y(y), z(z) {}
    f32 x, y, z;
};
struct WindowState { u8 unk00[12]; u8 flags; u8 unk0D[111]; u32 stateFlags; u8 unk80[48]; Vector3 position; };
/* Marks the window dirty and moves it offscreen. */
extern "C" void FUN_0048286c(WindowState *window)
{
    window->flags |= 4;
    window->stateFlags |= 4;
    window->position = Vector3(0.0f, -500.0f, 0.0f);
}
