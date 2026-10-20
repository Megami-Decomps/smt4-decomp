#include "common.h"

extern "C" {

typedef struct StageState {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ s32 stage;
} StageState;

extern StageState DAT_0044cf60; /* 0x44cf60 */

extern int asdTMTexTableNodeIsLoaded(u32 table, u32 node);

/* Whether the texture table node the current stage (0x65, 0x66 or 0x67) needs is loaded; true for any other stage. */
u32 FUN_00287758(void)
{
    if (DAT_0044cf60.stage == 0x65 && asdTMTexTableNodeIsLoaded(0x1C, 6) == 0) {
        return 0;
    }
    if (DAT_0044cf60.stage == 0x66 && asdTMTexTableNodeIsLoaded(0x1C, 7) == 0) {
        return 0;
    }
    if (DAT_0044cf60.stage == 0x67 && asdTMTexTableNodeIsLoaded(0x1C, 8) == 0) {
        return 0;
    }
    return 1;
}

}
