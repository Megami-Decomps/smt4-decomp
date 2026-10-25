#include "gfx/NamedTextureCache.h"

extern "C" {


extern NamedTextureCache g_textureCache;

/* Maps the state (4 or 5) to a direction: 1 or -1; 0 for any other state. */
s32 FUN_003c5d8c(void)
{
    switch (g_textureCache.state) {
    case 4:
        return 1;
    case 5:
        return -1;
    default:
        return 0;
    }
}

} /* extern "C" */
