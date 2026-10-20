#include "shard/ScriptStep.h"

extern "C" {

int FUN_002a0d4c(ScriptStep *script, int command);

/* Script command: runs sub-command 2 and advances to the next step. */
s32 FUN_00192948(ScriptStep *script)
{
    FUN_002a0d4c(script, 2);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
