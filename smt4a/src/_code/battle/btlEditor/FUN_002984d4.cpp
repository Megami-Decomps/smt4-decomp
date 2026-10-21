/* NON_MATCHING: retail uses ldr r2, [pc, #32] where the compiled block uses ldr r0, [pc, #20]. */
#include "common.h"

struct BattleEditor;
struct JobWork;

extern "C" {
extern BattleEditor* g_btlEditor;
JobWork* jobGetWork(void);
u32 FUN_004f4a74(BattleEditor* editor, JobWork* work);

u32 FUN_002984d4(void)
{
    JobWork* work = jobGetWork();
    BattleEditor* editor = g_btlEditor;
    if (editor != NULL) {
        return FUN_004f4a74(editor, work);
    }
    return 0;
}
}
