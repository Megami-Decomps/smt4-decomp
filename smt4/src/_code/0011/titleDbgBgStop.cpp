#include "common.h"

extern "C" {

struct DebugBackgroundProcess {
    u32 process; // 0x00
};

extern DebugBackgroundProcess *g_titleDbgBg;
u32 jobStop(u32 handle, u16 delay);

/* Stops the title debug background process. */
void titleDbgBgStop(void)
{
    jobStop(g_titleDbgBg->process, 0);
}

} /* extern "C" */
