#include "common.h"

extern "C" {

struct DebugBackgroundProcess {
    u32 process; // 0x00
};

extern DebugBackgroundProcess *DAT_0044e2e8;
u32 jobStop(u32 handle, u16 delay);

/* Stops the title debug background process. */
void titleDbgBgStop(void)
{
    jobStop(DAT_0044e2e8->process, 0);
}

} /* extern "C" */
