/* NON_MATCHING: retail pushes r4/lr before the null test and branches around the call; armcc shrink-wraps the early return (or predicates the call) instead. */
#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

void FUN_003c28dc(void *fade);

/* "NAVI FADE DRAW" task: advances and draws the navi screen's fade, if the navi object exists; returns 0. */
u32 FUN_001fc4f8(void)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    FUN_003c28dc(g_naviMain->settings);
    return 0;
}

} /* extern "C" */
