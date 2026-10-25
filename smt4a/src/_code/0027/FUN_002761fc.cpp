/* NON_MATCHING: retail uses ldr r2, [pc, #32] where the compiled block uses ldr r0, [pc, #20]. */
#include "common.h"
#include "shard/JobWork.h"

struct BattleEvent;

extern "C" {
extern BattleEvent* g_btlEvent;
u32 FUN_004d800c(BattleEvent* event, JobWork* work);

u32 FUN_002761fc(u32 job)
{
    JobWork* work = jobGetWork(job);
    BattleEvent* event = g_btlEvent;
    if (event == NULL) {
        return 0;
    }
    return FUN_004d800c(event, work);
}
}
