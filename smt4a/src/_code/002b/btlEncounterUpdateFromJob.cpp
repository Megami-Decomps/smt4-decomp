#include "common.h"
extern "C" {
extern void *g_btlEncount;
void *jobGetWork(void);
u32 FUN_003e2bd8(void *encounter, void *work);
u32 btlEncounterUpdateFromJob(void) {
    void *work = jobGetWork();
    if (!g_btlEncount) return 0;
    return FUN_003e2bd8(g_btlEncount, work);
}
}
