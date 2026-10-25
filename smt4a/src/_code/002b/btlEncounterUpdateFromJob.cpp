#include "common.h"
#include "shard/JobWork.h"
extern "C" {
extern void *g_btlEncount;
u32 battleEncounterTaskUpdate(void *encounter, void *work);
u32 btlEncounterUpdateFromJob(u32 job) {
    void *work = (void *)jobGetWork(job);
    if (!g_btlEncount) return 0;
    return battleEncounterTaskUpdate(g_btlEncount, work);
}
}
