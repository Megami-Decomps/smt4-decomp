#include "common.h"
#include "shard/JobWork.h"

struct BattleEvent;

extern "C" {
extern BattleEvent* g_btlEvent;
u32 FUN_004d800c(BattleEvent* event, JobWork* work);

u32 FUN_002761fc(u32 job)
{
    JobWork* work = jobGetWork(job);
    return g_btlEvent != NULL ? FUN_004d800c(g_btlEvent, work) : 0;
}
}
