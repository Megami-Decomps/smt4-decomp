#include "common.h"
#include "shard/JobWork.h"

struct BattleEditor;

extern "C" {
extern BattleEditor* g_btlEditor;
u32 FUN_004f4a74(BattleEditor* editor, JobWork* work);

u32 FUN_002984d4(u32 job)
{
    JobWork* work = jobGetWork(job);
    if (g_btlEditor == NULL) {
        return 0;
    }
    return FUN_004f4a74(g_btlEditor, work);
}
}
