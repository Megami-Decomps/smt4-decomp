#include "common.h"

extern "C" {

int cecRefreshAcceptedContextResource(u32 object);

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 object;
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

void FUN_0025461c(void)
{
    if (g_cecProcess != NULL) {
        cecRefreshAcceptedContextResource(g_cecProcess->object);
    }
}

} /* extern "C" */
