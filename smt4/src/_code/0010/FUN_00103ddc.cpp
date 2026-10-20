/* NON_MATCHING: retail reloads g_titleScene after the phase store (ldr r4,[pc]; ldr r0,[r4] twice); the build keeps the first load. */
#include "common.h"

extern "C" {

typedef struct TitleScene {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ s32 phase;
} TitleScene;

extern TitleScene *g_titleScene; /* 0x44ea00 */

extern int FUN_002c35b0(void);
extern int FUN_002bdb44(void);
extern int FUN_002c3530(int a, int b);
extern int FUN_002c3a14(TitleScene *scene);

/* Switches the title scene to phase 2 and refreshes it. */
u32 FUN_00103ddc(void)
{
    FUN_002c35b0();
    FUN_002bdb44();
    FUN_002c3530(2, 0);
    g_titleScene->phase = 2;
    FUN_002c3a14(g_titleScene);
    return 0;
}

} /* extern "C" */
