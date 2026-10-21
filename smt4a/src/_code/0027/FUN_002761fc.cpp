/* NON_MATCHING: retail uses ldr r2, [pc, #32] where the compiled block uses ldr r0, [pc, #20]. */
#include "common.h"

struct BattleEvent;
struct JobWork;

extern "C" {
JobWork* jobGetWork(void);
extern BattleEvent* g_btlEvent;
u32 FUN_004d800c(BattleEvent* event, JobWork* work);

u32 FUN_002761fc(void)
{
    JobWork* work = jobGetWork();
    BattleEvent* event = g_btlEvent;
    if (event == NULL) {
        return 0;
    }
    return FUN_004d800c(event, work);
}
}
