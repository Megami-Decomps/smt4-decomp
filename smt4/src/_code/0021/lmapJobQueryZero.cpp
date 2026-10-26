/* The result is the battle-debug work pointer, reported as zero once it has been consumed. */
#include "shard/JobWork.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

s32 lmapJobQueryZero(u32 job)
{
    jobGetWork(job);
    s32 result = (s32)g_btlDebugState.work;
    if (result != 0)
        result = 0;
    return result;
}

}
