#include "AsdSDK/Source/Gfx/Prim/AsdPrim.h"

extern "C" {

extern AsdPrimBuffers g_asdPrimBuffers;

/* Switches to the other scratch buffer and empties it. */
void asdPrimSwapBuffers(void)
{
    g_asdPrimBuffers.current = 1 - g_asdPrimBuffers.current;
    g_asdPrimBuffers.used[g_asdPrimBuffers.current] = 0;
}

} /* extern "C" */
