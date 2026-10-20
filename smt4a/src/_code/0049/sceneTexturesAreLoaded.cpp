#include "common.h"

extern "C" {

typedef struct GameMode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 scene;
} GameMode;

extern GameMode DAT_00587fdc; /* 0x587fdc */

extern int asdTMTexTableNodeIsLoaded(u32 table, u32 node);

/* Whether the texture node the current scene (0x65-0x67) needs is loaded; other scenes need none. */
u32 sceneTexturesAreLoaded(void)
{
    if (DAT_00587fdc.scene == 0x65 && asdTMTexTableNodeIsLoaded(0x13, 6) == 0) {
        return 0;
    }
    if (DAT_00587fdc.scene == 0x66 && asdTMTexTableNodeIsLoaded(0x13, 7) == 0) {
        return 0;
    }
    if (DAT_00587fdc.scene == 0x67 && asdTMTexTableNodeIsLoaded(0x13, 8) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
