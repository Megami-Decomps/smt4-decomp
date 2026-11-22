#include "code/Code002a_Smt4.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002aff70_hook(void);

void debugQuadVertex(u32 color, nw::math::VEC3 position, f32 u, f32 v)
{
    FUN_002aff70_hook();
}

} /* extern "C" */
