#include "code/Code0018_Smt4a.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00184c4c_hook(void);

void debugQuadVertex(u32 color, nw::math::VEC3 position, f32 u, f32 v)
{
    FUN_00184c4c_hook();
}

} /* extern "C" */
