#include "shard/ScriptStep.h"

extern "C" {

int FUN_002a0d4c(ScriptStep *script, int command);

/* Script command: runs sub-command 10 and advances to the next step. */
s32 FUN_0018b478(ScriptStep *script)
{
    FUN_002a0d4c(script, 10);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
