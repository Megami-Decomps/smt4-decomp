#include "shard/ScriptStep.h"

extern "C" {

int FUN_002a0d4c(ScriptStep *script, int command);

/* Script command: runs sub-command 3 and advances to the next step. */
s32 FUN_001928f8(ScriptStep *script)
{
    FUN_002a0d4c(script, 3);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
