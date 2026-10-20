/* NON_MATCHING: retail reloads g_renderCtx (through a kept address) after the state store; here the pointer load is reused. */
#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 state;
} Scene;

extern Scene *g_renderCtx;

int FUN_0014192c(int arg0, int arg1);
int FUN_00144ab4(void);
int FUN_001575cc(Scene *scene);
int FUN_0017dd80(void);

/* Script command: prepares the scene (FUN_00144ab4, FUN_0017dd80, FUN_0014192c), switches it to state 2 and starts it. */
u32 FUN_00138854(void)
{
    FUN_00144ab4();
    FUN_0017dd80();
    FUN_0014192c(2, 0);
    g_renderCtx->state = 2;
    FUN_001575cc(g_renderCtx);
    return 0;
}

} /* extern "C" */
