#include "shard/ScriptStep.h"

extern "C" {

int FUN_002a0d4c(ScriptStep *script, int command);

/* Script command: runs sub-command 0 and advances to the next step. */
s32 FUN_001928b0(ScriptStep *script)
{
    FUN_002a0d4c(script, 0);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
