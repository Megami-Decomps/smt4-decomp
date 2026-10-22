#include "common.h"
extern "C" {
extern void *g_btlEncount;
void *jobGetWork(void);
u32 battleEncounterTaskUpdate(void *encounter, void *work);
u32 btlEncounterUpdateFromJob(void) {
    void *work = jobGetWork();
    if (!g_btlEncount) return 0;
    return battleEncounterTaskUpdate(g_btlEncount, work);
}
}
