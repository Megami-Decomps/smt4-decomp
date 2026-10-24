#include "common.h"

struct LmapScene0037d544 {
    /* 0x000 */ u8 unk000[0x250];
    /* 0x250 */ s32 state;
};

extern "C" {

extern LmapScene0037d544 *g_lmapScene;

/* Script command: sets the map scene's state at 0x250 to two. */
s32 FUN_0037d544(void)
{
    g_lmapScene->state = 2;
    return 1;
}

} /* extern "C" */
