#include "common.h"

extern "C" {

extern void *g_btlMain;

int FUN_003d7404(void *obj, u32 arg);
u32 jobGetWork(void);

/* If the global object exists, passes it and jobGetWork() to FUN_003d7404 and returns its result; otherwise returns 0. */
int FUN_001e4a1c(void)
{
    u32 arg = jobGetWork();

    if (g_btlMain != NULL) {
        return FUN_003d7404(g_btlMain, arg);
    }
    return 0;
}

} /* extern "C" */
