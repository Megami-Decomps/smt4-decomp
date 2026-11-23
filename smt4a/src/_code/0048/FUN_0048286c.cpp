/* NON_MATCHING: the position is assigned as one vector (vstmia + vstr as in retail) and stateFlags is set through the family's
 * flagsSetBits (retail's load order); only the flag byte's temporary differs (retail r2, the build r1).
 * Setting the byte through a `u8 *` as well gives retail's registers here and in smt4's FUN_00396044, but nothing in
 * retail shows such a pointer or a byte-flag helper. */
#include "common.h"
#include "util/BitsAndBytes.h"
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
    flagsSetBits(&window->stateFlags, 4);
    window->position = Vector3(0.0f, -500.0f, 0.0f);
}
