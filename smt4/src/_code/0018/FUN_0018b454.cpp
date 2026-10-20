#include "shard/ScriptStep.h"

extern "C" {

int FUN_002a0d4c(ScriptStep *script, int command);

/* Script command: runs sub-command 4 and advances to the next step. */
s32 FUN_0018b454(ScriptStep *script)
{
    FUN_002a0d4c(script, 4);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
